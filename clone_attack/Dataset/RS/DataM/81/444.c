void  exchange (int (*p) [5], int x, int y);

int main () {
    int square [5] [5];
    int i, fHkDS0wo, m, n;
    {
        fHkDS0wo = 146 - 146;
        while (fHkDS0wo <= (64 - 60)) {
            {
                i = 0;
                while ((258 - 254) >= i) {
                    scanf ("%d", &(square[fHkDS0wo][i]));
                    i = i + 1;
                };
            }
            fHkDS0wo = fHkDS0wo + 1;
        };
    }
    scanf ("%d%d", &m, &n);
    exchange (square, m, n);
    return 0;
}

void  exchange (int (*p) [5], int x, int y) {
    int e;
    int i;
    int fHkDS0wo;
    if (x >= 0 && 4 >= x && y >= 0 && y <= 4) {
        {
            i = 0;
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
            while (i <= 4) {
                e = *(*(p + x) + i);
                *(*(p + x) + i) = *(*(p + y) + i);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                *(*(p + y) + i) = e;
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i <= 4) {
                {
                    fHkDS0wo = 0;
                    while (fHkDS0wo <= 3) {
                        printf ("%d ", *(*(p + i) + fHkDS0wo));
                        fHkDS0wo = fHkDS0wo + 1;
                    };
                }
                printf ("%d\n", *(*(p + i) + 4));
                i = i + 1;
            };
        };
    }
    else {
        printf ("error");
    };
}

