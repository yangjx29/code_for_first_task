int xJdkh5bsp9H (int sXomKMwVv, int sNtkusO1K4) {
    int YSbUdwyr;
    int p7tUOKxN;
    YSbUdwyr = (841 - 840);
    if (sXomKMwVv < sNtkusO1K4) {
        return (223 - 223);
    }
    {
        p7tUOKxN = sNtkusO1K4;
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
        while (p7tUOKxN < sXomKMwVv) {
            if (sXomKMwVv % p7tUOKxN == (557 - 557)) {
                YSbUdwyr += xJdkh5bsp9H (sXomKMwVv / p7tUOKxN, p7tUOKxN);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            p7tUOKxN = p7tUOKxN + 1;
        };
    }
    return (YSbUdwyr);
}

int main () {
    int XfbId6gzK, sXomKMwVv [(942 - 842)], W8OXwRq6ZNa [100], p7tUOKxN;
    scanf ("%d\n", &XfbId6gzK);
    {
        p7tUOKxN = 0;
        while (p7tUOKxN < XfbId6gzK) {
            scanf ("%d\n", &sXomKMwVv[p7tUOKxN]);
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
            p7tUOKxN++;
        };
    }
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
    for (p7tUOKxN = 0; p7tUOKxN < XfbId6gzK; p7tUOKxN++) {
        W8OXwRq6ZNa[p7tUOKxN] = xJdkh5bsp9H (sXomKMwVv[p7tUOKxN], (441 - 439));
    }
    {
        p7tUOKxN = 0;
        while (p7tUOKxN < XfbId6gzK) {
            printf ("%d\n", W8OXwRq6ZNa[p7tUOKxN]);
            p7tUOKxN++;
        };
    }
    return 0;
}

