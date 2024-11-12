main () {
    int H4iF9hYksp, DH5s6cBG;
    scanf ("%d %d", &H4iF9hYksp, &DH5s6cBG);
    int riy5dPl [H4iF9hYksp] [DH5s6cBG];
    {
        int iLA4TcaRC35 = (562 - 562);
        while (iLA4TcaRC35 < H4iF9hYksp) {
            {
                int R0kG6FNWBKw = (730 - 730);
                while (R0kG6FNWBKw < DH5s6cBG) {
                    scanf ("%d", &riy5dPl[iLA4TcaRC35][R0kG6FNWBKw]);
                    R0kG6FNWBKw++;
                }
            }
            iLA4TcaRC35++;
        }
    }
    int zTkaJe1, pEWUYTXyskvS;
    scanf ("%d %d", &zTkaJe1, &pEWUYTXyskvS);
    int YcorL6 [zTkaJe1] [pEWUYTXyskvS];
    for (int iLA4TcaRC35 = (401 - 401);
    iLA4TcaRC35 < zTkaJe1; iLA4TcaRC35++) {
        int R0kG6FNWBKw = (296 - 296);
        while (R0kG6FNWBKw < pEWUYTXyskvS) {
            scanf ("%d", &YcorL6[iLA4TcaRC35][R0kG6FNWBKw]);
            R0kG6FNWBKw++;
        }
    }
    int i0vSGDdVh [H4iF9hYksp] [pEWUYTXyskvS];
    {
        int iLA4TcaRC35 = (669 - 669);
        while (iLA4TcaRC35 < H4iF9hYksp) {
            {
                int R0kG6FNWBKw = (336 - 336);
                while (R0kG6FNWBKw < pEWUYTXyskvS) {
                    i0vSGDdVh[iLA4TcaRC35][R0kG6FNWBKw] = (677 - 677);
                    {
                        int WluIRKagt = 0;
                        while (WluIRKagt < zTkaJe1) {
                            i0vSGDdVh[iLA4TcaRC35][R0kG6FNWBKw] += (riy5dPl[iLA4TcaRC35][WluIRKagt] * YcorL6[WluIRKagt][R0kG6FNWBKw]);
                            WluIRKagt++;
                        }
                    }
                    if (R0kG6FNWBKw != (pEWUYTXyskvS - (354 - 353)))
                        printf ("%d ", i0vSGDdVh[iLA4TcaRC35][R0kG6FNWBKw]);
                    else
                        printf ("%d\n", i0vSGDdVh[iLA4TcaRC35][R0kG6FNWBKw]);
                    R0kG6FNWBKw++;
                }
            }
            iLA4TcaRC35++;
        }
    }
}

