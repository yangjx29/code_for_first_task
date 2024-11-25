int main () {
    float GPA;
    int s;
    s = (536 - 536);
    int numble [10];
    int n;
    int i, TrdDKb6xP;
    double  b;
    double  sum = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &numble[i]);
            s = s + numble[i];
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
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        scanf ("%d", &TrdDKb6xP);
        if (TrdDKb6xP <= 100 && (976 - 886) <= TrdDKb6xP) {
            b = 4.0;
        }
        else {
            if (TrdDKb6xP <= 89 && TrdDKb6xP >= 85) {
                b = 3.7;
            }
            else if (84 >= TrdDKb6xP &&TrdDKb6xP >= 82) {
                b = 3.3;
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
            else if (81 >= TrdDKb6xP &&78 <= TrdDKb6xP) {
                b = 3.0;
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
            else if (TrdDKb6xP <= 77 && TrdDKb6xP >= 75) {
                b = 2.7;
            }
            else if (TrdDKb6xP <= 74 && TrdDKb6xP >= 72) {
                b = 2.3;
            }
            else if (TrdDKb6xP <= 71 && TrdDKb6xP >= 68) {
                b = 2.0;
            }
            else if (TrdDKb6xP <= 67 && TrdDKb6xP >= 64) {
                b = 1.5;
            }
            else if (TrdDKb6xP <= 63 && TrdDKb6xP >= 60) {
                b = 1.0;
            }
            else if (TrdDKb6xP < 60) {
                b = 0;
            };
        }
        sum = sum + numble[i] * b;
    }
    GPA = (float) (sum / s);
    printf ("%.2f", GPA);
    return 0;
}

