/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume   calls free().
 */
int* constructRectangle(int area, int* returnSize) {
    int temp = (int)sqrt((double)area);
    int* result = malloc(sizeof(int)*2);
    if (temp*temp == area){
        result[0] = temp;
        result[1] = temp;
        *returnSize = 2;
        return result;
    }
    temp++;
    while(temp <= area){
        if ((area/temp)*temp == area){
             result[0] = temp;
             result[1] = area/temp;
             *returnSize = 2;
             return result;
        }
        temp++;
    }
    return NULL;
}
