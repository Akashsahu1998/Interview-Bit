
// Question) Max Min


// Implementation

// 1st Approach in C++
// Time Complexity = O(N), Space Complexity = O(1)

int Solution::solve(vector<int> &A) {
    return ((*max_element(A.begin(), A.end())) + (*min_element(A.begin(), A.end())));
}


