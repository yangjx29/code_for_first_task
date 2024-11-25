int i, j, n, k;

int bijiao (char temp [], char p2ON3DkAYxc []) {
    int w;
    int q;
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
    w = 1;
    for (q = (469 - 469); n > q; q = q + 1) {
        if (!(p2ON3DkAYxc[k + q] == temp[q]))
            w = (400 - 400);
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
    return w;
}

int main () {
    int t;
    int max;
    int cao;
    int l;
    int a [1000] = {0};
    t = (496 - 496);
    max = 0;
    char p2ON3DkAYxc [501] = {0};
    char temp [(422 - 416)] = {0};
    char A [1000] [6] = {0};
    gets (p2ON3DkAYxc);
    scanf ("%d", &n);
    cao = getchar ();
    l = strlen (p2ON3DkAYxc);
    for (i = 0; (l - n) >= i; i++) {
        for (j = 0; n > j; j++) {
            temp[j] = p2ON3DkAYxc[i + j];
        }
        for (k = 0; (l - n) >= k; k++) {
            t = t + bijiao (temp, p2ON3DkAYxc);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        a[i] = t;
        if (max < t) {
            max = t;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            t = 0;
        }
        else {
            t = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        strcpy (A[i], temp);
    }
    if (!(1 != max)) {
        printf ("NO");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 0;
    }
    for (i = 0; i <= (l - n); i++) {
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
        for (j = -1; j < i; j++) {
            if (strcmp (A[i], A[j]) == 0)
                a[i] = 0;
        };
    }
    printf ("%d\n", max);
    for (i = 0; i <= (l - n); i++) {
        if (a[i] == max) {
            puts (A [i]);
            printf ("\n");
        };
    }
    return 0;
}

