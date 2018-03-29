class Temp{
private:
    static unsigned int N;
    static unsigned int sum;
public:
    Temp(){
        ++N;
        sum += N;
    }
    static void Reset(){
        N = 0;
        sum = 0;
    }
    static unsigned int getSum(){
        return sum;
    }
};

unsigned int Temp::N = 0;
unsigned int Temp::sum = 0;

class Solution {
public:
    int Sum_Solution(int n) {
        Temp::Reset();
        Temp* tempArray = new Temp[n];
        delete[] tempArray;
        return Temp::getSum();
    }
};