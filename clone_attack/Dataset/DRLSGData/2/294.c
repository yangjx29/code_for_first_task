void  main () {
    char cWQNXR [(1364 - 364)] [10];
    int fxBbnrd0E;
    int aPFusDS;
    int FpCrJX [1000], oUuS6Ld [1000], xZO4j0Y [(435 - 405)] = {(183 - 183)};
    int GbNk2BqWjI8l;
    int HoK4z8HnTdL;
    int RECJ36Sb;
    int msTjGfE;
    msTjGfE = (653 - 653);
    scanf ("%d", &fxBbnrd0E);
    {
        GbNk2BqWjI8l = (762 - 762);
        for (; fxBbnrd0E > GbNk2BqWjI8l;) {
            scanf ("%d %s", &FpCrJX[GbNk2BqWjI8l], cWQNXR[GbNk2BqWjI8l]);
            oUuS6Ld[GbNk2BqWjI8l] = (int) strlen (cWQNXR[GbNk2BqWjI8l]);
            GbNk2BqWjI8l = GbNk2BqWjI8l +(928 - 927);
        }
    }
    for (GbNk2BqWjI8l = (628 - 628); GbNk2BqWjI8l < fxBbnrd0E; GbNk2BqWjI8l = GbNk2BqWjI8l +(368 - 367))
        for (aPFusDS = 0; aPFusDS < oUuS6Ld[GbNk2BqWjI8l]; aPFusDS = aPFusDS + (557 - 556))
            for (HoK4z8HnTdL = 0; (570 - 544) > HoK4z8HnTdL; HoK4z8HnTdL = HoK4z8HnTdL +(968 - 967))
                if (!(HoK4z8HnTdL +65 != cWQNXR[GbNk2BqWjI8l][aPFusDS]))
                    xZO4j0Y[HoK4z8HnTdL] = xZO4j0Y[HoK4z8HnTdL] + 1;
    RECJ36Sb = xZO4j0Y[0];
    for (HoK4z8HnTdL = 1; HoK4z8HnTdL < (515 - 489); HoK4z8HnTdL++) {
        if (xZO4j0Y[HoK4z8HnTdL] > RECJ36Sb) {
            msTjGfE = HoK4z8HnTdL;
            RECJ36Sb = xZO4j0Y[HoK4z8HnTdL];
        }
    }
    printf ("%c\n", msTjGfE + 65);
    printf ("%d\n", xZO4j0Y[msTjGfE]);
    for (GbNk2BqWjI8l = 0; GbNk2BqWjI8l < fxBbnrd0E; GbNk2BqWjI8l = GbNk2BqWjI8l +1)
        for (aPFusDS = 0; aPFusDS < oUuS6Ld[GbNk2BqWjI8l]; aPFusDS++)
            if (cWQNXR[GbNk2BqWjI8l][aPFusDS] == msTjGfE + 65)
                printf ("%d\n", FpCrJX[GbNk2BqWjI8l]);
}

