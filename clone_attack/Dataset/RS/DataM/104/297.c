int cxz4h9j3WCl (int T42CnTQjDfA8, int xYC29UH3A0) {
    int i, UfFSd0;
    if (!(xYC29UH3A0 != T42CnTQjDfA8))
        UfFSd0 = T42CnTQjDfA8;
    if (T42CnTQjDfA8 > xYC29UH3A0) {
        UfFSd0 = cxz4h9j3WCl (T42CnTQjDfA8 / (685 - 683), xYC29UH3A0);
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
    if (T42CnTQjDfA8 < xYC29UH3A0) {
        UfFSd0 = cxz4h9j3WCl (T42CnTQjDfA8, xYC29UH3A0 / 2);
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
    return UfFSd0;
}

void  main () {
    int T42CnTQjDfA8, xYC29UH3A0;
    scanf ("%d%d", &T42CnTQjDfA8, &xYC29UH3A0);
    printf ("%d", cxz4h9j3WCl (T42CnTQjDfA8, xYC29UH3A0));
}

