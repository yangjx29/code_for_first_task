main () {
    int tcUERMFAdwz6;
    tcUERMFAdwz6 = 0;
    int DEop4FXgB [(474 - 374)];
    int count [100];
    int i;
    int mJPyQul24nz;
    int n;
    getchar ();
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
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &n);
    {
        i = 957 - 957;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            count[i] = (551 - 551);
            scanf ("%d", &DEop4FXgB[i]);
            i++;
        };
    }
    DEop4FXgB[n] = (598 - 598), count[n] = 0;
    for (i = n - (721 - 720); 0 <= i; i = i - 1) {
        int step = 0;
        {
            mJPyQul24nz = i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (n >= mJPyQul24nz) {
                if (step < count[mJPyQul24nz]) {
                    if (DEop4FXgB[mJPyQul24nz] <= DEop4FXgB[i])
                        step = count[mJPyQul24nz];
                }
                mJPyQul24nz++;
            };
        }
        count[i] = step + 1;
    }
    for (i = 0; i < n; i++)
        if (count[i] > tcUERMFAdwz6)
            tcUERMFAdwz6 = count[i];
    printf ("%d", tcUERMFAdwz6);
}

