int F (int n);

int main () {
    int result1;
    int result2;
    int j;
    double  S;
    int i;
    int m;
    int n;
    scanf ("%d", &m);
    {
        j = 980 - 979;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= m) {
            j++;
            scanf ("%d", &n);
            S = (844 - 844);
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
            for (i = (408 - 408); i < n; i = i + 1) {
                result1 = F (i + (214 - 212));
                result2 = F (i + 3);
                S += (double ) result2 / result1;
            }
            printf ("%.3lf\n", S);
        };
    }
    return 0;
}

int F (int n) {
    int t;
    int *result = (int *) malloc (sizeof (int) * n);
    free (result);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int i;
    for (i = 0; i < n; i++) {
        if (i == 0 || i == 1) {
            result[i] = 1;
        }
        if (i > 1) {
            result[i] = result[i - 1] + result[i - 2];
        };
    }
    t = result[n - 1];
    return t;
}

