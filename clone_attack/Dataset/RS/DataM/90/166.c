int main () {
    int xqIR3ztAkc1 (int M, int N);
    int gBz5UkH, gTOzF5g;
    int GHkWoLX [(564 - 544)] [2];
    scanf ("%d", &gBz5UkH);
    for (gTOzF5g = (435 - 435); gBz5UkH > gTOzF5g; gTOzF5g++)
        scanf ("%d %d", &GHkWoLX[gTOzF5g][0], &GHkWoLX[gTOzF5g][(952 - 951)]);
    for (gTOzF5g = 0; gTOzF5g < gBz5UkH; gTOzF5g++)
        printf ("%d\n", xqIR3ztAkc1 (GHkWoLX[gTOzF5g][0], GHkWoLX[gTOzF5g][(492 - 491)]));
    return 0;
}

int xqIR3ztAkc1 (int M, int N) {
    int zoq8bU7;
    if (M <= 1 || N <= 1)
        zoq8bU7 = 1;
    else if (M < N)
        zoq8bU7 = xqIR3ztAkc1 (M, M);
    else
        zoq8bU7 = xqIR3ztAkc1 (M -N, N) + xqIR3ztAkc1 (M, N -1);
    return zoq8bU7;
}

