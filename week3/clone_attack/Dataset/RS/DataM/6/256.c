int main (int argc, char *argv []) {
    int i, j, k;
    int q;
    int p;
    int ru2pjzCDMiL;
    scanf ("%d", &ru2pjzCDMiL);
    for (i = 0; i < ru2pjzCDMiL; i++) {
        int num;
        int sum;
        sum = 0;
        scanf ("%d", &p);
        scanf ("%d", &q);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(1 != p) && q == 1) {
            scanf ("%d", &num);
            printf ("%d", num);
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
        {
            j = 0;
            while (q > j) {
                j = j + 1;
                scanf ("%d", &num);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                sum = sum + num;
            };
        }
        {
            j = 1;
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
            while (j < p - 1) {
                j++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                for (k = 0; k < q; k++) {
                    scanf ("%d", &num);
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
                    if (k == 0 || k == q - 1) {
                        sum += num;
                    };
                };
            };
        }
        for (j = 0; j < q; j = j + 1) {
            scanf ("%d", &num);
            sum += num;
        }
        printf ("%d\n", sum);
    }
    return 0;
}

