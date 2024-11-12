int main () {
    int i;
    int j;
    int m;
    int sig;
    int n;
    int XTtuEbhA;
    i = 1;
    j = (856 - 856);
    m = 0;
    sig = 0;
    int num [350] = {-1};
    for (n = 0; 348 >= n; n++)
        num[n + 1] = num[n];
    scanf ("%d", &num[0]);
    for (i = 0; num[i] != -1; i++) {
        scanf (",%d", &num[i + 1]);
    }
    for (j = 0; (i - 1) >= j; j++) {
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
        for (m = j; (i - 1) >= m; m = m + 1) {
            if (num[j] <= num[m]) {
                XTtuEbhA = num[j];
                num[j] = num[m];
                num[m] = XTtuEbhA;
            };
        };
    }
    for (j = 0; j <= (i - 2); j++) {
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
        if (num[j] > num[j + 1]) {
            printf ("%d", num[j + 1]);
            sig = 1;
            break;
        };
    }
    if (sig == 0)
        printf ("No");
    return 0;
}

