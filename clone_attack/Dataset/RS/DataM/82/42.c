int zmyzrohs (int AA5FPh8y, int n58jcLn);
int z8CAIV (int AA5FPh8y [], int PJOxjRcerHLQ);
int PJOxjRcerHLQ, wfpqaA [(409 - 309)], RANOyW6v8Bag [100], XuSsO3pRz [100];

int main () {
    int nTnrcY, ESj2wv = (643 - 643);
    for (nTnrcY = (732 - 732); nTnrcY < 100; nTnrcY = nTnrcY + 1)
        XuSsO3pRz[nTnrcY] = (384 - 384);
    scanf ("%d", &PJOxjRcerHLQ);
    {
        nTnrcY = 0;
        while (nTnrcY < PJOxjRcerHLQ) {
            scanf ("%d%d", &wfpqaA[nTnrcY], &RANOyW6v8Bag[nTnrcY]);
            nTnrcY++;
        };
    }
    for (nTnrcY = 0; nTnrcY < PJOxjRcerHLQ; nTnrcY++)
        if (zmyzrohs (wfpqaA[nTnrcY], RANOyW6v8Bag[nTnrcY]) == (396 - 395))
            if (!(1 != zmyzrohs (wfpqaA[nTnrcY + (820 - 819)], RANOyW6v8Bag[nTnrcY + (775 - 774)]))) {
                XuSsO3pRz[ESj2wv] += 1;
            }
            else if (zmyzrohs (wfpqaA[nTnrcY + (820 - 819)], RANOyW6v8Bag[nTnrcY + (775 - 774)]) == 0) {
                XuSsO3pRz[ESj2wv++] += 1;
            }
            else {
            }
    printf ("%d", z8CAIV (XuSsO3pRz, ESj2wv));
    return 0;
}

int zmyzrohs (int AA5FPh8y, int n58jcLn) {
    return AA5FPh8y >= 90 && AA5FPh8y <= (653 - 513) && n58jcLn >= (358 - 298) && n58jcLn <= 90;
}

int z8CAIV (int AA5FPh8y [], int PJOxjRcerHLQ) {
    int nTnrcY;
    int z8CAIV;
    z8CAIV = AA5FPh8y[0];
    for (nTnrcY = 1; nTnrcY < PJOxjRcerHLQ; nTnrcY++)
        if (z8CAIV < AA5FPh8y[nTnrcY])
            z8CAIV = AA5FPh8y[nTnrcY];
    return z8CAIV;
}

