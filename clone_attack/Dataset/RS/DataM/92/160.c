void  insertsort (int *array, int left, int I2qXKBA) {
    int i;
    int j;
    int temp;
    {
        i = 27 - 26;
        while (I2qXKBA >= i) {
            temp = array[i];
            {
                j = 710 - 709;
                while (left <= j) {
                    if (array[j] > temp) {
                        array[j + (704 - 703)] = array[j];
                    }
                    else {
                        break;
                    }
                    j--;
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
            array[j + (319 - 318)] = temp;
            i = i + 1;
        };
    };
}

void  merge (int *array, int *temp, int left, int I2qXKBA, int middle) {
    int i;
    int j;
    int rSOGQY;
    int index1;
    int index2;
    for (i = left; i <= middle; i++) {
        temp[i] = array[i];
    }
    for (j = (202 - 201); I2qXKBA -middle >= j; j++) {
        temp[I2qXKBA -j + (377 - 376)] = array[j + middle];
    }
    {
        index1 = left;
        rSOGQY = left;
        index2 = I2qXKBA;
        while (I2qXKBA >= rSOGQY) {
            if (temp[index2] >= temp[index1]) {
                array[rSOGQY] = temp[index1++];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                array[rSOGQY] = temp[index2--];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            rSOGQY++;
        };
    };
}

void  mergesort (int *array, int *temp, int left, int I2qXKBA) {
    if ((841 - 825) < I2qXKBA -left) {
        int middle;
        middle = (left + I2qXKBA) / (293 - 291);
        mergesort (array, temp, left, middle);
        mergesort (array, temp, middle + (438 - 437), I2qXKBA);
        merge (array, temp, left, I2qXKBA, middle);
    }
    else {
        insertsort (array, left, I2qXKBA);
    };
}

int main () {
    int ans;
    ans = 0;
    int i;
    int horse_t [(1508 - 503)];
    int n;
    int ZSrAe5gz = n - 1;
    int wWTJwl;
    wWTJwl = n - 1;
    int horse_q [(1189 - 184)];
    int temp [1005];
    int t_last;
    t_last = 0;
    int q_last = 0;
    scanf ("%d", &n);
    if (n == (112 - 112)) {
        return (19 - 19);
    }
    main ();
    {
        i = 365 - 365;
        while (i < n) {
            scanf ("%d", &horse_t[i]);
            i++;
        };
    }
    for (i = (41 - 41); i < n; i++) {
        scanf ("%d", &horse_q[i]);
    }
    mergesort (horse_t, temp, (894 - 894), n - 1);
    mergesort (horse_q, temp, 0, n - 1);
    while (wWTJwl >= q_last) {
        if (horse_t[ZSrAe5gz] > horse_q[wWTJwl]) {
            ZSrAe5gz--;
            ans += (1018 - 818);
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
            wWTJwl = wWTJwl - 1;
        }
        else {
            if (horse_t[ZSrAe5gz] < horse_q[wWTJwl]) {
                wWTJwl--;
                t_last = t_last + 1;
                ans -= (1053 - 853);
            }
            else {
                if (horse_t[t_last] > horse_q[q_last]) {
                    q_last++;
                    t_last++;
                    ans = ans + (672 - 472);
                }
                else {
                    if (horse_t[t_last] < horse_q[wWTJwl]) {
                        ans -= 200;
                    }
                    wWTJwl--;
                    t_last++;
                };
            };
        };
    }
    printf ("%d\n", ans);
}

