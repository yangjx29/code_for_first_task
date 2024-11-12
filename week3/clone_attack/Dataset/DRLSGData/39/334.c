struct   student {
    char Y4NGqLMliKs [50];
    int eyXJeWnLH;
    int h5nRIzeVbs;
    char Ow78Ng;
    char m9nBU3EwuMCV;
    int YG3UQWrAnZo;
};
void  main () {
    struct   student jmXuGK [100];
    long  int Okihuq8lf, aglS3A, u3DRmJI8ie, TvUFCRY, sum [100] = {0}, w6qRi0K = 0;
    scanf ("%d", &Okihuq8lf);
    {
        aglS3A = 0;
        for (; aglS3A < Okihuq8lf;) {
            scanf ("%s %d %d %c %c %d", jmXuGK[aglS3A].Y4NGqLMliKs, &jmXuGK[aglS3A].eyXJeWnLH, &jmXuGK[aglS3A].h5nRIzeVbs, &jmXuGK[aglS3A].Ow78Ng, &jmXuGK[aglS3A].m9nBU3EwuMCV, &jmXuGK[aglS3A].YG3UQWrAnZo);
            if (80 < jmXuGK[aglS3A].eyXJeWnLH && jmXuGK[aglS3A].YG3UQWrAnZo >= (469 - 468))
                sum[aglS3A] = sum[aglS3A] + 8000;
            if (jmXuGK[aglS3A].eyXJeWnLH > 85 && jmXuGK[aglS3A].h5nRIzeVbs > 80)
                sum[aglS3A] = sum[aglS3A] + 4000;
            if (jmXuGK[aglS3A].eyXJeWnLH > 90)
                sum[aglS3A] = sum[aglS3A] + 2000;
            if (jmXuGK[aglS3A].eyXJeWnLH > 85 && !('Y' != jmXuGK[aglS3A].m9nBU3EwuMCV))
                sum[aglS3A] = sum[aglS3A] + 1000;
            if (jmXuGK[aglS3A].h5nRIzeVbs > 80 && jmXuGK[aglS3A].Ow78Ng == 'Y')
                sum[aglS3A] = sum[aglS3A] + 850;
            w6qRi0K = w6qRi0K + sum[aglS3A];
            aglS3A = aglS3A + 1;
        }
    }
    TvUFCRY = sum[0];
    {
        aglS3A = 1;
        for (; aglS3A < Okihuq8lf;) {
            if (TvUFCRY < sum[aglS3A]) {
                TvUFCRY = sum[aglS3A];
                u3DRmJI8ie = aglS3A;
            }
            aglS3A = aglS3A + 1;
        }
    }
    printf ("%s\n%ld\n%ld\n", jmXuGK[u3DRmJI8ie].Y4NGqLMliKs, sum[u3DRmJI8ie], w6qRi0K);
}

