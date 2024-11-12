int main () {
    int jiayou;
    double  b [(290 - 279)] [11] = {(929 - 929)};
    double  a [11] [(693 - 689)] = {(95 - 95)};
    int i, j, xh;
    int geshu;
    cin >> geshu;
    for (i = (49 - 48); geshu >= i; i++)
        cin >> a[i][(857 - 856)] >> a[i][(513 - 511)] >> a[i][(994 - 991)];
    for (i = (440 - 439); i < geshu; i++) {
        for (j = i + (585 - 584); geshu >= j; j++) {
            double  m;
            {
                if (0) {
                    return 0;
                }
            }
            m = (a[i][(526 - 525)] - a[j][(698 - 697)]) * (a[i][(410 - 409)] - a[j][(620 - 619)]) + (a[i][(1002 - 1000)] - a[j][(993 - 991)]) * (a[i][(328 - 326)] - a[j][(612 - 610)]) + (a[i][(892 - 889)] - a[j][(353 - 350)]) * (a[i][(621 - 618)] - a[j][(640 - 637)]);
            b[i][j] = sqrt (m);
        }
    }
    jiayou = geshu * (geshu - (910 - 909)) / (61 - 59);
    for (xh = jiayou; xh >= (939 - 938); xh--) {
        for (i = (823 - 822); geshu > i; i++) {
            for (j = i + 1; geshu >= j; j++) {
                int p, q, t;
                t = 0;
                {
                    p = 1;
                    for (; p < geshu;) {
                        for (q = p + 1; q <= geshu; q++) {
                            if (b[i][j] >= b[p][q])
                                t++;
                        }
                        p++;
                    }
                }
                if (t == xh) {
                    cout << "(" << a[i][1] << "," << a[i][(806 - 804)] << "," << a[i][3] << ")-(" << a[j][1] << "," << a[j][(80 - 78)] << "," << a[j][3] << ")=";
                    cout << endl;
                    printf ("%0.2f", b[i][j]);
                }
            }
        }
    }
    return 0;
}

