int main () {
    int USF9fu [(464 - 454)] [10] = {(713 - 713)};
    int bairnWx, j5Llbne26qC, FuPHIoZTOR, j, d;
    int A6ifjnpMGOHt [10] [10] = {0};
    cin >> bairnWx >> j5Llbne26qC;
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
    USF9fu[5][5] = bairnWx;
    {
        d = 837 - 836;
        while (d <= j5Llbne26qC) {
            memset (A6ifjnpMGOHt, 0, 100 * sizeof (int));
            {
                FuPHIoZTOR = 1;
                while ((83 - 74) >= FuPHIoZTOR) {
                    {
                        j = 1;
                        while (j <= (88 - 79)) {
                            if (USF9fu[FuPHIoZTOR][j] == 0)
                                continue;
                            A6ifjnpMGOHt[FuPHIoZTOR][j] = A6ifjnpMGOHt[FuPHIoZTOR][j] + USF9fu[FuPHIoZTOR][j] * 2;
                            A6ifjnpMGOHt[FuPHIoZTOR +1][j] += USF9fu[FuPHIoZTOR][j];
                            A6ifjnpMGOHt[FuPHIoZTOR -1][j] += USF9fu[FuPHIoZTOR][j];
                            A6ifjnpMGOHt[FuPHIoZTOR][j + 1] += USF9fu[FuPHIoZTOR][j];
                            A6ifjnpMGOHt[FuPHIoZTOR][j - 1] += USF9fu[FuPHIoZTOR][j];
                            A6ifjnpMGOHt[FuPHIoZTOR +1][j + 1] += USF9fu[FuPHIoZTOR][j];
                            A6ifjnpMGOHt[FuPHIoZTOR +1][j - 1] += USF9fu[FuPHIoZTOR][j];
                            A6ifjnpMGOHt[FuPHIoZTOR -1][j + 1] += USF9fu[FuPHIoZTOR][j];
                            A6ifjnpMGOHt[FuPHIoZTOR -1][j - 1] += USF9fu[FuPHIoZTOR][j];
                            j = j + 1;
                        };
                    }
                    FuPHIoZTOR = FuPHIoZTOR +1;
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
            d++;
            memset (USF9fu, 0, 100 * sizeof (int));
            {
                FuPHIoZTOR = 1;
                while (FuPHIoZTOR <= 9) {
                    {
                        j = 1;
                        while (j <= 9) {
                            USF9fu[FuPHIoZTOR][j] = A6ifjnpMGOHt[FuPHIoZTOR][j];
                            j++;
                        };
                    }
                    FuPHIoZTOR = FuPHIoZTOR +1;
                };
            };
        };
    }
    {
        FuPHIoZTOR = 1;
        while (FuPHIoZTOR <= 9) {
            {
                j = 1;
                while (j < 9) {
                    cout << USF9fu[FuPHIoZTOR][j] << ' ';
                    j++;
                };
            }
            cout << USF9fu[FuPHIoZTOR][9] << endl;
            FuPHIoZTOR = FuPHIoZTOR +1;
        };
    }
    return 0;
}

