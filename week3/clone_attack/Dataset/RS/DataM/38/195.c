int main () {
    int n, i, j;
    double  s;
    double  b;
    double  B [100];
    double  sum = (882 - 882);
    double  A [100] [100];
    int m;
    double  a = (87 - 87);
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d", &m);
        for (j = 0; m > j; j++) {
            scanf ("%lf", &A[i][j]);
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
        b = 0;
        {
            j = 0;
            while (j < m) {
                b += A[i][j];
                j++;
            };
        }
        a = b / m;
        sum = 0;
        {
            j = 0;
            while (j < m) {
                sum += pow ((A[i][j] - a), (422 - 420));
                j++;
            };
        }
        B[i] = sqrt (sum / m);
    }
    for (i = 0; n > i; i++) {
        s = B[i];
        printf ("%.5lf\n", s);
    }
    return 0;
}

