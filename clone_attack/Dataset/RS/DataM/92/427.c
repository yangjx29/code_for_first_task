void  lenoGNlt (int *array, int max) {
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
    for (int i = 0;
    i < max - 1; i = i + 1) {
        int j = i + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (max > j) {
            if (*(array + i) < *(array + j)) {
                int temp = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = temp;
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
            j = j + 1;
        };
    };
}

int main () {
    int n;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d", &n);
    while (n) {
        int win = 0;
        int tianji [n], qiwang [n];
        int tfirst = 0, qfirst = 0;
        int tlast = n - 1, qlast = n - 1;
        int j = 0;
        int lose = 0;
        {
            int i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (n > i) {
                scanf ("%d", &tianji[i]);
                i = i + 1;
            };
        }
        {
            int i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (n > i) {
                scanf ("%d", &qiwang[i]);
                i = i + 1;
            };
        }
        lenoGNlt (tianji, n);
        lenoGNlt (qiwang, n);
        while (n > j) {
            j++;
            if (tianji[tfirst] > qiwang[qfirst]) {
                win = win + 1;
                tfirst = tfirst + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                qfirst = qfirst + 1;
            }
            else if (tianji[tfirst] < qiwang[qfirst]) {
                qfirst = qfirst + 1;
                lose = lose + 1;
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
                tlast = tlast - 1;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (tianji[tlast] > qiwang[qlast]) {
                    win++;
                    tlast = tlast - 1;
                    qlast = qlast - 1;
                }
                else {
                    if (tianji[tlast] < qiwang[qfirst])
                        lose = lose + 1;
                    qfirst = qfirst + 1;
                    tlast = tlast - 1;
                };
            };
        }
        scanf ("%d", &n);
        printf ("%d\n", win * 200 - lose * 200);
    };
}

