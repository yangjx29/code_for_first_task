int aNmOTtr5ui = (526 - 526);

int f (int m, int n) {
    int CuH9iNT6Ft;
    CuH9iNT6Ft = 0;
    int b;
    b = 0;
    if (n > m) {
        n = m;
    }
    if (n <= m) {
        if (0 < m)
            CuH9iNT6Ft = f (m - n, n);
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
        if (n > (834 - 833))
            b = f (m, n - 1);
    }
    if (n == 1) {
        return 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (m == 0) {
        return 1;
    }
    return (CuH9iNT6Ft +b);
}

int main () {
    int HLTEQZWvcuXP;
    cin >> HLTEQZWvcuXP;
    while (HLTEQZWvcuXP = HLTEQZWvcuXP -1) {
        int m, n;
        cin >> m >> n;
        cout << f (m, n) << endl;
    }
    return 0;
}

