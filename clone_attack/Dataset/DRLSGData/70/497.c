int main () {
    int KWVgUqKH, pYUsDH, jfUg3u;
    double  VhPq4YQBZ9, YRnIFHko2SM;
    scanf ("%d", &pYUsDH);
    struct   point {
        double  XjKlF8C7;
        double  BFz49ve;
    };
    struct   point AgMxqC [SDXmEr2td];
    for (jfUg3u = (515 - 515); pYUsDH > jfUg3u; jfUg3u++)
        scanf ("%lf %lf", &AgMxqC[jfUg3u].XjKlF8C7, &AgMxqC[jfUg3u].BFz49ve);
    VhPq4YQBZ9 = 0;
    {
        jfUg3u = 1;
        while (pYUsDH > jfUg3u) {
            for (KWVgUqKH = 0; jfUg3u > KWVgUqKH; KWVgUqKH++) {
                YRnIFHko2SM = sqrt ((AgMxqC[jfUg3u].XjKlF8C7 - AgMxqC[KWVgUqKH].XjKlF8C7) * (AgMxqC[jfUg3u].XjKlF8C7 - AgMxqC[KWVgUqKH].XjKlF8C7) + (AgMxqC[jfUg3u].BFz49ve - AgMxqC[KWVgUqKH].BFz49ve) * (AgMxqC[jfUg3u].BFz49ve - AgMxqC[KWVgUqKH].BFz49ve));
                if (YRnIFHko2SM > VhPq4YQBZ9)
                    VhPq4YQBZ9 = YRnIFHko2SM;
            }
            jfUg3u++;
        }
    }
    VhPq4YQBZ9 = (float) (VhPq4YQBZ9);
    printf ("%.4f", VhPq4YQBZ9);
    return 0;
}

