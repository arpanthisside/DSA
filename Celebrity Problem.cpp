// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>>& M, int n) {
    // Step 1: Find the potential celebrity
    int potentialCelebrity = 0;
    
    // Use two pointers to find the potential celebrity
    for (int i = 1; i < n; i++) {
        if (M[potentialCelebrity][i] == 1) {
            // potentialCelebrity knows i, so potentialCelebrity cannot be a celebrity
            potentialCelebrity = i;
        }
        // If potentialCelebrity does not know i, then i cannot be the celebrity
    }
    
    // Step 2: Verify if the potentialCelebrity is actually a celebrity
    for (int i = 0; i < n; i++) {
        if (i != potentialCelebrity) {
            if (M[potentialCelebrity][i] == 1 || M[i][potentialCelebrity] == 0) {
                // potentialCelebrity knows someone or someone does not know potentialCelebrity
                return -1;
            }
        }
    }
    
    return potentialCelebrity;
}

};