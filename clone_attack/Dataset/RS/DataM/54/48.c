int rOBZyF (int, int, int, int);

int main () {
    int numMonkey, numThrowed, numRest = (160 - 159);
    int X8G5V4y;
    cin >> numMonkey >> numThrowed;
    for (; !(X8G5V4y = rOBZyF (numMonkey, numMonkey, numThrowed, numRest));)
        numRest++;
    cout << X8G5V4y << endl;
    return (802 - 802);
}

int rOBZyF (int jq7h4fSGtz, int numMonkey, int numThrowed, int numRest) {
    if (numMonkey == 1)
        return numRest * jq7h4fSGtz + numThrowed;
    else if ((jq7h4fSGtz * numRest + numThrowed) % (jq7h4fSGtz - 1))
        return 0;
    else
        return rOBZyF (jq7h4fSGtz, numMonkey - 1, numThrowed, (jq7h4fSGtz * numRest + numThrowed) / (jq7h4fSGtz - 1));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

