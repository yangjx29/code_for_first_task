int main () {
    char a [2000];
    int i;
    int VszD62pSOwR0;
    int t;
    int arrival [1000];
    int XBq1VjP [1000];
    int e3KhQnHLGr;
    int count;
    i = 0;
    VszD62pSOwR0 = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    t = 0;
    int total;
    total = i;
    for (; true;) {
        cin >> arrival[i];
        if (cin.get () != ',')
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    i = 0;
    while (true) {
        cin >> XBq1VjP[i];
        if (cin.get () != ',')
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        i = i + 1;
    }
    for (i = 0; i < 1000; i = i + 1) {
        count = 0;
        for (e3KhQnHLGr = 0; total > e3KhQnHLGr; e3KhQnHLGr = e3KhQnHLGr + 1)
            if (i >= arrival[e3KhQnHLGr] && i < XBq1VjP[e3KhQnHLGr])
                count = count + 1;
        if (count > VszD62pSOwR0) {
            VszD62pSOwR0 = count;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    cout << total << ' ' << VszD62pSOwR0;
    return 0;
}

