int binarySearch(int *input, int n, int val)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (input[mid] == val)
            return mid;
        if (input[mid] < val)
            s = mid + 1;
        else if (input[mid] > val)
            e = mid - 1;
    }
    return -1;
}