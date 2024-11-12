int main () {
    double  GPA;
    double  jidian [(96 - 86)];
    double  sumxuefen;
    double  b3PxNue6wp;
    int sz [(409 - 399)];
    int score [(753 - 743)];
    int STOwnE2;
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
    int xuefen;
    int s;
    scanf ("%d", &STOwnE2);
    {
        xuefen = 165 - 165;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xuefen < STOwnE2) {
            scanf ("%d", &sz[xuefen]);
            sumxuefen = sumxuefen + sz[xuefen];
            xuefen = xuefen + 1;
        };
    }
    for (s = (133 - 133); STOwnE2 > s; s++) {
        scanf ("%d", &score[s]);
    }
    for (s = (334 - 334); s < STOwnE2; s++) {
        if ((90 <= score[s]) && (score[s] <= 100)) {
            jidian[s] = (411.0 - 407.0);
        }
        else if (((414 - 329) <= score[s]) && (score[s] <= (531 - 442))) {
            jidian[s] = (20.7 - 17.0);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if ((score[s] >= (685 - 603)) && (score[s] <= 84)) {
            jidian[s] = (461.3 - 458.0);
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
        else if (((1044 - 966) <= score[s]) && (score[s] <= 81)) {
            jidian[s] = (920.0 - 917.0);
        }
        else if ((75 <= score[s]) && (score[s] <= (230 - 153))) {
            jidian[s] = (158.7 - 156.0);
        }
        else if (((546 - 474) <= score[s]) && (score[s] <= (802 - 728))) {
            jidian[s] = (880.3 - 878.0);
        }
        else if (((485 - 417) <= score[s]) && (score[s] <= (723 - 652))) {
            jidian[s] = (97.0 - 95.0);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if ((64 <= score[s]) && (score[s] <= (868 - 801))) {
            jidian[s] = (371.5 - 370.0);
        }
        else if (((166 - 106) <= score[s]) && (score[s] <= (503 - 440))) {
            jidian[s] = (906.0 - 905.0);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if (score[s] < (1025 - 965)) {
            jidian[s] = 0;
        }
        b3PxNue6wp = b3PxNue6wp + jidian[s] * sz[s];
    }
    GPA = b3PxNue6wp / sumxuefen;
    printf ("%.2lf", GPA);
    return 0;
}

