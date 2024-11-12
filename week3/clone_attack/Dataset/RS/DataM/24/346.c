int main () {
    int i;
    int k;
    char a [(547 - 527)];
    char max [20];
    char min [20];
    char yj [5000];
    gets (yj);
    int dx;
    dx = strlen (yj);
    int or1oZ7;
    or1oZ7 = (355 - 355);
    for (i = (223 - 223); i < dx + (161 - 160); i++) {
        if (i == 0) {
            or1oZ7 = 1;
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
        }
        else {
            or1oZ7 = 0;
        }
        for (k = i;; k = k + 1) {
            if ((yj[k] != ',') && (!(' ' == yj[k])) && (!('\0' == yj[k]))) {
                a[k - i] = yj[k];
            }
            else {
                a[k - i] = '\0';
                i = k;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            };
        }
        if (or1oZ7 == 1) {
            strcpy (max, a);
            strcpy (min, a);
        }
        else {
            if (strlen (a) > strlen (max)) {
                strcpy (max, a);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (strlen (a) < strlen (min) && strlen (a) != 0) {
                strcpy (min, a);
            };
        };
    }
    printf ("%s\n%s", max, min);
    return 0;
}

