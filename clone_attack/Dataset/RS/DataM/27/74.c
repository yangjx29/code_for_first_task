int main () {
    double  pIYzjFyQ5 [100], b [100], Ij5JxWyXwZhM [100], bHXkD9 [100], x2 [100], ujaH9oKJv [100], vTEHKsG4 [100], s8CtMe [100];
    int Slvz35;
    int m;
    scanf ("%d", &Slvz35);
    {
        m = 0;
        while (Slvz35 > m) {
            scanf ("%lf %lf %lf\n", &pIYzjFyQ5[m], &b[m], &Ij5JxWyXwZhM[m]);
            if (0 < b[m] * b[m] - (899 - 895) * pIYzjFyQ5[m] * Ij5JxWyXwZhM[m]) {
                bHXkD9[m] = (-b[m] + sqrt (b[m] * b[m] - 4 * pIYzjFyQ5[m] * Ij5JxWyXwZhM[m])) / (2 * pIYzjFyQ5[m]);
                x2[m] = (-b[m] - sqrt (b[m] * b[m] - 4 * pIYzjFyQ5[m] * Ij5JxWyXwZhM[m])) / (2 * pIYzjFyQ5[m]);
            }
            else if (!(0 != b[m] * b[m] - 4 * pIYzjFyQ5[m] * Ij5JxWyXwZhM[m])) {
                bHXkD9[m] = (-b[m] + sqrt (b[m] * b[m] - 4 * pIYzjFyQ5[m] * Ij5JxWyXwZhM[m])) / (2 * pIYzjFyQ5[m]);
                x2[m] = (-b[m] - sqrt (b[m] * b[m] - 4 * pIYzjFyQ5[m] * Ij5JxWyXwZhM[m])) / (2 * pIYzjFyQ5[m]);
            }
            else {
                if (b[m] / (2 * pIYzjFyQ5[m]) == 0) {
                    ujaH9oKJv[m] = b[m] / (2 * pIYzjFyQ5[m]);
                }
                else {
                    ujaH9oKJv[m] = -b[m] / (2 * pIYzjFyQ5[m]);
                }
                vTEHKsG4[m] = sqrt (4 * pIYzjFyQ5[m] * Ij5JxWyXwZhM[m] - b[m] * b[m]) / (2 * pIYzjFyQ5[m]);
                s8CtMe[m] = -sqrt (4 * pIYzjFyQ5[m] * Ij5JxWyXwZhM[m] - b[m] * b[m]) / (2 * pIYzjFyQ5[m]);
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
            m = m + 1;
        };
    }
    {
        m = 0;
        while (m < Slvz35) {
            if (b[m] * b[m] - 4 * pIYzjFyQ5[m] * Ij5JxWyXwZhM[m] > 0) {
                printf ("x1=%.5lf;x2=%.5lf\n", bHXkD9[m], x2[m]);
            }
            else if (b[m] * b[m] - 4 * pIYzjFyQ5[m] * Ij5JxWyXwZhM[m] == 0) {
                printf ("x1=x2=%.5lf\n", bHXkD9[m]);
            }
            else {
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf%.5lfi\n", ujaH9oKJv[m], vTEHKsG4[m], ujaH9oKJv[m], s8CtMe[m]);
            }
            m++;
        };
    }
    return 0;
}

