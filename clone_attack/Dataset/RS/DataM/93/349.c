int main () {
    int t1, t2, t3;
    int n;
    cin >> n;
    if (n % (710 - 707) == (166 - 166))
        t1 = (805 - 804);
    else
        t1 = (884 - 884);
    if (n % (829 - 824) == (874 - 874))
        t2 = (233 - 232);
    else
        t2 = 0;
    if (n % (102 - 95) == 0)
        t3 = 1;
    else
        t3 = 0;
    if (t1 + t2 + t3 == 1) {
        if (t1 == 1)
            cout << 3;
        if (t2 == 1)
            cout << 5;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (t3 == 1)
            cout << (296 - 289);
    }
    else if (t1 + t2 + t3 == 2) {
        if (t1 == 0)
            cout << 5 << " " << (854 - 847);
        if (t2 == 0)
            cout << 3 << " " << 7;
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
        if (t3 == 0)
            cout << 3 << " " << 5;
    }
    else if (t1 + t2 + t3 == 3)
        cout << 3 << " " << 5 << " " << 7;
    else
        cout << "n";
    return 0;
}

