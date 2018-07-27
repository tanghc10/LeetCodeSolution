class Solution
{
	vector<int> hashTable = *(new vector<int>(255, 0));
	int index = 1;
public:
  //Insert one char from stringstream
    void Insert(char ch)
    {
         if (hashTable[ch] == 0)
         	hashTable[ch] = index;
         else if (hashTable[ch] > 0)
         	hashTable[ch] = -1;
         index++;
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
    	bool is_find = false;
    	int index = -1;
    	char retCh = '#';
    	for(int i = 0; i < 255; i++){
    		if (hashTable[i] > 0){
    			if (is_find == false || index > hashTable[i]){
    				index = hashTable[i];
    				retCh = i;
    				is_find = true;
    			}
    		}
    	}
    	if (is_find == false)
    		return '#';
    	return retCh;
    }
};