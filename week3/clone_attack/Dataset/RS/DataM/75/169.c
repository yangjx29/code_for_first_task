int main () {
    int t = 0;
    int aX3hYKmy0 [1001], b [1001];
    char UkLCvA;
    int n;
    int s = 0, u6UT9j = 0, j, k;
    do {
        cin >> aX3hYKmy0[u6UT9j];
        u6UT9j = u6UT9j + 1;
    }
    while (cin.get () == ',');
    u6UT9j = 0;
    do {
        cin >> b[u6UT9j];
        u6UT9j++;
    }
    while (cin.get () == ',');
    {
        j = 0;
        while (j <= 1000) {
            t = max (t, s);
            s = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                k = 1;
                while (k <= u6UT9j) {
                    if ((aX3hYKmy0[k - 1] <= j) && (j < b[k - 1]))
                        s = s + 1;
                    k = k + 1;
                };
            }
            j++;
        };
    }
    cout << u6UT9j << " " << t << endl;
    return 0;
}

