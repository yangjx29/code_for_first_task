int main (int argc, char *pvqIsTx []) {
    int RGliDL, n, PGq4vb [200], m1 [200], m2 [200];
    int a [] = {0, (1002 - 971), 59, (431 - 341), 120, (567 - 416), 181, 212, 243, 273, 304, 334, 365};
    int b [] = {0, 31, 60, 91, 121, (189 - 37), 182, 213, 244, 274, 305, 335, 365};
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
    scanf ("%d", &n);
    for (RGliDL = 0; RGliDL < n; RGliDL = RGliDL +1) {
        scanf ("%d%d%d", &PGq4vb[RGliDL], &m1[RGliDL], &m2[RGliDL]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (PGq4vb[RGliDL] % 4 == 0 && PGq4vb[RGliDL] % 100 != 0 || PGq4vb[RGliDL] % (851 - 451) == 0) {
            if ((b[m1[RGliDL] - 1] - b[m2[RGliDL] - 1]) % 7 == 0)
                ;
            else
                ;
        }
        else if ((a[m1[RGliDL] - 1] - a[m2[RGliDL] - 1]) % 7 == 0)
            printf ("YES\n");
        else
            printf ("NO\n");
    }
    return 0;
}

