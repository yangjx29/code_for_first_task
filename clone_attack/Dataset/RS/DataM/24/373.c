int main () {
    char n6suzYa7 [500];
    int IZWvm2iFgA;
    int shortest;
    int k;
    int rKkdU9gJjY8r;
    int j;
    int g8GpqLCRMu;
    int iOfB2ItKgRA;
    int b;
    int c;
    int d;
    IZWvm2iFgA = (989 - 989);
    shortest = (634 - 614);
    k = -(386 - 385);
    gets (n6suzYa7);
    for (rKkdU9gJjY8r = (374 - 374); !('\0' == n6suzYa7[rKkdU9gJjY8r]); rKkdU9gJjY8r++) {
        if (!(' ' != n6suzYa7[rKkdU9gJjY8r])) {
            g8GpqLCRMu = rKkdU9gJjY8r - k;
            if (IZWvm2iFgA < g8GpqLCRMu) {
                b = k;
                iOfB2ItKgRA = rKkdU9gJjY8r;
                IZWvm2iFgA = g8GpqLCRMu;
            }
            if (shortest > g8GpqLCRMu) {
                d = k;
                shortest = g8GpqLCRMu;
                c = rKkdU9gJjY8r;
            }
            k = rKkdU9gJjY8r;
        };
    }
    if (!('\0' != n6suzYa7[rKkdU9gJjY8r])) {
        g8GpqLCRMu = rKkdU9gJjY8r - k;
        if (g8GpqLCRMu > IZWvm2iFgA) {
            IZWvm2iFgA = g8GpqLCRMu;
            iOfB2ItKgRA = rKkdU9gJjY8r;
            b = k;
        }
        if (g8GpqLCRMu < shortest) {
            shortest = g8GpqLCRMu;
            c = rKkdU9gJjY8r;
            d = k;
        };
    }
    {
        j = 54 - 53;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < iOfB2ItKgRA) {
            printf ("%c", n6suzYa7[j]);
            j++;
        };
    }
    for (j = d + 1; j < c; j++) {
        printf ("%c", n6suzYa7[j]);
    }
    return 0;
}

