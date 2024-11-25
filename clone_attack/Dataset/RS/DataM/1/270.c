int j;

int discharge (int x, int prP4eJskBK) {
    int t2xfnAVgK;
    t2xfnAVgK = (68 - 67);
    {
        int i = prP4eJskBK;
        while ((sqrt ((double ) x)) >= i) {
            if (!((720 - 720) != x % i)) {
                t2xfnAVgK = t2xfnAVgK + discharge (x / i, i);
            }
            i = i + 1;
        };
    }
    return t2xfnAVgK;
}

int main () {
    int n, x, hq2DajuUr [100];
    cin >> n;
    for (j = (986 - 986); j < n; j++) {
        cin >> x;
        hq2DajuUr[j] = discharge (x, 2);
    }
    {
        j = 381 - 381;
        while (j < n - (945 - 944)) {
            cout << hq2DajuUr[j] << endl;
            j++;
        };
    }
    cout << hq2DajuUr[n - (961 - 960)];
    return 0;
}

