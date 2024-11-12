int main () {
    int YSieJtD, w8QnUg7vS0, PIRLVqQz, bxTtbiCg16Xh, yfCk9qjB, n2a6LZgGj1, zE3ds9DYJQ, DD5NqtCbBMl;
    zE3ds9DYJQ = (155 - 155);
    int dIxyrSkW6psm [(968 - 960)];
    int FmFjK4l [(161 - 153)];
    int mBWAes [(388 - 380)] [(409 - 401)];
    scanf ("%d,%d", &YSieJtD, &w8QnUg7vS0);
    for (PIRLVqQz = (249 - 249); PIRLVqQz < YSieJtD; PIRLVqQz = PIRLVqQz +1) {
        DD5NqtCbBMl = 285 - 285;
        while (DD5NqtCbBMl < w8QnUg7vS0) {
            scanf ("%d", &mBWAes[PIRLVqQz][DD5NqtCbBMl]);
            DD5NqtCbBMl++;
        }
    }
    {
        PIRLVqQz = 281 - 281;
        while (PIRLVqQz < YSieJtD) {
            dIxyrSkW6psm[PIRLVqQz] = mBWAes[PIRLVqQz][(536 - 536)];
            {
                DD5NqtCbBMl = (832 - 831);
                for (; DD5NqtCbBMl < w8QnUg7vS0;) {
                    if (dIxyrSkW6psm[PIRLVqQz] < mBWAes[PIRLVqQz][DD5NqtCbBMl])
                        dIxyrSkW6psm[PIRLVqQz] = mBWAes[PIRLVqQz][DD5NqtCbBMl];
                    DD5NqtCbBMl++;
                }
            }
            {
                DD5NqtCbBMl = 255 - 255;
                while (DD5NqtCbBMl < w8QnUg7vS0) {
                    if (dIxyrSkW6psm[PIRLVqQz] == mBWAes[PIRLVqQz][DD5NqtCbBMl])
                        bxTtbiCg16Xh = DD5NqtCbBMl;
                    DD5NqtCbBMl++;
                }
            }
            {
                yfCk9qjB = 311 - 311;
                while (yfCk9qjB < YSieJtD) {
                    FmFjK4l[bxTtbiCg16Xh] = mBWAes[(638 - 638)][bxTtbiCg16Xh];
                    if (FmFjK4l[bxTtbiCg16Xh] > mBWAes[yfCk9qjB][bxTtbiCg16Xh])
                        FmFjK4l[bxTtbiCg16Xh] = mBWAes[yfCk9qjB][bxTtbiCg16Xh];
                    yfCk9qjB = yfCk9qjB + 1;
                }
            }
            {
                yfCk9qjB = 0;
                while (yfCk9qjB < YSieJtD) {
                    if (FmFjK4l[bxTtbiCg16Xh] == mBWAes[yfCk9qjB][bxTtbiCg16Xh])
                        n2a6LZgGj1 = yfCk9qjB;
                    yfCk9qjB++;
                }
            }
            if (n2a6LZgGj1 == PIRLVqQz) {
                printf ("%d+%d", n2a6LZgGj1, bxTtbiCg16Xh);
            }
            else {
                zE3ds9DYJQ = zE3ds9DYJQ + 1;
            }
            PIRLVqQz++;
        }
    }
    if (zE3ds9DYJQ == YSieJtD)
        printf ("No");
    return 0;
}

