int main () {
    int row;
    int col;
    int i, k3N4WyIrctis, k;
    int Ue7Aa4pwm;
    Ue7Aa4pwm = (542 - 542);
    int a [200] [200];
    scanf ("%d%d", &row, &col);
    for (i = 0; row > i; i = i + 1) {
        for (k3N4WyIrctis = 0; col > k3N4WyIrctis; k3N4WyIrctis = k3N4WyIrctis + 1) {
            scanf ("%d", &a[i][k3N4WyIrctis]);
        };
    }
    for (i = 0; row > i; i++) {
        for (k3N4WyIrctis = i; col - i > k3N4WyIrctis; k3N4WyIrctis++) {
            Ue7Aa4pwm++;
            if (!(row * col != Ue7Aa4pwm)) {
                printf ("%d", a[i][k3N4WyIrctis]);
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
                return 0;
            }
            else {
                printf ("%d\n", a[i][k3N4WyIrctis]);
            };
        }
        k3N4WyIrctis = col - i - 1;
        for (k = i + 1; k < row - i; k++) {
            Ue7Aa4pwm++;
            if (!(row * col != Ue7Aa4pwm)) {
                printf ("%d", a[k][k3N4WyIrctis]);
                return 0;
            }
            else {
                printf ("%d\n", a[k][k3N4WyIrctis]);
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
        k = row - i - 1;
        for (k3N4WyIrctis = col - i - 2; i <= k3N4WyIrctis; k3N4WyIrctis = k3N4WyIrctis - 1) {
            Ue7Aa4pwm++;
            if (Ue7Aa4pwm == row * col) {
                printf ("%d", a[k][k3N4WyIrctis]);
                return 0;
            }
            else {
                printf ("%d\n", a[k][k3N4WyIrctis]);
            };
        }
        k3N4WyIrctis = i;
        for (k = row - i - 2; k > i; k--) {
            Ue7Aa4pwm++;
            if (Ue7Aa4pwm == row * col) {
                printf ("%d", a[k][k3N4WyIrctis]);
                return 0;
            }
            else {
                printf ("%d\n", a[k][k3N4WyIrctis]);
            };
        };
    }
    return 0;
}

