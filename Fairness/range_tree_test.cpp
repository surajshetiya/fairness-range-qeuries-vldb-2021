#include "range_tree.h"
#include <string>
#include <vector>

using namespace std;

bool compare2dArray(double a[], double b[]) {
    return a[0] == b[0] && a[1] == b[1];
}

int topRightSkyline() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;

    RangeTree myTree("./data/topRightTestData.csv", mock1, mock2);
    double *start = new double[2];
    start[0] = 0.0;
    start[1] = -0.1;
    double *end = new double[2];
    end[0] = 3.1;
    end[1] = 3.0;
    
    vector<Point> *skyline = myTree.findSkyline(start, end);

    double point1[] = {3.0, 1.02};
    double point2[] = {2.5, 2.0};
    double point3[] = {1.03, 2.5};

    if ((*skyline).size() != 3) {
        return false;
    } else if (!compare2dArray((*skyline)[0].coordinates, point1)) {
        return false;
    } else if (!compare2dArray((*skyline)[1].coordinates, point2)) {
        return false;
    } else if (!compare2dArray((*skyline)[2].coordinates, point3)) {
        return false;
    }

    return true;
}

int topLeftSkyline() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/topLeftTestData.csv", mock1, mock2);
    
    double *start = new double[2];
    start[0] = 0.0;
    start[1] = -0.1;
    double *end = new double[2];
    end[0] = -3.1;
    end[1] = 3.0;

    double point1[] = {-3.0, 1.02};
    double point2[] = {-2.5, 2.0};
    double point3[] = {-1.03, 2.5};

    vector<Point> *skyline = myTree.findSkyline(start, end);

    if ((*skyline).size() != 3) {
        return false;
    } else if (!compare2dArray((*skyline)[0].coordinates, point1)) {
        return false;
    } else if (!compare2dArray((*skyline)[1].coordinates, point2)) {
        return false;
    } else if (!compare2dArray((*skyline)[2].coordinates, point3)) {
        return false;
    }

    return true;
}

int bottomLeftSkyline() {

    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/bottomLeftTestData.csv", mock1, mock2);

    double *start = new double[2];
    start[0] = 0.0;
    start[1] = 0.1;
    double *end = new double[2];
    end[0] = -3.1;
    end[1] = -3.0;

    vector<Point> *skyline = myTree.findSkyline(start, end);

    double point1[] = {-3.0, -1.02};
    double point2[] = {-2.5, -2.0};
    double point3[] = {-1.03, -2.5};

    if ((*skyline).size() != 3) {
        return false;
    } else if (!compare2dArray((*skyline)[0].coordinates, point1)) {
        return false;
    } else if (!compare2dArray((*skyline)[1].coordinates, point2)) {
        return false;
    } else if (!compare2dArray((*skyline)[2].coordinates, point3)) {
        return false;
    }
    return true;
}

int bottomRightSkyline() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;

    RangeTree myTree("./data/bottomRightTestData.csv", mock1, mock2);
    
    double *start = new double[2];
    start[0] = 0.0;
    start[1] = 0.1;
    double *end = new double[2];
    end[0] = 3.1;
    end[1] = -3.0;

    vector<Point> *skyline = myTree.findSkyline(start, end);

    double point1[] = {3.0, -1.02};
    double point2[] = {2.5, -2.0};
    double point3[] = {1.03, -2.5};

    if ((*skyline).size() != 3) {
        return false;
    } else if (!compare2dArray((*skyline)[0].coordinates, point1)) {
        return false;
    } else if (!compare2dArray((*skyline)[1].coordinates, point2)) {
        return false;
    } else if (!compare2dArray((*skyline)[2].coordinates, point3)) {
        return false;
    }

    return true;
}

int allDataSkyline1() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/10k_urban_gb.csv", mock1, mock2);
    double *start = new double[2];
    start[0] = 0.0;
    start[1] = 51.0;
    double *end = new double[2];
    end[0] = 0.1;
    end[1] = 52.0;

    vector<Point> *skyline = myTree.findSkyline(start, end);

    return true;
}

int allDataSkyline2() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;

    RangeTree myTree("./data/10k_urban_gb.csv", mock1, mock2);
    double *start = new double[2];
    start[0] = 0.1;
    start[1] = 51.0;
    double *end = new double[2];
    end[0] = 0.0;
    end[1] = 52.0;

    vector<Point> *skyline = myTree.findSkyline(start, end);

    return true;
}

int allDataSkyline3() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;

    RangeTree myTree("./data/10k_urban_gb.csv", mock1, mock2);
    double *start = new double[2];
    start[0] = 0.1;
    start[1] = 52.0;
    double *end = new double[2];
    end[0] = 0.0;
    end[1] = 51.0;


    vector<Point> *skyline = myTree.findSkyline(start, end);

    return true;
}

int allDataSkyline4() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;

    RangeTree myTree("./data/10k_urban_gb.csv", mock1, mock2);
    double *start = new double[2];
    start[0] = 0.0;
    start[1] = 52.0;
    double *end = new double[2];
    end[0] = 0.1;
    end[1] = 51.0;


    vector<Point> *skyline = myTree.findSkyline(start, end);

    return true;
}

int quadrantOneXMinimum() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/topRightTestData.csv", mock1, mock2);
    double *start = new double[2];
    start[0] = 0.0;
    start[1] = -0.1;
    double *end = new double[2];
    end[0] = 3.1;
    end[1] = 3.0;

    Point *p = myTree.findNearest(start, end, 0);

    if (p == nullptr) {
        return false;
    }

    return p->coordinates[0] == 1.03 && p->coordinates[1] == 2.5;
}

int quadrantOneYMinimum() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/topRightTestData.csv", mock1, mock2);

    double *start = new double[2];
    start[0] = 0.0;
    start[1] = -0.1;
    double *end = new double[2];
    end[0] = 3.1;
    end[1] = 3.0;

    Point *p = myTree.findNearest(start, end, 1);


    if (p == nullptr) {
        return false;
    }

    return p->coordinates[0] == 3.0 && p->coordinates[1] == 1.02;
}

int quadrantThreeYMaximum() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/bottomLeftTestData.csv", mock1, mock2);

    double *start = new double[2];
    start[0] = 0.0;
    start[1] = 0.1;
    double *end = new double[2];
    end[0] = -3.1;
    end[1] = -3.0;

    Point *p = myTree.findNearest(start, end, 1);


    if (p == nullptr) {
        return false;
    }

    return p->coordinates[0] == -3.0 && p->coordinates[1] == -1.02;
}

int quadrantThreeXMaximum() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/bottomLeftTestData.csv", mock1, mock2);

    double *start = new double[2];
    start[0] = 0.0;
    start[1] = 0.1;
    double *end = new double[2];
    end[0] = -3.1;
    end[1] = -3.0;

    Point *p = myTree.findNearest(start, end, 0);

    if (p == nullptr) {
        return false;
    }

    return p->coordinates[0] == -1.03 && p->coordinates[1] == -2.5;
}

int oneDominatingSkylinePoint() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/oneDominatingPoint.csv", mock1, mock2);

    double *start = new double[2];
    start[0] = 0.0;
    start[1] = -0.1;
    double *end = new double[2];
    end[0] = 3.1;
    end[1] = 3.0;
    
    vector<Point> *p = myTree.findSkyline(start, end);

    return p->size() == 1 && p->at(0).coordinates[0] == 1.03 && p->at(0).coordinates[1] == 2.5;
}


int oneSkylinePointInRange() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/onePointInRange.csv", mock1, mock2);

    double *start = new double[2];
    start[0] = 0.0;
    start[1] = -0.1;
    double *end = new double[2];
    end[0] = 3.1;
    end[1] = 3.0;

    vector<Point> *p = myTree.findSkyline(start, end);

    return p->size() == 1 && p->at(0).coordinates[0] == 1.03 && p->at(0).coordinates[1] == 2.5;
}



int zeroSkylinePointsInRange() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/zeroPointInRange.csv", mock1, mock2);

    double *start = new double[2];
    start[0] = 0.0;
    start[1] = -0.1;
    double *end = new double[2];
    end[0] = 3.1;
    end[1] = 3.0;

    vector<Point> *p = myTree.findSkyline(start, end);

    return p->size() == 0;
}

int oneExtremaPointInRange() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/onePointInRange.csv", mock1, mock2);

    double *start = new double[2];
    start[0] = 0.0;
    start[1] = -0.1;
    double *end = new double[2];
    end[0] = 3.1;
    end[1] = 3.0;

    Point *p = myTree.findNearest(start, end, 0);

    return p->coordinates[0] == 1.03 && p->coordinates[1] == 2.5;
}

int zeroExtremaPointInRange() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/zeroPointInRange.csv", mock1, mock2);

    double *start = new double[2];
    start[0] = 0.0;
    start[1] = -0.1;
    double *end = new double[2];
    end[0] = 3.1;
    end[1] = 3.0;

    Point *p = myTree.findNearest(start, end, 0);

    return p == nullptr;
}

int smallerRangeContainsLessValues() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/10k_new.csv", mock1, mock2);
    
    double *largerStart = new double[2];
    largerStart[0] = -0.1;
    largerStart[1] = 51.31;
    double *largerEnd = new double[2];
    largerEnd[0] = 0;
    largerEnd[1] = 51.44;

    double *smallerStart = new double[2];
    smallerStart[0] = -0.098026000000000002;
    smallerStart[1] = 51.368192000000001;
    double *smallerEnd = new double[2];
    smallerEnd[0] = -2.9e-05;
    smallerEnd[1] = 51.439680000000003;

    range largerRange = {largerStart, largerEnd, true, true, true, true};
    range smallerRange = {smallerStart, smallerEnd, true, true, true, true};

    vector<Point> *largerRangePoints = myTree.findPointsInRange(largerRange);
    vector<Point> *smallerRangePoints = myTree.findPointsInRange(smallerRange);

    return smallerRangePoints->size() <= largerRangePoints->size();
}

int rangeContainsNoDuplicates() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/10k_new.csv", mock1, mock2);

    double *start = new double[2];
    start[0] = -0.098026000000000002;
    start[1] = 51.368192000000001;
    double *end = new double[2];
    end[0] = -2.9e-05;
    end[1] = 51.439680000000003;

    range r = {start, end, true, true, true, true};

    vector<Point> *points = myTree.findPointsInRange(r);

    for (int i = 0; i < points->size()-1; i++) {
        for (int j = i+1; j < points->size(); j++) {
            if (compare2dArray(points->at(i).coordinates, points->at(j).coordinates)) {
                cout << "{" << points->at(i).coordinates[0] << ", " << points->at(i).coordinates[1] << "}, {" << points->at(j).coordinates[0] << ", " << points->at(j).coordinates[1] << "}" << endl;
                return false;
            }
        }
    }

    return true;
}

int noBoundaryInNearest() {
    double *mock1 = new double[2];
    mock1[0] = 0.0;
    mock1[1] = 0.0;
    double *mock2 = new double[2];
    mock2[0] = 1.0;
    mock2[1] = 1.0;
    
    RangeTree myTree("./data/10k_new.csv", mock1, mock2);

    double *start = new double[2];
    start[0] = -0.097434999999999994;
    start[1] = 51.368192000000001;
    double *end = new double[2];
    end[0] = -1000;
    end[1] = 51.439680000000003;

    Point* point = myTree.findNearest(start, end, 0);

    if (point == nullptr) {
        return false;
    }

    return point->coordinates[0] != -0.097434999999999994;
}


int main() {
    int testsFailed = 0;

    cout.precision(17);

    if (!topRightSkyline()) {
        cout << "Top right skyline failed!" << endl;
        testsFailed++;
    }

    if (!topLeftSkyline()) {
        cout << "Top left skyline failed!" << endl;
        testsFailed++;
    }

    if (!bottomLeftSkyline()) {
        cout << "Bottom left skyline failed!" << endl;
        testsFailed++;
    }

    if (!bottomRightSkyline()) {
        cout << "Bottom right skyline failed!" << endl;
        testsFailed++;
    }

    if (!allDataSkyline1()) {
        cout << "Top right all data skyline failed!" << endl;
        testsFailed++;
    }

    if (!allDataSkyline2()) {
        cout << "Top left all data skyline failed!" << endl;
        testsFailed++;
    }

    if (!allDataSkyline3()) {
        cout << "Bototm left all data skyline failed!" << endl;
        testsFailed++;
    }

    if (!allDataSkyline4()) {
        cout << "Bottom right all data skyline failed!" << endl;
        testsFailed++;
    }

    if (!quadrantOneXMinimum()) {
        cout << "Quadrant one x minimum failed!" << endl;
        testsFailed++;
    }

    if (!quadrantOneYMinimum()) {
        cout << "Quadrant one y minimum failed!" << endl;
        testsFailed++;
    }

    if (!quadrantThreeXMaximum()) {
        cout << "Quadrant three x maximum failed!" << endl;
        testsFailed++;
    }

    if (!quadrantThreeYMaximum()) {
        cout << "Quadrant three y maximum failed!" << endl;
        testsFailed++;
    }

    if (!oneDominatingSkylinePoint()) {
        cout << "One dominating skyline point failed!" << endl;
        testsFailed++;
    }

    if (!oneSkylinePointInRange()) {
        cout << "One skyline point in range failed!" << endl;
        testsFailed++;
    }
    
    if (!zeroSkylinePointsInRange()) {
        cout << "Zero skyline point in range failed!" << endl;
        testsFailed++;
    }

    if (!oneExtremaPointInRange()) {
        cout << "One extrema point in range failed!" << endl;
        testsFailed++;
    }

    if (!zeroExtremaPointInRange()) {
        cout << "Zero extrema point in range failed!" << endl;
        testsFailed++;
    }

    if (!smallerRangeContainsLessValues()) {
        cout << "Smaller range contains less values failed!" << endl;
        testsFailed++;
    }

    if (!rangeContainsNoDuplicates()) {
        cout << "Range contains no duplicates failed!" << endl;
        testsFailed++;
    }

    if (!noBoundaryInNearest()) {
        cout << "No boundary in nearest failed!" << endl;
        testsFailed++;
    }

    if (testsFailed == 0) {
        cout << "All tests passed!" << endl;
    }
}
