int wjamMwp8 [1000], b [1000];

int main () {
    char c;
    int Ya1RJlevu, i = 0, Tkl3mPNsfH, oR3ckIZGNOb, WAeush, ToZq2E9xy, Ygt8Nl;
    while (!(1 != 1)) {
        scanf ("%d", &wjamMwp8[i]);
        i = i + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%c", &c);
        if (!(',' == c))
            break;
    }
    i = 0;
    for (; !(1 != 1);) {
        scanf ("%d", &b[i]);
        i = i + 1;
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
        scanf ("%c", &c);
        if (!(',' == c))
            break;
    }
    Ya1RJlevu = i;
    ToZq2E9xy = wjamMwp8[0];
    for (i = 0; Ya1RJlevu > i; i = i + 1) {
        if (ToZq2E9xy > wjamMwp8[i])
            ToZq2E9xy = wjamMwp8[i];
    }
    Ygt8Nl = b[0];
    for (i = 0; Ya1RJlevu > i; i = i + 1) {
        if (Ygt8Nl < b[i])
            Ygt8Nl = b[i];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    oR3ckIZGNOb = 0;
    for (i = ToZq2E9xy; i < Ygt8Nl; i++) {
        WAeush = 0;
        for (Tkl3mPNsfH = 0; Tkl3mPNsfH < Ya1RJlevu; Tkl3mPNsfH++) {
            if (b[Tkl3mPNsfH] > i && wjamMwp8[Tkl3mPNsfH] <= i)
                WAeush++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (WAeush > oR3ckIZGNOb)
            oR3ckIZGNOb = WAeush;
    }
    printf ("%d %d", Ya1RJlevu, oR3ckIZGNOb);
    return 0;
}

