class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        if (numbers == NULL || length <= 0)
            return 0;
        int hashTable[255] = {0};
        for(int i = 0; i < length; i++)
            hashTable[numbers[i]]++;
        for(int i = 0; i < length; i++)
            if (hashTable[numbers[i]] > 1){
                duplication[0] = numbers[i];
                return true;
            }
        return false;
    }
};