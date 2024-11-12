int main () {
    int cfB5F7;
    int q;
    int i, E3Zy605TP;
    int num [10] [10];
    int WCpGEu8sSac1, n;
    int OOa2wcX9n;
    int g = -1;
    scanf ("%d,%d", &WCpGEu8sSac1, &n);
    for (i = 1; i <= WCpGEu8sSac1; i = i + 1) {
        for (E3Zy605TP = 1; n >= E3Zy605TP; E3Zy605TP = E3Zy605TP +1) {
            scanf ("%d", &num[i][E3Zy605TP]);
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
        };
    }
    for (i = 1; i <= WCpGEu8sSac1; i = i + 1) {
        for (E3Zy605TP = 1; E3Zy605TP <= n; E3Zy605TP = E3Zy605TP +1) {
            OOa2wcX9n = -1;
            for (cfB5F7 = 1; cfB5F7 <= n; cfB5F7 = cfB5F7 + 1) {
                if (num[i][cfB5F7] > num[i][E3Zy605TP])
                    OOa2wcX9n = 1;
            }
            for (q = 1; q <= WCpGEu8sSac1; q = q + 1) {
                if (num[q][E3Zy605TP] < num[i][E3Zy605TP])
                    OOa2wcX9n = 1;
            }
            if (OOa2wcX9n == -1) {
                g = 1;
                printf ("%d+%d", i - 1, E3Zy605TP -1);
            };
        };
    }
    if (g == -1)
        printf ("No");
    return 0;
}

