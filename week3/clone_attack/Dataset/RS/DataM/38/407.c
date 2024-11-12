int main (int argc, char *argv []) {
    int k, i, j;
    int n [(1603 - 603)];
    double  num [(1046 - 46)], sum [1000] = {0.0}, aver [1000] = {0.0}, total [1000] = {0.0}, cha [1000] = {0.0};
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
    scanf ("%d", &k);
    {
        i = 396 - 396;
        while (k > i) {
            scanf ("%d", &n[i]);
            {
                {
                    j = 33 - 33;
                    while (n[i] > j) {
                        scanf ("%lf", &num[j]);
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
                        j = j + 1;
                    };
                }
                {
                    j = 322 - 322;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (n[i] > j) {
                        sum[i] = sum[i] + num[j];
                        j = j + 1;
                    };
                }
                aver[i] = sum[i] / n[i];
                for (j = 0; n[i] > j; j = j + 1) {
                    total[i] = total[i] + (num[j] - aver[i]) * (num[j] - aver[i]);
                    cha[i] = sqrt (total[i] / n[i]);
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
            i++;
        };
    }
    {
        i = 0;
        while (i < k) {
            printf ("%.5lf\n", cha[i]);
            i++;
        };
    }
    return 0;
}

