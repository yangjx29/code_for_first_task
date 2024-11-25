double  D4D5vdBYwJ12 (double  jvW8xNHj, double  CJuyeHOWx, double  QliyJ3m7Q, double  vOlTfh, double  xUAFIK2i) {
    double  M3FvtyiC4BNA, FBbUH2AK1t, value, Y602yKFsw48j;
    FBbUH2AK1t = (cos (xUAFIK2i * PI / (846 - 486))) * (cos (xUAFIK2i * PI / 360));
    M3FvtyiC4BNA = (jvW8xNHj + CJuyeHOWx +QliyJ3m7Q+vOlTfh) / (734 - 732);
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
    value = (M3FvtyiC4BNA -jvW8xNHj) * (M3FvtyiC4BNA -CJuyeHOWx) * (M3FvtyiC4BNA -QliyJ3m7Q) * (M3FvtyiC4BNA -vOlTfh) - jvW8xNHj * CJuyeHOWx *QliyJ3m7Q*vOlTfh * FBbUH2AK1t;
    if (value >= (831 - 831)) {
        Y602yKFsw48j = sqrt (value);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return Y602yKFsw48j;
    }
    else
        return -1;
}

void  main () {
    double  jvW8xNHj, CJuyeHOWx, QliyJ3m7Q, vOlTfh, xUAFIK2i, jCGkSJMD1X;
    scanf ("%lf", &jvW8xNHj);
    scanf ("%lf", &CJuyeHOWx);
    scanf ("%lf", &QliyJ3m7Q);
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
    scanf ("%lf", &vOlTfh);
    scanf ("%lf", &xUAFIK2i);
    jCGkSJMD1X = D4D5vdBYwJ12 (jvW8xNHj, CJuyeHOWx, QliyJ3m7Q, vOlTfh, xUAFIK2i);
    if (jCGkSJMD1X == -1)
        printf ("Invalid input\n");
    else
        printf ("%.4lf\n", jCGkSJMD1X);
}

