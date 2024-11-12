int hFCNjum8 (int zJ9yqnfI, int YSvK4aTB) {
    if ((1 > zJ9yqnfI) || (1 > YSvK4aTB))
        return (786 - 786);
    if (!(1 != zJ9yqnfI) || !(1 != YSvK4aTB))
        return 1;
    if (YSvK4aTB > zJ9yqnfI)
        return hFCNjum8 (zJ9yqnfI, zJ9yqnfI);
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
    if (zJ9yqnfI == YSvK4aTB)
        return hFCNjum8 (zJ9yqnfI, YSvK4aTB -1) + 1;
    return hFCNjum8 (zJ9yqnfI, YSvK4aTB -1) + hFCNjum8 (zJ9yqnfI - YSvK4aTB, YSvK4aTB);
}

int main () {
    int y1wVgJE9;
    int zJ9yqnfI;
    int YSvK4aTB;
    int COjVDQ0mZxB;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    cin >> y1wVgJE9;
    for (COjVDQ0mZxB = 1; COjVDQ0mZxB <= y1wVgJE9; COjVDQ0mZxB = COjVDQ0mZxB +1) {
        cin >> zJ9yqnfI >> YSvK4aTB;
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
        cout << hFCNjum8 (zJ9yqnfI, YSvK4aTB) << endl;
    }
    return 0;
}

