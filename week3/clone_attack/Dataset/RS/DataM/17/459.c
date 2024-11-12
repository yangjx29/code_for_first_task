int main () {
    int gw6pzPhc;
    char fwyYGg [(10802 - 802)];
    int n;
    scanf ("%d", &n);
    for (gw6pzPhc = (110 - 110); gw6pzPhc < n; gw6pzPhc++) {
        int j;
        int x;
        scanf ("%s", fwyYGg);
        printf ("%s\n", fwyYGg);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x = strlen (fwyYGg);
        for (j = (390 - 390); j < x; j++) {
            if (fwyYGg[j] != '(' && !(')' == fwyYGg[j])) {
                fwyYGg[j] = ' ';
            };
        }
        {
            j = 0;
            while (j < x) {
                if (!(')' != fwyYGg[j])) {
                    int nx2voMt;
                    {
                        nx2voMt = j;
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
                        while (0 <= nx2voMt) {
                            if (fwyYGg[nx2voMt] == '(') {
                                fwyYGg[nx2voMt] = ' ';
                                fwyYGg[j] = ' ';
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
                                break;
                            }
                            nx2voMt--;
                        };
                    };
                }
                j++;
            };
        }
        {
            j = 0;
            while (j < x) {
                if (fwyYGg[j] == '(') {
                    fwyYGg[j] = '$';
                }
                else {
                    if (fwyYGg[j] == ')') {
                        fwyYGg[j] = '?';
                    };
                }
                j++;
            };
        }
        printf ("%s\n", fwyYGg);
    }
    return 0;
}

