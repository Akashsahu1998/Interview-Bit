
// Question) Max Min


// Implementation

// 1st Approach in C++
// Time Complexity = O(N), Space Complexity = O(1)

int Solution::solve(vector<int> &A) {
    return ((*max_element(A.begin(), A.end())) + (*min_element(A.begin(), A.end())));
}


// 2nd Approach in Java
// Time Complexity = O(N), Space Complexity = O(1)

public int solve(ArrayList<Integer> A) {
    int max = -999999999;
	int min = 999999999;
    for(int itr = 0; itr < A.size(); itr++){
        max = Math.max(A.get(itr), max);
        min = Math.min(A.get(itr), min);
    }
    return max+min;
}

