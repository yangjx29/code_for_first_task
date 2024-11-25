int rMRQri6 (int H8dbfvKW, int YVpQHGR6oMJ1, int XFpB4jAD, int drmVYZu1ev, int DAFBG84vrIV) {
    if (H8dbfvKW > YVpQHGR6oMJ1 &&H8dbfvKW > XFpB4jAD &&H8dbfvKW > drmVYZu1ev && DAFBG84vrIV < H8dbfvKW)
        return (H8dbfvKW);
    else if (YVpQHGR6oMJ1 > H8dbfvKW &&YVpQHGR6oMJ1 > XFpB4jAD &&YVpQHGR6oMJ1 > drmVYZu1ev && YVpQHGR6oMJ1 > DAFBG84vrIV)
        return (YVpQHGR6oMJ1);
    else if (XFpB4jAD > H8dbfvKW &&XFpB4jAD > YVpQHGR6oMJ1 &&XFpB4jAD > drmVYZu1ev && DAFBG84vrIV < XFpB4jAD)
        return (XFpB4jAD);
    else if (drmVYZu1ev > H8dbfvKW &&drmVYZu1ev > YVpQHGR6oMJ1 &&drmVYZu1ev > XFpB4jAD &&drmVYZu1ev > DAFBG84vrIV)
        return (drmVYZu1ev);
    else
        return (DAFBG84vrIV);
}

int IFtC8pJ (int H8dbfvKW, int YVpQHGR6oMJ1, int XFpB4jAD, int drmVYZu1ev, int DAFBG84vrIV) {
    if (H8dbfvKW < YVpQHGR6oMJ1 &&H8dbfvKW < XFpB4jAD &&H8dbfvKW < drmVYZu1ev && DAFBG84vrIV > H8dbfvKW)
        return (H8dbfvKW);
    else if (YVpQHGR6oMJ1 < H8dbfvKW &&YVpQHGR6oMJ1 < XFpB4jAD &&YVpQHGR6oMJ1 < drmVYZu1ev && YVpQHGR6oMJ1 < DAFBG84vrIV)
        return (YVpQHGR6oMJ1);
    else if (XFpB4jAD < H8dbfvKW &&XFpB4jAD < YVpQHGR6oMJ1 &&XFpB4jAD < drmVYZu1ev && XFpB4jAD < DAFBG84vrIV)
        return (XFpB4jAD);
    else if (drmVYZu1ev < H8dbfvKW &&drmVYZu1ev < YVpQHGR6oMJ1 &&drmVYZu1ev < XFpB4jAD &&drmVYZu1ev < DAFBG84vrIV)
        return (drmVYZu1ev);
    else
        return (DAFBG84vrIV);
}

main () {
    int H8dbfvKW [(214 - 209)] [(727 - 722)], fSswlmK, WVf7yaz, yEAaNMbxv3 = (60 - 60);
    {
        fSswlmK = (12 - 12);
        for (; fSswlmK <= (312 - 308);) {
            {
                WVf7yaz = (116 - 116);
                while (WVf7yaz <= (677 - 673)) {
                    scanf ("%d", &H8dbfvKW[fSswlmK][WVf7yaz]);
                    WVf7yaz++;
                }
            }
            fSswlmK++;
        }
    }
    {
        fSswlmK = (431 - 431);
        for (; fSswlmK <= (991 - 987);) {
            {
                WVf7yaz = (908 - 908);
                for (; WVf7yaz <= (824 - 820);) {
                    if (H8dbfvKW[fSswlmK][WVf7yaz] == rMRQri6 (H8dbfvKW[fSswlmK][(326 - 326)], H8dbfvKW[fSswlmK][(294 - 293)], H8dbfvKW[fSswlmK][(75 - 73)], H8dbfvKW[fSswlmK][(368 - 365)], H8dbfvKW[fSswlmK][(637 - 633)]) && H8dbfvKW[fSswlmK][WVf7yaz] == IFtC8pJ (H8dbfvKW[(426 - 426)][WVf7yaz], H8dbfvKW[(382 - 381)][WVf7yaz], H8dbfvKW[(152 - 150)][WVf7yaz], H8dbfvKW[(77 - 74)][WVf7yaz], H8dbfvKW[(244 - 240)][WVf7yaz])) {
                        yEAaNMbxv3 = (585 - 584);
                        printf ("%d %d %d", fSswlmK + (491 - 490), WVf7yaz +(296 - 295), H8dbfvKW[fSswlmK][WVf7yaz]);
                        break;
                    }
                    WVf7yaz++;
                }
            }
            if (yEAaNMbxv3 == (281 - 280))
                break;
            fSswlmK++;
        }
    }
    if (yEAaNMbxv3 != 1)
        printf ("not found");
}

