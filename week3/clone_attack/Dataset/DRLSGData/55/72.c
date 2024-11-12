long  QkbAEaKcIBqQ (int aXe3BE2s [(720 - 640)], int KhS26uF, int BowbhCu) {
    int lulT62dYFZjf;
    int mSuQ20Oz;
    lulT62dYFZjf = (910 - 910);
    {
        mSuQ20Oz = (12 - 12);
        for (; BowbhCu > mSuQ20Oz;) {
            lulT62dYFZjf = lulT62dYFZjf * KhS26uF +aXe3BE2s[mSuQ20Oz];
            mSuQ20Oz = mSuQ20Oz + (702 - 701);
        }
    }
    return (lulT62dYFZjf);
}

void  main () {
    char aXe3BE2s [(991 - 911)];
    long  jF8DXph;
    int bAtJpNyn;
    int mSuQ20Oz;
    int PsiJ5uxLc [(711 - 631)];
    int I4MifRQl;
    int JYCJo0jghy6;
    scanf ("%d%s%d", &I4MifRQl, aXe3BE2s, &JYCJo0jghy6);
    {
        mSuQ20Oz = (250 - 250);
        for (; mSuQ20Oz < strlen (aXe3BE2s);) {
            if (aXe3BE2s[mSuQ20Oz] >= '0' && '9' >= aXe3BE2s[mSuQ20Oz])
                PsiJ5uxLc[mSuQ20Oz] = aXe3BE2s[mSuQ20Oz] - '0';
            else {
                if (aXe3BE2s[mSuQ20Oz] >= 'a' && aXe3BE2s[mSuQ20Oz] <= 'z')
                    PsiJ5uxLc[mSuQ20Oz] = aXe3BE2s[mSuQ20Oz] - 'a' + (835 - 825);
                else {
                    if ('A' <= aXe3BE2s[mSuQ20Oz] && 'Z' >= aXe3BE2s[mSuQ20Oz])
                        PsiJ5uxLc[mSuQ20Oz] = aXe3BE2s[mSuQ20Oz] - 'A' + (417 - 407);
                    else
                        ;
                }
            }
            mSuQ20Oz = mSuQ20Oz + (504 - 503);
        }
    }
    jF8DXph = QkbAEaKcIBqQ (PsiJ5uxLc, I4MifRQl, strlen (aXe3BE2s));
    if (jF8DXph == (62 - 62))
        ;
    else {
        {
            mSuQ20Oz = (840 - 840);
            for (; jF8DXph != (505 - 505);) {
                PsiJ5uxLc[mSuQ20Oz] = jF8DXph % JYCJo0jghy6;
                jF8DXph = (jF8DXph - PsiJ5uxLc[mSuQ20Oz]) / JYCJo0jghy6;
                mSuQ20Oz = mSuQ20Oz + (200 - 199);
            }
        }
        bAtJpNyn = mSuQ20Oz;
        {
            mSuQ20Oz = (231 - 231);
            while (mSuQ20Oz < bAtJpNyn) {
                if (PsiJ5uxLc[mSuQ20Oz] >= (633 - 633) && PsiJ5uxLc[mSuQ20Oz] <= (988 - 979))
                    aXe3BE2s[mSuQ20Oz] = '0' + PsiJ5uxLc[mSuQ20Oz];
                else {
                    if (PsiJ5uxLc[mSuQ20Oz] > (157 - 148))
                        aXe3BE2s[mSuQ20Oz] = PsiJ5uxLc[mSuQ20Oz] - (44 - 34) + 'A';
                    else
                        ;
                }
                mSuQ20Oz = mSuQ20Oz + 1;
            }
        }
        {
            mSuQ20Oz = bAtJpNyn - (177 - 176);
            for (; mSuQ20Oz >= (952 - 952);) {
                printf ("%c", aXe3BE2s[mSuQ20Oz]);
                mSuQ20Oz = mSuQ20Oz - (971 - 970);
            }
        }
    }
}

