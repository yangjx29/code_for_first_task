int main () {
    int FT9Fn2ufy5WQ;
    FT9Fn2ufy5WQ = 0;
    int m3FnqtpJ;
    int EQpKC8B;
    int LxSz27bD5Z;
    int hH5a42Pu;
    int yIkCK5i [1000];
    int TBLqAlpcHQD [(1000758 - 758)];
    int d5r8hd;
    d5r8hd = 0;
    int cdmwprx, ATGqagyfvA;
    scanf ("%d%d", &cdmwprx, &ATGqagyfvA);
    for (m3FnqtpJ = 0; cdmwprx > m3FnqtpJ; m3FnqtpJ = m3FnqtpJ + 1) {
        scanf ("%d", &yIkCK5i[m3FnqtpJ]);
    }
    {
        EQpKC8B = 0;
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
        while (EQpKC8B < cdmwprx) {
            {
                LxSz27bD5Z = EQpKC8B +1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (cdmwprx > LxSz27bD5Z) {
                    TBLqAlpcHQD[d5r8hd] = yIkCK5i[EQpKC8B] + yIkCK5i[LxSz27bD5Z];
                    LxSz27bD5Z = LxSz27bD5Z +1;
                    d5r8hd = d5r8hd + 1;
                };
            }
            EQpKC8B = EQpKC8B +1;
        };
    }
    {
        hH5a42Pu = 0;
        while (d5r8hd > hH5a42Pu) {
            if (TBLqAlpcHQD[hH5a42Pu] == ATGqagyfvA) {
                FT9Fn2ufy5WQ = 1;
                break;
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
            hH5a42Pu = hH5a42Pu + 1;
        };
    }
    if (FT9Fn2ufy5WQ == 1) {
    }
    else {
    }
    return 0;
}

