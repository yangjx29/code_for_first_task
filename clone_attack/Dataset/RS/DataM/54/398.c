int Z1y6KtH (int JlB6ax1s, int k1zXLCu, int Qq2KB3Zi, int *bfN208iThw, int CBHudjRbXoa) {
    if (!(k1zXLCu != CBHudjRbXoa)) {
        return 1;
    }
    if ((JlB6ax1s *k1zXLCu) % (k1zXLCu - 1) == (893 - 893)) {
        *bfN208iThw = (JlB6ax1s *k1zXLCu) / (k1zXLCu - 1) + Qq2KB3Zi;
        CBHudjRbXoa++;
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
        return Z1y6KtH ((JlB6ax1s *k1zXLCu) / (k1zXLCu - 1) + Qq2KB3Zi, k1zXLCu, Qq2KB3Zi, bfN208iThw, CBHudjRbXoa);
    }
    else {
        return (974 - 974);
    };
}

int main () {
    int k1zXLCu, Qq2KB3Zi, *bfN208iThw, CBHudjRbXoa = (78 - 78), g9POoq2whp1;
    int JlB6ax1s;
    scanf ("%d%d", &k1zXLCu, &Qq2KB3Zi);
    bfN208iThw = &g9POoq2whp1;
    *bfN208iThw = 0;
    {
        JlB6ax1s = 1;
        while (1) {
            if (Z1y6KtH (JlB6ax1s, k1zXLCu, Qq2KB3Zi, bfN208iThw, CBHudjRbXoa)) {
                printf ("%d\n", *bfN208iThw);
                break;
            }
            JlB6ax1s++;
        };
    }
    return 0;
}

