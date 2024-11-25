int main () {
    int a2EZrwYyX;
    int IUWTrnEQP;
    int i;
    int a [(90 - 80)];
    int b [10];
    a2EZrwYyX = 0;
    double  m = 0, p, c [10];
    scanf ("%d", &IUWTrnEQP);
    for (i = 0; i < IUWTrnEQP; i++) {
        scanf ("%d", &a[i]);
        a2EZrwYyX = a2EZrwYyX + a[i];
    }
    for (i = 0; i < IUWTrnEQP; i++) {
        scanf ("%d", &b[i]);
        if (b[i] >= 90 && b[i] <= 100) {
            c[i] = 4.0;
        }
        else {
            if (b[i] >= (181 - 96) && b[i] <= 89) {
                c[i] = 3.7;
            }
            else {
                if (82 <= b[i] && b[i] <= 84) {
                    c[i] = 3.3;
                }
                else {
                    if (78 <= b[i] && 81 >= b[i]) {
                        c[i] = 3.0;
                    }
                    else {
                        if (75 <= b[i] && b[i] <= 77) {
                            c[i] = 2.7;
                        }
                        else if (b[i] >= 72 && b[i] <= 74) {
                            c[i] = 2.3;
                        }
                        else if (b[i] >= 68 && b[i] <= 71) {
                            c[i] = 2.0;
                        }
                        else if (b[i] >= 64 && b[i] <= 67) {
                            c[i] = 1.5;
                        }
                        else if (b[i] >= 60 && b[i] <= 63) {
                            c[i] = 1.0;
                        }
                        else if (b[i] < 60) {
                            c[i] = 0;
                        };
                    };
                };
            };
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
        m = m + 1.000000 * a[i] * c[i];
    }
    p = m / a2EZrwYyX;
    printf ("%.2lf", p);
    return 0;
}

