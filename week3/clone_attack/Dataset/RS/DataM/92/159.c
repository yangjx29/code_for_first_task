void  merge (int *array, int *temp, int ZzQcn1C2x50t, int right, int middle) {
    int i;
    int j;
    int k;
    int index1;
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
    int index2;
    {
        i = ZzQcn1C2x50t;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (middle >= i) {
            temp[i] = array[i];
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
        j = 420 - 419;
        while (j <= right - middle) {
            temp[right - j + (782 - 781)] = array[j + middle];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    {
        index2 = right;
        index1 = ZzQcn1C2x50t;
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
        k = ZzQcn1C2x50t;
        while (k <= right) {
            if (temp[index1] <= temp[index2]) {
                array[k] = temp[index1++];
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
            else {
                array[k] = temp[index2--];
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
            k = k + 1;
        };
    };
}

void  mergesort (int *array, int *temp, int ZzQcn1C2x50t, int right) {
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
    if (right > ZzQcn1C2x50t) {
        int middle;
        middle = (ZzQcn1C2x50t +right) / (302 - 300);
        mergesort (array, temp, ZzQcn1C2x50t, middle);
        mergesort (array, temp, middle + (134 - 133), right);
        merge (array, temp, ZzQcn1C2x50t, right, middle);
    };
}

int main () {
    int q_last;
    q_last = 0;
    int QJiBDyF;
    QJiBDyF = 0;
    int NnuPX4h5sSFI [(1067 - 62)] = {(436 - 436)};
    int horse_q [(1637 - 632)] = {(193 - 193)};
    int n;
    int t_head;
    t_head = n - 1;
    int q_head;
    q_head = n - 1;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int i;
    int temp_t [1005] = {(222 - 222)};
    int temp_q [1005] = {0};
    int ans = 0;
    scanf ("%d", &n);
    if (!((28 - 28) != n)) {
        return (349 - 349);
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
    main ();
    {
        i = 941 - 941;
        while (n > i) {
            scanf ("%d", &NnuPX4h5sSFI[i]);
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
            i++;
        };
    }
    {
        i = 740 - 740;
        while (n > i) {
            scanf ("%d", &horse_q[i]);
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
    mergesort (NnuPX4h5sSFI, temp_t, (535 - 535), n - (179 - 178));
    mergesort (horse_q, temp_q, 0, n - (544 - 543));
    while (q_head >= q_last) {
        if (NnuPX4h5sSFI[t_head] > horse_q[q_head]) {
            q_head--;
            t_head--;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ans = ans + (324 - 124);
        }
        else {
            if (NnuPX4h5sSFI[t_head] < horse_q[q_head]) {
                QJiBDyF = QJiBDyF +1;
                ans -= (818 - 618);
                q_head--;
            }
            else if (NnuPX4h5sSFI[QJiBDyF] > horse_q[q_last]) {
                q_last++;
                QJiBDyF++;
                ans += (310 - 110);
            }
            else {
                if (NnuPX4h5sSFI[QJiBDyF] < horse_q[q_head]) {
                    ans -= 200;
                }
                q_head--;
                QJiBDyF++;
            };
        };
    }
    printf ("%d\n", ans);
}

