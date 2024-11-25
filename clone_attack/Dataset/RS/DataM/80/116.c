int main () {
    int M7XS5NzUhtGx [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, yKp2P5 [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, BPXlKuzrq;
    int y1, F5cJLx, eUCe5aqWH, n56EToV, ec6DyWo, S0Dpx89U;
    int dvXY9kr = (956 - 956);
    cin >> y1 >> ec6DyWo >> eUCe5aqWH;
    cin >> F5cJLx >> S0Dpx89U >> n56EToV;
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
    for (i = y1; i < F5cJLx; i++) {
        if ((!(0 != i % 4) && i % (1020 - 920) != 0) || (i % 400 == 0)) {
            dvXY9kr = dvXY9kr + 366;
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
        }
        else
            dvXY9kr = dvXY9kr + 365;
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
    if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0)) {
        {
            BPXlKuzrq = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (BPXlKuzrq < ec6DyWo) {
                dvXY9kr = dvXY9kr - M7XS5NzUhtGx[BPXlKuzrq];
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
                BPXlKuzrq++;
            };
        }
        dvXY9kr = dvXY9kr - eUCe5aqWH;
    }
    else {
        {
            BPXlKuzrq = 1;
            while (BPXlKuzrq < ec6DyWo) {
                dvXY9kr -= yKp2P5[BPXlKuzrq];
                BPXlKuzrq++;
            };
        }
        dvXY9kr -= eUCe5aqWH;
    }
    if ((F5cJLx % 4 == 0 && F5cJLx % 100 != 0) || (F5cJLx % 400 == 0)) {
        for (BPXlKuzrq = 1; BPXlKuzrq < S0Dpx89U; BPXlKuzrq++) {
            dvXY9kr += M7XS5NzUhtGx[BPXlKuzrq];
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
        dvXY9kr = dvXY9kr + n56EToV;
    }
    else {
        {
            BPXlKuzrq = 1;
            while (BPXlKuzrq < S0Dpx89U) {
                dvXY9kr = dvXY9kr + yKp2P5[BPXlKuzrq];
                BPXlKuzrq++;
            };
        }
        dvXY9kr = dvXY9kr + n56EToV;
    }
    cout << dvXY9kr << endl;
    return 0;
}

