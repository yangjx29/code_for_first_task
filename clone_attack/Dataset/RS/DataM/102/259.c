double  male [40];
double  female [40];
int YQ126lX3IvoD, fk;

void  sor1 () {
    double  lboLGeDFkh7;
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
    int i, j, tmp;
    {
        i = 975 - 975;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < YQ126lX3IvoD) {
            lboLGeDFkh7 = male[i];
            tmp = i;
            for (j = i + 1; j < YQ126lX3IvoD; j = j + 1) {
                if (male[j] < lboLGeDFkh7) {
                    lboLGeDFkh7 = male[j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    tmp = j;
                };
            }
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
            male[tmp] = male[i];
            male[i] = lboLGeDFkh7;
            i = i + 1;
        };
    };
}

void  sor2 () {
    double  lboLGeDFkh7;
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
    int i, j, tmp;
    for (i = (127 - 127); fk > i; i = i + 1) {
        lboLGeDFkh7 = female[i];
        tmp = i;
        for (j = i + 1; fk > j; j = j + 1) {
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
            if (female[j] < lboLGeDFkh7) {
                lboLGeDFkh7 = female[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                tmp = j;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        female[tmp] = female[i];
        female[i] = lboLGeDFkh7;
    };
}

int main (void ) {
    char o35sAW4 [10];
    int n, i;
    scanf ("%d", &n);
    YQ126lX3IvoD = 0;
    fk = 0;
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
    {
        i = 0;
        while (i < n) {
            i++;
            scanf ("%s", o35sAW4);
            if (o35sAW4[0] == 'm')
                scanf ("%lf", &male[YQ126lX3IvoD++]);
            else
                scanf ("%lf", &female[fk++]);
        };
    }
    sor1 ();
    sor2 ();
    for (i = 0; i < YQ126lX3IvoD; i++)
        printf ("%.2f ", male[i]);
    {
        i = fk - 1;
        while (i > 0) {
            printf ("%.2f ", female[i]);
            i = i - 1;
        };
    }
    printf ("%.2f\n", female[0]);
}

