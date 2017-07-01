int findContentChildren(int* g, int gSize, int* s, int sSize) {
    quicksort(g, 0, gSize-1);
    quicksort(s, 0, sSize-1);
    int child = gSize-1;
    int cookie = sSize-1;
    int result = 0;
    while(child >= 0){
        while(g[child] > s[cookie]){
            child--;
        }
        if (child >= 0){
            child--;
            cookie--;
            result++;
        }
    }
    return result;
}

void quicksort(int src[], int left, int right)
{
    if (left >= right)
        return;

    int l = left;
    int r = right;
    int key = src[left];

    while (l < r)
    {
        while (key <= src[r] && l<r)
            r--;

        src[l] = src[r];

        while (key >= src[l] && l<r)
            l++;

        src[r] = src[l];

    }

    src[l] = key;

    quicksort(src, left, l - 1);
    quicksort(src, l + 1, right);
}
