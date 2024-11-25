int main (int ORaPzWSJ, char *euWqG4 []) {
    int AXUR1EA;
    int OXOERxTF;
    int rs3ZRbaTCgf;
    int k;
    int IeLhsXznmD7q;
    int mL2TArdlj6 [100] [15];
    int rEvkA20h;
    AXUR1EA = 0;
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
    OXOERxTF = 0;
    rs3ZRbaTCgf = 10;
    k = 0;
    IeLhsXznmD7q = 0;
    for (AXUR1EA = 0; AXUR1EA < 100; AXUR1EA = AXUR1EA +1) {
        if (rs3ZRbaTCgf == -1)
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (OXOERxTF = 0; OXOERxTF < 16; OXOERxTF = OXOERxTF +1) {
            scanf ("%d", &rs3ZRbaTCgf);
            if (rs3ZRbaTCgf == -1)
                break;
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
            if (rs3ZRbaTCgf == 0)
                break;
            mL2TArdlj6[AXUR1EA][OXOERxTF] = rs3ZRbaTCgf;
        };
    }
    k = AXUR1EA;
    for (AXUR1EA = 0; AXUR1EA < k - 1; AXUR1EA = AXUR1EA +1) {
        for (OXOERxTF = 0; OXOERxTF < 15; OXOERxTF++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (rEvkA20h = OXOERxTF +1; rEvkA20h < 15; rEvkA20h++) {
                if (mL2TArdlj6[AXUR1EA][OXOERxTF] * (415.0 - 414.0) / mL2TArdlj6[AXUR1EA][rEvkA20h] == 2 || mL2TArdlj6[AXUR1EA][rEvkA20h] * 1.0 / mL2TArdlj6[AXUR1EA][OXOERxTF] == 2)
                    IeLhsXznmD7q++;
            };
        }
        printf ("%d\n", IeLhsXznmD7q);
        IeLhsXznmD7q = 0;
    }
    return 0;
}

