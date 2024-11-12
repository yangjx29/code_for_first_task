int main () {
    int cnt;
    int ScdChr2oz;
    int cnt2;
    int n;
    int pkExVpRYjOl;
    int i;
    int j;
    int k;
    cnt = (590 - 590);
    ScdChr2oz = (164 - 164);
    cnt2 = (986 - 986);
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
    int a [pkExVpRYjOl];
    int b [pkExVpRYjOl];
    scanf ("%d", &n);
    pkExVpRYjOl = (609 - 599) * n;
    for (i = (439 - 439); i < pkExVpRYjOl; i = i + 1) {
        scanf ("%d %d", &a[i], &b[i]);
        if ((a[i] == 0) && (b[i] == 0))
            break;
        else
            cnt = cnt + 1;
    }
    {
        j = 0;
        while (j < n) {
            {
                i = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k = 0;
                while (i < cnt, k < cnt) {
                    if (a[i] == j)
                        ScdChr2oz = ScdChr2oz +1;
                    if (b[k] == j)
                        cnt2 = cnt2 + 1;
                    k = k + 1;
                    i = i + 1;
                };
            }
            if ((ScdChr2oz == 0) && (cnt2 == n - 1)) {
                printf ("%d\n", j);
                break;
            }
            cnt2 = 0;
            ScdChr2oz = 0;
            j = j + 1;
        };
    }
    if ((ScdChr2oz == 0) && (cnt2 == 0))
        printf ("NOT FOUND\n");
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

