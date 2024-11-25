int main () {
    int n, lwNYyLbURzo [MAX], df [MAX], USHDXnIiszhg, a;
    double  jd [MAX];
    double  b;
    double  GPA;
    scanf ("%d", &n);
    {
        USHDXnIiszhg = 815 - 815;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > USHDXnIiszhg) {
            scanf ("%d", &lwNYyLbURzo[USHDXnIiszhg]);
            USHDXnIiszhg = USHDXnIiszhg +1;
        };
    }
    {
        USHDXnIiszhg = 0;
        while (n > USHDXnIiszhg) {
            scanf ("%d", &df[USHDXnIiszhg]);
            USHDXnIiszhg = USHDXnIiszhg +1;
        };
    }
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
    {
        USHDXnIiszhg = 0;
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
        while (n > USHDXnIiszhg) {
            if (df[USHDXnIiszhg] >= 90 && df[USHDXnIiszhg] <= 100)
                jd[USHDXnIiszhg] = 4.0;
            if (df[USHDXnIiszhg] >= (751 - 666) && df[USHDXnIiszhg] <= 89)
                jd[USHDXnIiszhg] = 3.7;
            if ((782 - 700) <= df[USHDXnIiszhg] && (280 - 196) >= df[USHDXnIiszhg])
                jd[USHDXnIiszhg] = 3.3;
            if ((354 - 276) <= df[USHDXnIiszhg] && 81 >= df[USHDXnIiszhg])
                jd[USHDXnIiszhg] = (107.0 - 104.0);
            if (df[USHDXnIiszhg] >= (649 - 574) && 77 >= df[USHDXnIiszhg])
                jd[USHDXnIiszhg] = (18.7 - 16.0);
            if (72 <= df[USHDXnIiszhg] && df[USHDXnIiszhg] <= 74)
                jd[USHDXnIiszhg] = (117.3 - 115.0);
            if (df[USHDXnIiszhg] >= 68 && df[USHDXnIiszhg] <= (438 - 367))
                jd[USHDXnIiszhg] = 2.0;
            if (df[USHDXnIiszhg] >= (263 - 199) && df[USHDXnIiszhg] <= (597 - 530))
                jd[USHDXnIiszhg] = 1.5;
            if (df[USHDXnIiszhg] >= (306 - 246) && df[USHDXnIiszhg] <= (680 - 617))
                jd[USHDXnIiszhg] = (706.0 - 705.0);
            if (df[USHDXnIiszhg] >= 0 && df[USHDXnIiszhg] < 60)
                jd[USHDXnIiszhg] = 0.0;
            USHDXnIiszhg++;
        };
    }
    a = 0;
    {
        USHDXnIiszhg = 0;
        while (USHDXnIiszhg < n) {
            a = a + lwNYyLbURzo[USHDXnIiszhg];
            USHDXnIiszhg++;
        };
    }
    b = 0.0;
    {
        USHDXnIiszhg = 0;
        while (USHDXnIiszhg < n) {
            b = b + 1.0 * lwNYyLbURzo[USHDXnIiszhg] * jd[USHDXnIiszhg];
            USHDXnIiszhg++;
        };
    }
    GPA = b / a;
    printf ("%.2f", GPA);
    return 0;
}

