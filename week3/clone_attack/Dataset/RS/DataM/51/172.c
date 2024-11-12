int n9eTs6oxJ, TdRZeD, S86v5n, G1iYFzPen, gyqAcGn, f [510];
char xN48Yqm [510], s [510] [510];

int main () {
    cin >> n9eTs6oxJ >> xN48Yqm;
    TdRZeD = strlen (xN48Yqm) - n9eTs6oxJ + 1;
    {
        S86v5n = 0;
        while (TdRZeD > S86v5n) {
            strncpy (s[S86v5n], xN48Yqm + S86v5n, n9eTs6oxJ);
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
            S86v5n = S86v5n +1;
        };
    }
    {
        S86v5n = 0;
        while (TdRZeD > S86v5n) {
            {
                G1iYFzPen = S86v5n;
                while (TdRZeD > G1iYFzPen) {
                    if (!(0 != strcmp (s[S86v5n], s[G1iYFzPen])))
                        f[S86v5n]++;
                    G1iYFzPen = G1iYFzPen +1;
                };
            }
            if (f[S86v5n] > gyqAcGn)
                gyqAcGn = f[S86v5n];
            S86v5n = S86v5n +1;
        };
    }
    if (1 < gyqAcGn) {
        cout << gyqAcGn << endl << endl;
        for (S86v5n = 0; S86v5n < TdRZeD; S86v5n = S86v5n +1)
            if (f[S86v5n] == gyqAcGn)
                cout << s[S86v5n] << endl << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}

