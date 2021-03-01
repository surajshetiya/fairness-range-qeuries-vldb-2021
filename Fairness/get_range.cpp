#include<iostream>
#include<unordered_map>
#include<boost/heap/pairing_heap.hpp>
#include<cmath>
#include<vector>
#include"range_tree.h"
#include<chrono>


double get_double(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

using namespace std;

int main(int argc, char *argv[]) {
    unordered_map<int, vector<pair<pair<double, double>, pair<double, double>>>> map_result;
    double startRangeDummy[2], endRangeDummy[2];
    //RangeTree rt("data/10k_new.csv", startRangeDummy, endRangeDummy);
    //double startX=-0.507015, endX=0.297345, startY=51.306584, endY=51.660974;
    /*
    startRangeDummy[0] = 0;
    startRangeDummy[1] = 1;
    endRangeDummy[0] = 0;
    endRangeDummy[1] = 1;
    */
    int start=200, end=2000;
    int count = 20;
    RangeTree rt("data/uniform.csv", startRangeDummy, endRangeDummy);
    double startX=0., endX=1000., startY=0., endY=1000.;
    for(int i=start; i <= end; i += 200) {
        vector<pair<pair<double, double>, pair<double, double>>> empty;
        // Insert an empty vector for each value of i
        map_result.insert(make_pair(i, empty));
    }
    for(int i=0; i < 10000; ++i) {
        double t0 = get_double(startX, endX), t1 = get_double(startX, endX);
        double x0, x1, y0, y1;
        x0 = min(t0, t1);
        x1 = max(t0, t1);
        t0 = get_double(startY,  endY);
        t1 = get_double(startY, endY);
        y0 = min(t0, t1);
        y1 = max(t0, t1);
        double skylineStart[2], skylineEnd[2];
        skylineStart[0] = x0;
        skylineStart[1] = y0;
        skylineEnd[0] = x1;
        skylineEnd[1] = y1;
        range skylineRange(skylineStart, skylineEnd, true, true, true, true);
        vector<Point> *pointsInSkyline = rt.findPointsInRange(skylineRange);
        int length = pointsInSkyline->size();
        delete pointsInSkyline;
        int bucket = 200*ceil(length/200);
        if(bucket > end || bucket < start || map_result.find(bucket)->second.size() >= count) {
            continue;
        }
        pair<double, double> startRange = make_pair(x0, y0), endRange = make_pair(x1, y1);
        map_result.find(bucket)->second.push_back(make_pair(startRange, endRange));
    }
    for(int i=start; i<= end; i += 200) {
        auto range_vectors = map_result.find(i)->second;
        cout << "Exploring bucket " << i << endl << endl;
        for(int j=0; j < range_vectors.size(); ++j) {
            cout << "[" << range_vectors.at(j).first.first << "," << range_vectors.at(j).first.second << "]";
            cout << "[" << range_vectors.at(j).second.first << "," << range_vectors.at(j).second.second << "]";
            cout << endl;
        }
    }
}
