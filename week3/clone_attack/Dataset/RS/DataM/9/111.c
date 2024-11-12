int main () {
    struct   point {
        char cofsZt [10];
        int N072oMJi;
    }
    patient [100];
    int n;
    int i, j, k;
    int on;
    int old [100];
    int flag;
    on = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s%d", patient[i].cofsZt, &patient[i].N072oMJi);
    }
    {
        j = 120;
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
        while (j >= 60) {
            {
                i = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (i < n) {
                    if (patient[i].N072oMJi == j) {
                        printf ("%s\n", patient[i].cofsZt);
                        old[on] = i;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        on++;
                    }
                    i++;
                };
            }
            j--;
        };
    }
    for (i = 0; i < n; i++) {
        flag = 0;
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
        for (k = 0; k < on; k++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (i == old[k]) {
                flag = 1;
                break;
            };
        }
        if (flag == 0) {
            printf ("%s\n", patient[i].cofsZt);
        };
    }
    return 0;
}

