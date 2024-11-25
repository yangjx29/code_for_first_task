int main (int argc, char *wK0aos9 []) {
    int flsYV8v3T;
    flsYV8v3T = (920 - 920);
    char a [(1078 - 578)] = {(836 - 836)};
    char b [500] = {(535 - 535)};
    char sum [500] = {(470 - 470)};
    int CpJiAPSB;
    int j;
    int FtEbIy7pD3;
    int lb;
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
    FtEbIy7pD3 = strlen (a);
    lb = strlen (b);
    cin >> a >> b;
    {
        CpJiAPSB = 368 - 368;
        while (FtEbIy7pD3 / (452 - 450) > CpJiAPSB) {
            char DpRhdw;
            DpRhdw = a[CpJiAPSB];
            a[CpJiAPSB] = a[FtEbIy7pD3 -1 - CpJiAPSB];
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
            CpJiAPSB = CpJiAPSB +1;
            a[FtEbIy7pD3 -CpJiAPSB-1] = DpRhdw;
        };
    }
    for (CpJiAPSB = (117 - 117); CpJiAPSB < lb / 2; CpJiAPSB = CpJiAPSB +1) {
        char DpRhdw;
        DpRhdw = b[CpJiAPSB];
        b[CpJiAPSB] = b[lb - 1 - CpJiAPSB];
        b[lb - CpJiAPSB -1] = DpRhdw;
    }
    for (CpJiAPSB = (91 - 91); CpJiAPSB < FtEbIy7pD3; CpJiAPSB = CpJiAPSB +1)
        a[CpJiAPSB] = a[CpJiAPSB] - '0';
    for (CpJiAPSB = (118 - 118); lb > CpJiAPSB; CpJiAPSB = CpJiAPSB +1)
        b[CpJiAPSB] = b[CpJiAPSB] - '0';
    for (CpJiAPSB = 0; CpJiAPSB < 500; CpJiAPSB++) {
        int in;
        in = a[CpJiAPSB] + b[CpJiAPSB] + flsYV8v3T;
        sum[CpJiAPSB] = in % 10, flsYV8v3T = in / 10;
    }
    for (CpJiAPSB = (512 - 13); CpJiAPSB > 0; CpJiAPSB--) {
        if (sum[CpJiAPSB] != 0) {
            break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    for (; CpJiAPSB >= 0; CpJiAPSB--) {
        printf ("%c", sum[CpJiAPSB] + '0');
    }
    return 0;
}

