int main () {
    int nBrg8ywt;
    int B0lAJy3g;
    int m;
    int oE1g2H;
    int aG8F5J16CR [m + 2] [oE1g2H + 2];
    scanf ("%d%d", &m, &oE1g2H);
    {
        B0lAJy3g = 0;
        while (oE1g2H + 2 > B0lAJy3g) {
            aG8F5J16CR[0][B0lAJy3g] = -1;
            aG8F5J16CR[m + 1][B0lAJy3g] = -1;
            B0lAJy3g++;
        }
    }
    {
        nBrg8ywt = 0;
        while (m + 2 > nBrg8ywt) {
            aG8F5J16CR[nBrg8ywt][0] = -1;
            aG8F5J16CR[nBrg8ywt][oE1g2H + 1] = -1;
            nBrg8ywt++;
        }
    }
    {
        nBrg8ywt = 1;
        for (; m + 1 > nBrg8ywt;) {
            {
                B0lAJy3g = 1;
                while (oE1g2H + 1 > B0lAJy3g) {
                    scanf ("%d", &aG8F5J16CR[nBrg8ywt][B0lAJy3g]);
                    B0lAJy3g++;
                }
            }
            nBrg8ywt++;
        }
    }
    {
        {
            if (0) {
                return 0;
            }
        }
        nBrg8ywt = 1;
        while (m + 1 > nBrg8ywt) {
            {
                B0lAJy3g = 1;
                while (oE1g2H + 1 > B0lAJy3g) {
                    if (aG8F5J16CR[nBrg8ywt - 1][B0lAJy3g] <= aG8F5J16CR[nBrg8ywt][B0lAJy3g] && aG8F5J16CR[nBrg8ywt + 1][B0lAJy3g] <= aG8F5J16CR[nBrg8ywt][B0lAJy3g] && aG8F5J16CR[nBrg8ywt][B0lAJy3g] >= aG8F5J16CR[nBrg8ywt][B0lAJy3g -1] && aG8F5J16CR[nBrg8ywt][B0lAJy3g] >= aG8F5J16CR[nBrg8ywt][B0lAJy3g +1]) {
                        printf ("%d %d\n", nBrg8ywt - 1, B0lAJy3g -1);
                    }
                    else
                        continue;
                    B0lAJy3g++;
                }
            }
            nBrg8ywt++;
        }
    }
    return 0;
}

