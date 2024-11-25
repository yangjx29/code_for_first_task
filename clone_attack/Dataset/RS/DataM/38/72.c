void  main () {
    int alVh20X;
    int ZI2rct;
    int tXzSdeomcE;
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
    double  *x;
    scanf ("%d", &alVh20X);
    while (alVh20X--) {
        double  sum;
        double  ehBqTWCEf;
        double  a;
        double  j4IBvH0Tb;
        sum = 0;
        ehBqTWCEf = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x = (double  *) malloc (1000 * sizeof (double ));
        scanf ("%d", &ZI2rct);
        {
            tXzSdeomcE = 0;
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
            while (tXzSdeomcE < ZI2rct) {
                scanf ("%lf", x + tXzSdeomcE);
                sum = sum + *(x + tXzSdeomcE);
                tXzSdeomcE = tXzSdeomcE + 1;
            };
        }
        a = sum / ZI2rct;
        for (tXzSdeomcE = 0; tXzSdeomcE < ZI2rct; tXzSdeomcE = tXzSdeomcE + 1)
            ehBqTWCEf = ehBqTWCEf + ((*(x + tXzSdeomcE) - a) * (*(x + tXzSdeomcE) - a));
        j4IBvH0Tb = sqrt (ehBqTWCEf / ZI2rct);
        printf ("%.5f\n", j4IBvH0Tb);
    };
}

