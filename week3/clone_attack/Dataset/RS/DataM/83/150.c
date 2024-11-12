main () {
    int a, n, i;
    float sum, f [10], b = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (n - 1 >= i) {
            scanf ("%f", &f[i]);
            b += f[i];
            i = i + 1;
        };
    }
    sum = 0;
    {
        i = 0;
        while (n - 1 >= i) {
            scanf ("%d", &a);
            if (90 <= a && 100 >= a) {
                sum = sum + f[i] * 4.0;
                continue;
            }
            if (85 <= a && 89 >= a) {
                sum += f[i] * 3.7;
                continue;
            }
            if (82 <= a && 84 >= a) {
                sum = sum + f[i] * 3.3;
                continue;
            }
            if (78 <= a && 81 >= a) {
                sum += f[i] * 3.0;
                continue;
            }
            if (a >= 75 && a <= 77) {
                sum = sum + f[i] * 2.7;
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
                continue;
            }
            if (a >= (456 - 384) && a <= 74) {
                sum += f[i] * 2.3;
                continue;
            }
            if (a >= 68 && a <= 71) {
                sum = sum + f[i] * 2.0;
                continue;
            }
            if (a >= 64 && a <= 67) {
                sum = sum + f[i] * 1.5;
                continue;
            }
            if (a >= 60 && a <= 63) {
                sum += f[i] * 1.0;
                continue;
            }
            i++;
        };
    }
    printf ("%.2f", sum / b);
}

