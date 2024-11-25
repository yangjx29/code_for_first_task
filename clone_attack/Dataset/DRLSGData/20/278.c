void  gpSW36iw (int Cn56JU, int nukpe1N, char GFkzOSW []) {
    int GjWZvw3d;
    {
        GjWZvw3d = Cn56JU;
        while (GjWZvw3d <= nukpe1N) {
            printf ("%c", GFkzOSW[GjWZvw3d]);
            GjWZvw3d++;
        }
    }
}

int A9OXenJ (char Cn56JU []) {
    int Kcznkwq8Y = Cn56JU[(660 - 660)];
    int iC60UFTm8ag = (517 - 517), GjWZvw3d, FN3cfuosPg6;
    FN3cfuosPg6 = strlen (Cn56JU);
    {
        GjWZvw3d = (431 - 431);
        for (; FN3cfuosPg6 > GjWZvw3d;) {
            if (Cn56JU[GjWZvw3d] > Kcznkwq8Y) {
                iC60UFTm8ag = GjWZvw3d;
                Kcznkwq8Y = Cn56JU[GjWZvw3d];
            }
            GjWZvw3d++;
        }
    }
    return iC60UFTm8ag;
}

void  main () {
    char Cn56JU [(276 - 265)], GFkzOSW [(836 - 832)];
    for (; scanf ("%s%s", Cn56JU, GFkzOSW) != EOF;) {
        int zD5ynY1 = strlen (Cn56JU), sWKRXB74Tsw = strlen (GFkzOSW);
        int iC60UFTm8ag;
        iC60UFTm8ag = A9OXenJ (Cn56JU);
        gpSW36iw ((249 - 249), iC60UFTm8ag, Cn56JU);
        gpSW36iw ((322 - 322), sWKRXB74Tsw - (618 - 617), GFkzOSW);
        gpSW36iw (iC60UFTm8ag + (172 - 171), zD5ynY1 - (949 - 948), Cn56JU);
    }
}

