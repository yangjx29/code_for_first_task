char a [1000], RdYkOL, CdaGiY;

int SCkAjqRBLHNx (int C0TqPw8bhv, int SOqsiIH) {
    int ZVbKW0c;
    int s;
    int q;
    if (a[C0TqPw8bhv] != a[C0TqPw8bhv +1]) {
        cout << C0TqPw8bhv << ' ' << C0TqPw8bhv +1 << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 0;
    }
    s = 1;
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
    q = C0TqPw8bhv +1;
    ZVbKW0c = C0TqPw8bhv +2;
    while (ZVbKW0c < SOqsiIH) {
        SCkAjqRBLHNx (q, ZVbKW0c -1);
        for (; s != 0;) {
            if (a[ZVbKW0c] == CdaGiY)
                s++;
            if (a[ZVbKW0c] == RdYkOL)
                s--;
            ZVbKW0c = ZVbKW0c +1;
        }
        q = ZVbKW0c;
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
        ZVbKW0c = ZVbKW0c +1;
        s = 1;
    }
    cout << C0TqPw8bhv << ' ' << SOqsiIH << endl;
    return 0;
}

int main () {
    int cgEaz5F = 0, ZVbKW0c, len = 0;
    cin >> a;
    len = strlen (a);
    CdaGiY = a[0];
    RdYkOL = a[len - 1];
    SCkAjqRBLHNx (0, len - 1);
    return 0;
}

