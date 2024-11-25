int main () {
    int xDCmHjNi;
    int Q9W60l [9];
    double  SwjQhiU;
    double  GPA;
    double  PpPWvZiSl [9];
    double  IFs6JVE8v [9];
    SwjQhiU = 0;
    int SBG1ej, sum = 0;
    scanf ("%d", &xDCmHjNi);
    {
        SBG1ej = 0;
        while (xDCmHjNi > SBG1ej) {
            scanf ("%d", &(Q9W60l[SBG1ej]));
            SBG1ej = SBG1ej +1;
        };
    }
    {
        SBG1ej = 0;
        while (xDCmHjNi > SBG1ej) {
            sum += Q9W60l[SBG1ej];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            SBG1ej = SBG1ej +1;
        };
    }
    {
        SBG1ej = 0;
        while (xDCmHjNi > SBG1ej) {
            IFs6JVE8v[SBG1ej] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            SBG1ej = SBG1ej +1;
        };
    }
    {
        SBG1ej = 0;
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
        while (SBG1ej < xDCmHjNi) {
            scanf ("%lf", &PpPWvZiSl[SBG1ej]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            SBG1ej = SBG1ej +1;
        };
    }
    {
        SBG1ej = 0;
        while (SBG1ej < xDCmHjNi) {
            if (90 <= PpPWvZiSl[SBG1ej] && PpPWvZiSl[SBG1ej] <= 100) {
                IFs6JVE8v[SBG1ej] = 4.0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (PpPWvZiSl[SBG1ej] <= 89 && 85 <= PpPWvZiSl[SBG1ej]) {
                IFs6JVE8v[SBG1ej] = 3.7;
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
            }
            if (PpPWvZiSl[SBG1ej] <= 84 && 82 <= PpPWvZiSl[SBG1ej]) {
                IFs6JVE8v[SBG1ej] = 3.3;
            }
            if (81 >= PpPWvZiSl[SBG1ej] && 78 <= PpPWvZiSl[SBG1ej]) {
                IFs6JVE8v[SBG1ej] = 3.0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            if (PpPWvZiSl[SBG1ej] <= 77 && PpPWvZiSl[SBG1ej] >= 75) {
                IFs6JVE8v[SBG1ej] = 2.7;
            }
            if (74 >= PpPWvZiSl[SBG1ej] && PpPWvZiSl[SBG1ej] >= 72) {
                IFs6JVE8v[SBG1ej] = 2.3;
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
                };
            }
            if (71 >= PpPWvZiSl[SBG1ej] && PpPWvZiSl[SBG1ej] >= 68) {
                IFs6JVE8v[SBG1ej] = 2.0;
            }
            if (67 >= PpPWvZiSl[SBG1ej] && PpPWvZiSl[SBG1ej] >= 64) {
                IFs6JVE8v[SBG1ej] = 1.5;
            }
            if (63 >= PpPWvZiSl[SBG1ej] && PpPWvZiSl[SBG1ej] >= 60) {
                IFs6JVE8v[SBG1ej] = 1.0;
            }
            if (PpPWvZiSl[SBG1ej] < 60) {
                IFs6JVE8v[SBG1ej] = 0.0;
            }
            SBG1ej = SBG1ej +1;
        };
    }
    {
        SBG1ej = 0;
        while (SBG1ej < xDCmHjNi) {
            SwjQhiU = SwjQhiU +Q9W60l[SBG1ej] * IFs6JVE8v[SBG1ej];
            SBG1ej = SBG1ej +1;
        };
    }
    GPA = SwjQhiU / sum;
    printf ("%.2lf", GPA);
    return 0;
}

