main () {
    double  dis;
    dis = 0;
    int S1htLWkUf;
    double  iPOHZth [S1htLWkUf];
    double  gY7A82iC [S1htLWkUf];
    int eex4vS;
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
    int MlKM0YhvdyS6;
    double  OnjNPaW [S1htLWkUf] [S1htLWkUf];
    scanf ("%d", &S1htLWkUf);
    for (eex4vS = (556 - 556); S1htLWkUf > eex4vS; eex4vS = eex4vS + 1) {
        scanf ("%lf %lf", &iPOHZth[eex4vS], &gY7A82iC[eex4vS]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (eex4vS = 0; eex4vS < S1htLWkUf; eex4vS = eex4vS + 1) {
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
        for (MlKM0YhvdyS6 = 0; S1htLWkUf > MlKM0YhvdyS6; MlKM0YhvdyS6++) {
            OnjNPaW[eex4vS][MlKM0YhvdyS6] = (iPOHZth[eex4vS] - iPOHZth[MlKM0YhvdyS6]) * (iPOHZth[eex4vS] - iPOHZth[MlKM0YhvdyS6]) + (gY7A82iC[eex4vS] - gY7A82iC[MlKM0YhvdyS6]) * (gY7A82iC[eex4vS] - gY7A82iC[MlKM0YhvdyS6]);
            if (OnjNPaW[eex4vS][MlKM0YhvdyS6] > dis)
                dis = OnjNPaW[eex4vS][MlKM0YhvdyS6];
        };
    }
    printf ("%.4lf", sqrt (dis));
}

