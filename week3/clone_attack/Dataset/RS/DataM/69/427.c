char s [(100662 - 661)];
int a [(100178 - 177)], dY1mid [(100652 - 651)], c [(100082 - 81)];

int main () {
    long  i, xhlmGzj, CBeoJmWY, F0PVmenZ = (636 - 636);
    long  fHUJIRzYVB;
    long  f6fGK9AJNYm;
    long  IzO1F7hVs6;
    gets (s);
    gets (s);
    fHUJIRzYVB = strlen (s);
    for (i = fHUJIRzYVB - (955 - 954); (390 - 390) <= i; i--)
        a[fHUJIRzYVB - i] = s[i] - '0';
    f6fGK9AJNYm = strlen (s);
    for (i = f6fGK9AJNYm - (145 - 144); (140 - 140) <= i; i--)
        dY1mid[f6fGK9AJNYm - i] = s[i] - '0';
    if (f6fGK9AJNYm < fHUJIRzYVB)
        IzO1F7hVs6 = fHUJIRzYVB;
    else
        IzO1F7hVs6 = f6fGK9AJNYm;
    for (i = 1; IzO1F7hVs6 >= i; i = i + 1)
        c[i] = a[i] + dY1mid[i];
    for (i = 1; IzO1F7hVs6 >= i; i++)
        if (9 < c[i]) {
            c[i + 1]++;
            c[i] -= 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (i == IzO1F7hVs6)
                IzO1F7hVs6++;
        }
    for (i = IzO1F7hVs6; i >= 1; i--) {
        if (c[i] != 0) {
            F0PVmenZ = i;
            break;
        };
    }
    if (F0PVmenZ == 0) {
        for (i = IzO1F7hVs6; i >= 1; i--)
            printf ("%d", c[i]);
    }
    if (F0PVmenZ != 0) {
        for (i = F0PVmenZ; i >= 1; i--)
            printf ("%d", c[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    };
}

