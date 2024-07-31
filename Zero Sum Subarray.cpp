long long int findSubarray(vector<long long int> &arr, int n) {
    // Initialize the prefix sum map and the prefix sum
    unordered_map<long long int, int> prefixSumMap;
    long long int prefixSum = 0;
    long long int count = 0;

    // Insert prefix sum of 0 to handle subarrays starting from index 0
    prefixSumMap[0] = 1;

    // Traverse the array
    for (int i = 0; i < n; ++i) {
        prefixSum += arr[i];

        // If prefix sum has been seen before, increment the count by the number of times it has been seen
        if (prefixSumMap.find(prefixSum) != prefixSumMap.end()) {
            count += prefixSumMap[prefixSum];
        }

        // Increment the count of the current prefix sum in the map
        prefixSumMap[prefixSum]++;
    }

    return count;
}