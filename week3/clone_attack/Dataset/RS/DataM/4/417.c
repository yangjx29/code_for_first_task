int main () {
    int PUHDV3, col, DaHBS6c [100] [100], i, b2Axw7;
    scanf ("%d%d", &PUHDV3, &col);
    for (i = 0; PUHDV3 > i; i = i + 1) {
        for (b2Axw7 = 0; b2Axw7 < col; b2Axw7 = b2Axw7 + 1) {
            scanf ("%d", &DaHBS6c[i][b2Axw7]);
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
    for (i = 0; i < col; i++) {
        for (b2Axw7 = 0; b2Axw7 < i + 1; b2Axw7++) {
            if (b2Axw7 >= PUHDV3) {
                break;
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
                printf ("%d\n", DaHBS6c[b2Axw7][i - b2Axw7]);
            };
        };
    }
    {
        i = 1;
        while (i < PUHDV3) {
            for (b2Axw7 = 0; b2Axw7 < col; b2Axw7++) {
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
                if (i + b2Axw7 >= PUHDV3) {
                    break;
                }
                else {
                    printf ("%d\n", DaHBS6c[i + b2Axw7][col - b2Axw7 - 1]);
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

