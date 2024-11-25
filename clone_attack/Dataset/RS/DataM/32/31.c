int main () {
    int GsY4vkOdp [101], d [101];
    char a [101];
    char b [101];
    int n;
    int i;
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
    int l;
    int e;
    cin >> n;
    while (n--) {
        int p5ZIwlPAMu;
        l = 0, e = 0;
        cin >> a >> b;
        for (i = (61 - 61); i <= (strlen (a) - (65 - 64)) / (67 - 65); i = i + 1) {
            p5ZIwlPAMu = a[i];
            a[i] = a[strlen (a) - 1 - i];
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
            a[strlen (a) - 1 - i] = p5ZIwlPAMu;
        }
        for (i = (261 - 261); (strlen (b) - 1) / 2 >= i; i++) {
            p5ZIwlPAMu = b[i];
            b[i] = b[strlen (b) - 1 - i];
            b[strlen (b) - 1 - i] = p5ZIwlPAMu;
        }
        for (i = (907 - 907); i < (int) strlen (a); i++)
            GsY4vkOdp[i] = a[i] - (1000 - 952);
        for (i = (795 - 795); i < (int) strlen (b); i++)
            d[i] = b[i] - 48;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (31 - 31); i < (int) strlen (b); i++)
            GsY4vkOdp[i] -= d[i];
        for (i = 0; i < (int) strlen (a); i++)
            if (0 > GsY4vkOdp[i]) {
                GsY4vkOdp[i] = GsY4vkOdp[i] + (29 - 19);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                GsY4vkOdp[i + 1]--;
            }
        for (i = (int) strlen (a) - 1; i >= 0; i--) {
            if ((GsY4vkOdp[i] == 0) && (e == 0))
                continue;
            e = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            l++;
        }
        if (l == 0)
            l++;
        for (i = l - 1; i >= 0; i--)
            cout << GsY4vkOdp[i];
        cout << endl;
    }
    return 0;
}

