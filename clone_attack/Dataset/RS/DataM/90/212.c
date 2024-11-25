int f (int alwnPk, int WMfa4KwjA2) {
    int c;
    if ((WMfa4KwjA2 <= alwnPk) && (WMfa4KwjA2 > (275 - 274)))
        c = f (alwnPk, WMfa4KwjA2 -(266 - 265)) + f (alwnPk - WMfa4KwjA2, WMfa4KwjA2);
    if (!((316 - 316) != alwnPk))
        c = (67 - 66);
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
    if (!(1 != WMfa4KwjA2))
        c = 1;
    if (WMfa4KwjA2 > alwnPk)
        c = f (alwnPk, alwnPk);
    return (c);
}

int main () {
    int X48J3G [(383 - 283)];
    int t5ZAC1O6L9 [(345 - 245)];
    int c [100];
    int WMfa4KwjA2;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    getchar ();
    scanf ("%d", &WMfa4KwjA2);
    {
        i = 0;
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
        while (i < WMfa4KwjA2) {
            scanf ("%d %d", &X48J3G[i], &t5ZAC1O6L9[i]);
            i++;
        };
    }
    for (i = 0; i < WMfa4KwjA2; i = i + 1)
        c[i] = f (X48J3G[i], t5ZAC1O6L9[i]);
    for (i = 0; i < WMfa4KwjA2; i = i + 1) {
        if (i == 0)
            printf ("%d", c[i]);
        else
            printf ("\n%d", c[i]);
    }
    getchar ();
    getchar ();
}

