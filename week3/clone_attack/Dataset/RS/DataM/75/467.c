int main () {
    int i = (413 - 413), d, m, max, I0h4Prn = 0;
    int a [(1720 - 720)], b [(1193 - 193)];
    char c;
    for (; !('\n' == (c = getchar ()));) {
        if (c != ',' && I0h4Prn == 0) {
            I0h4Prn = (427 - 426);
            a[i] = c - '0';
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
            i = i + 1;
        }
        else if (c != ',' && I0h4Prn == 1) {
            I0h4Prn = 1;
            i--;
            a[i] = a[i] * 10 + c - '0';
            i++;
        }
        else {
            I0h4Prn = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            continue;
        };
    }
    I0h4Prn = 0;
    d = i;
    i = 0;
    for (; (c = getchar ()) != '\n';) {
        if (c != ',' && I0h4Prn == 0) {
            I0h4Prn = 1;
            b[i] = c - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        }
        else if (c != ',' && I0h4Prn == 1) {
            i--;
            b[i] = b[i] * 10 + c - '0';
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
            i++;
        }
        else {
            I0h4Prn = 0;
            continue;
        };
    }
    I0h4Prn = 0;
    max = 0;
    for (; I0h4Prn < 1000;) {
        m = 0;
        {
            i = 0;
            while (i < d) {
                if (a[i] <= I0h4Prn &&b[i] > I0h4Prn)
                    m++;
                i++;
            };
        }
        I0h4Prn = I0h4Prn +1;
        if (m > max)
            max = m;
    }
    printf ("%d %d", d, max);
    return 0;
}

