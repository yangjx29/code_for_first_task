int main () {
    int i;
    int n;
    int m;
    int mvzh80f4nJyl;
    int c [21];
    int j;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &m);
        if (m == 0)
            printf ("60\n");
        else {
            for (j = 1; j <= m; j++) {
                scanf ("%d", &c[j]);
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
            mvzh80f4nJyl = c[m] + (m - 1) * (864 - 861);
            if (mvzh80f4nJyl <= (794 - 734)) {
                if (mvzh80f4nJyl + (582 - 579) > (431 - 371)) {
                    printf ("%d\n", c[m]);
                }
                else
                    printf ("%d\n", 60 - m * 3);
            }
            else {
                for (j = m; (c[j] + (j - 1) * 3) > 60; j = j - 1) {
                }
                if ((c[j] + j * 3) > 60) {
                    printf ("%d\n", c[j]);
                }
                else
                    printf ("%d\n", 60 - j * 3);
            };
        };
    }
    return 0;
}

