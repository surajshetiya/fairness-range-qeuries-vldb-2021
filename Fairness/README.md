# Fairness in range queries

Requires Boost as a dependency.

get_range.cpp can be used to sample 20 ranges from each bucket of size 200.

a_star.cpp has the code BFSMP and IBFSMP. If the variable *similarity* inside *struct sps* is used for comparison in the heap then BFSMP would be run. A pairing heap from Boost library is used for this implementation. a_star.cpp makes use of *UrbanGB* dataset.

AST_uniform.cpp can be used for uniform sampled dataset.
