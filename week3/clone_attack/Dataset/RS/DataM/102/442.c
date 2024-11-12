int main () {
    double  t;
    double  male [(828 - 788)], female [40];
    char sex [10];
    int m;
    int f;
    int n;
    int i;
    int j;
    m = (738 - 738);
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
    f = (214 - 214);
    scanf ("%d", &n);
    for (i = (798 - 797); n >= i; i = i + 1) {
        scanf ("%s", sex);
        if (!((82 - 82) != strcmp (sex, "male"))) {
            scanf ("%lf", &male[m]);
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
            m = m + 1;
        }
        else {
            scanf ("%lf", &female[f]);
            f = f + 1;
        };
    }
    for (i = (829 - 829); i <= m - 2; i = i + 1) {
        j = 613 - 613;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (m - 2 - i >= j) {
            if (male[j] > male[j + (623 - 622)]) {
                t = male[j];
                male[j] = male[j + (337 - 336)];
                male[j + (504 - 503)] = t;
            }
            j = j + 1;
        };
    }
    printf ("%.2f", male[0]);
    {
        i = 0;
        while (i <= f - 2) {
            {
                j = 0;
                while (j <= f - 2 - i) {
                    if (female[j] < female[j + 1]) {
                        t = female[j];
                        female[j] = female[j + 1];
                        female[j + 1] = t;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= m - 1) {
            printf (" %.2f", male[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= f - 1) {
            printf (" %.2f", female[i]);
            i = i + 1;
        };
    }
    printf ("\n");
    return 0;
}

