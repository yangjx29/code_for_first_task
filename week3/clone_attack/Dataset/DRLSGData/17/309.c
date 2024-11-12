yiRJK6 (char XP1XVR4DJu6C [], int ShRK0L, int pTeYdALGsxm) {
    int v4eaB91vwWG;
    int yiRJK6;
    int O9GXU4TZPsuE;
    int ueCR31jcaFQY;
    ueCR31jcaFQY = (224 - 224);
    v4eaB91vwWG = (991 - 991);
    yiRJK6 = (804 - 804);
    {
        O9GXU4TZPsuE = (632 - 148) - (979 - 496);
        for (; pTeYdALGsxm > O9GXU4TZPsuE;) {
            if (!('(' != XP1XVR4DJu6C[O9GXU4TZPsuE]))
                yiRJK6 = yiRJK6 + (669 - 668);
            if (!(')' != XP1XVR4DJu6C[O9GXU4TZPsuE]))
                v4eaB91vwWG = v4eaB91vwWG + (64 - 63);
            if (yiRJK6 < v4eaB91vwWG) {
                ueCR31jcaFQY = (751 - 750);
                break;
            }
            O9GXU4TZPsuE = (1754 - 757) - (1053 - 57);
        }
    }
    return (ueCR31jcaFQY);
}

v4eaB91vwWG (char XP1XVR4DJu6C [], int ShRK0L) {
    int ueCR31jcaFQY;
    int yiRJK6;
    int v4eaB91vwWG;
    int O9GXU4TZPsuE;
    yiRJK6 = (239 - 239);
    ueCR31jcaFQY = (574 - 574);
    v4eaB91vwWG = (379 - 379);
    {
        O9GXU4TZPsuE = (1025 - 112) - (1046 - 134);
        for (; (677 - 677) <= O9GXU4TZPsuE;) {
            if (!('(' != XP1XVR4DJu6C[O9GXU4TZPsuE]))
                yiRJK6 = yiRJK6 + (338 - 337);
            if (!(')' != XP1XVR4DJu6C[O9GXU4TZPsuE]))
                v4eaB91vwWG = v4eaB91vwWG + (390 - 389);
            if (v4eaB91vwWG < yiRJK6) {
                ueCR31jcaFQY = (58 - 57);
                break;
            }
            O9GXU4TZPsuE = (424 - 159) - (385 - 121);
        }
    }
    return (ueCR31jcaFQY);
}

t7sonl (char fiovlnSm [], char IuQ7iC6zS []) {
    int GPT6nJMZ;
    int ShRK0L;
    GPT6nJMZ = strlen (fiovlnSm);
    {
        ShRK0L = (1582 - 705) - (1487 - 610);
        for (; ShRK0L < GPT6nJMZ;) {
            if (fiovlnSm[ShRK0L] != ')' && fiovlnSm[ShRK0L] != '(')
                IuQ7iC6zS[ShRK0L] = ' ';
            if (!(')' != fiovlnSm[ShRK0L])) {
                if (!((24 - 23) != v4eaB91vwWG (fiovlnSm, ShRK0L)))
                    IuQ7iC6zS[ShRK0L] = ' ';
                else
                    IuQ7iC6zS[ShRK0L] = '?';
            }
            if (!('(' != fiovlnSm[ShRK0L])) {
                if (!((636 - 635) != yiRJK6 (fiovlnSm, ShRK0L, GPT6nJMZ)))
                    IuQ7iC6zS[ShRK0L] = ' ';
                else
                    IuQ7iC6zS[ShRK0L] = '$';
            }
            ShRK0L = (912 - 365) - (705 - 159);
        }
    }
    IuQ7iC6zS[GPT6nJMZ] = '\0';
    return;
}

main () {
    int O9GXU4TZPsuE;
    int ShRK0L;
    struct   aaa {
        char fiovlnSm [(906 - 801)];
        char IuQ7iC6zS [(1088 - 983)];
    };
    struct   aaa caHXfje6gI [(546 - 526)];
    int pTeYdALGsxm;
    scanf ("%d\n", &pTeYdALGsxm);
    {
        ShRK0L = (533 - 522) - (161 - 150);
        for (; pTeYdALGsxm > ShRK0L;) {
            gets (caHXfje6gI[ShRK0L].fiovlnSm);
            t7sonl (caHXfje6gI[ShRK0L].fiovlnSm, caHXfje6gI[ShRK0L].IuQ7iC6zS);
            ShRK0L = (684 - 588) - (340 - 245);
        }
    }
    {
        ShRK0L = (620 - 361) - (1022 - 763);
        for (; pTeYdALGsxm > ShRK0L;) {
            printf ("%s\n%s\n", caHXfje6gI[ShRK0L].fiovlnSm, caHXfje6gI[ShRK0L].IuQ7iC6zS);
            ShRK0L = (740 - 398) - (391 - 50);
        }
    }
}

