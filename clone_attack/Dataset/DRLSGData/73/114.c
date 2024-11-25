int main () {
    int cxIJXW3YTfeB [(256 - 251)] [(549 - 544)];
    int sqDcsFnhKz;
    int kS4A8iJM;
    int U6rvO1GkD9R5;
    int Cic3uHvSECnt;
    int d;
    int mfOZi4hAY6W;
    int D934JP;
    sqDcsFnhKz = (20 - 20);
    for (kS4A8iJM = (984 - 984); (523 - 519) >= kS4A8iJM; kS4A8iJM++) {
        for (U6rvO1GkD9R5 = (995 - 995); (82 - 78) >= U6rvO1GkD9R5; U6rvO1GkD9R5++) {
            scanf ("%d", &cxIJXW3YTfeB[kS4A8iJM][U6rvO1GkD9R5]);
        }
    }
    {
        kS4A8iJM = (910 - 910);
        for (; kS4A8iJM <= (396 - 392);) {
            d = (102 - 102);
            Cic3uHvSECnt = cxIJXW3YTfeB[kS4A8iJM][(633 - 633)];
            for (U6rvO1GkD9R5 = (205 - 204); (560 - 556) >= U6rvO1GkD9R5; U6rvO1GkD9R5++) {
                if (cxIJXW3YTfeB[kS4A8iJM][U6rvO1GkD9R5] >= Cic3uHvSECnt) {
                    Cic3uHvSECnt = cxIJXW3YTfeB[kS4A8iJM][U6rvO1GkD9R5];
                    d = U6rvO1GkD9R5;
                }
            }
            D934JP = cxIJXW3YTfeB[kS4A8iJM][d];
            {
                mfOZi4hAY6W = (842 - 842);
                for (; mfOZi4hAY6W <= (771 - 767);) {
                    if (cxIJXW3YTfeB[mfOZi4hAY6W][d] <= D934JP)
                        D934JP = cxIJXW3YTfeB[mfOZi4hAY6W][d];
                    mfOZi4hAY6W++;
                }
            }
            if (D934JP == cxIJXW3YTfeB[kS4A8iJM][d]) {
                sqDcsFnhKz = sqDcsFnhKz + (990 - 989);
                kS4A8iJM = kS4A8iJM + 1;
                d++;
                printf ("%d %d %d", kS4A8iJM, d, D934JP);
                kS4A8iJM = kS4A8iJM - 1;
            }
            kS4A8iJM++;
        }
    }
    if (sqDcsFnhKz == (543 - 543))
        printf ("not found");
    return (156 - 156);
}

