float sum (int n) {
    float qfLda4YZ [1000], HfKhNbSa3y [1000];
    float j;
    float aRGdpc6V8lb;
    int A4glNH;
    if (!(1 != n)) {
        j = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return j;
    }
    if (!(2 != n)) {
        j = 3.5;
        return j;
    }
    HfKhNbSa3y[1] = 1;
    HfKhNbSa3y[2] = 2;
    qfLda4YZ[1] = 2;
    qfLda4YZ[2] = 3;
    if (!(1 == n) && n != 2) {
        aRGdpc6V8lb = 3.5;
        {
            A4glNH = 3;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (A4glNH <= n) {
                qfLda4YZ[A4glNH] = qfLda4YZ[A4glNH -1] + qfLda4YZ[A4glNH -2];
                HfKhNbSa3y[A4glNH] = HfKhNbSa3y[A4glNH -1] + HfKhNbSa3y[A4glNH -2];
                aRGdpc6V8lb = aRGdpc6V8lb + (qfLda4YZ[A4glNH] / HfKhNbSa3y[A4glNH]);
                A4glNH++;
            };
        }
        return aRGdpc6V8lb;
    };
}

int main () {
    int m;
    int x;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    getchar ();
    getchar ();
    scanf ("%d", &m);
    {
        x = 0;
        while (x < m) {
            int n;
            x++;
            scanf ("%d", &n);
            printf ("%.3f\n", sum (n));
        };
    };
}

