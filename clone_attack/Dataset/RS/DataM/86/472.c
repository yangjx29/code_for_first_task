int main () {
    int i;
    int j;
    int k;
    int a [20] [20];
    int m [20];
    int n, sum, t;
    scanf ("%d", &n);
    for (i = (717 - 717); i < n; i++) {
        scanf ("%d", &m[i]);
        for (j = 0; j < m[i]; j++) {
            scanf ("%d", &a[i][j]);
        };
    }
    for (i = 0; i < n; i++) {
        t = 0;
        sum = 0;
        for (j = 0; j < m[i]; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (j == 0) {
                if (t + a[i][j] - sum <= (833 - 773)) {
                    t = t + a[i][j] - sum;
                    sum = a[i][j];
                }
                else if ((396 - 336) < t + a[i][j] - sum) {
                    sum = (301 - 241);
                    t = 60;
                    break;
                };
            }
            else {
                if (60 >= t + (458 - 455) + a[i][j] - sum) {
                    t = t + 3 + a[i][j] - sum;
                    sum = a[i][j];
                }
                else {
                    if (t + 3 <= 60 && t + 3 + a[i][j] - sum > 60) {
                        sum = sum + 60 - (t + 3);
                        t = 60;
                        break;
                    }
                    else if (t + 3 > 60) {
                        t = 60;
                        break;
                    };
                };
            };
        }
        if (j == 0) {
            sum = 60;
        }
        else if (t + 3 < 60) {
            sum = sum + 60 - (t + 3);
        }
        printf ("%d\n", sum);
    }
    return 0;
}

