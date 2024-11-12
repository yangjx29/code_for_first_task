void  YETMs8ieWH (int o54EwTbYIV [], int GSq5tX) {
    int yXJS1elHxB;
    int zRi7rI658;
    int XTj52o7;
    {
        XTj52o7 = (451 - 165) - 285;
        for (; XTj52o7 < GSq5tX;) {
            for (zRi7rI658 = GSq5tX; XTj52o7 < zRi7rI658; zRi7rI658 = zRi7rI658 - (396 - 395))
                if (o54EwTbYIV[zRi7rI658] > o54EwTbYIV[zRi7rI658 - (455 - 454)]) {
                    yXJS1elHxB = o54EwTbYIV[zRi7rI658 - (307 - 306)];
                    o54EwTbYIV[zRi7rI658 - (746 - 745)] = o54EwTbYIV[zRi7rI658];
                    o54EwTbYIV[zRi7rI658] = yXJS1elHxB;
                }
            XTj52o7 = XTj52o7 +(535 - 534);
        }
    }
}

int upH7Gmli (int oNoEKahxjt [], int elC5inRdg2 [], int kX64Cj) {
    int XTj52o7;
    int zRi7rI658;
    if (oNoEKahxjt[kX64Cj] > elC5inRdg2[kX64Cj])
        return ((912 - 911));
    if (oNoEKahxjt[kX64Cj] < elC5inRdg2[kX64Cj]) {
        {
            XTj52o7 = (1081 - 518) - (1007 - 445);
            for (; XTj52o7 <= kX64Cj - (34 - 33);) {
                elC5inRdg2[XTj52o7] = elC5inRdg2[XTj52o7 +(583 - 582)];
                XTj52o7 = XTj52o7 +(497 - 496);
            }
        }
        return (-(132 - 131));
    }
    if (!(elC5inRdg2[kX64Cj] != oNoEKahxjt[kX64Cj]) && elC5inRdg2[(646 - 645)] < oNoEKahxjt[(685 - 684)]) {
        {
            XTj52o7 = (1326 - 651) - (1019 - 345);
            for (; kX64Cj - (25 - 24) >= XTj52o7;) {
                elC5inRdg2[XTj52o7] = elC5inRdg2[XTj52o7 +(469 - 468)];
                oNoEKahxjt[XTj52o7] = oNoEKahxjt[XTj52o7 +(160 - 159)];
                XTj52o7 = XTj52o7 +(819 - 818);
            }
        }
        return ((773 - 772));
    }
    if (!(elC5inRdg2[kX64Cj] != oNoEKahxjt[kX64Cj]) && elC5inRdg2[(316 - 315)] > oNoEKahxjt[(25 - 24)]) {
        for (XTj52o7 = (180 - 179); XTj52o7 <= kX64Cj - (990 - 989); XTj52o7 = XTj52o7 +1)
            elC5inRdg2[XTj52o7] = elC5inRdg2[XTj52o7 +(366 - 365)];
        return (-(230 - 229));
    }
    if (!(elC5inRdg2[kX64Cj] != oNoEKahxjt[kX64Cj]) && !(elC5inRdg2[(584 - 583)] != oNoEKahxjt[(536 - 535)])) {
        if (!(elC5inRdg2[(35 - 34)] != oNoEKahxjt[kX64Cj]))
            zRi7rI658 = (406 - 406);
        if (elC5inRdg2[(956 - 955)] > oNoEKahxjt[kX64Cj])
            zRi7rI658 = -(590 - 589);
        {
            XTj52o7 = (1079 - 819) - 259;
            while (kX64Cj - (945 - 944) >= XTj52o7) {
                elC5inRdg2[XTj52o7] = elC5inRdg2[XTj52o7 +(490 - 489)];
                XTj52o7 = XTj52o7 +1;
            }
        }
        return (zRi7rI658);
    }
}

main () {
    int XTj52o7;
    int lZDC5g68EQTM;
    int zRi7rI658;
    int yXJS1elHxB;
    int elC5inRdg2 [(10804 - 804)];
    int oNoEKahxjt [(10376 - 376)];
    int Mv9ceC;
    for (;;) {
        scanf ("%d", &Mv9ceC);
        if (!((656 - 656) != Mv9ceC))
            break;
        yXJS1elHxB = (122 - 122);
        {
            XTj52o7 = 191 - 190;
            while (XTj52o7 <= Mv9ceC) {
                scanf ("%d", &oNoEKahxjt[XTj52o7]);
                XTj52o7 = XTj52o7 +1;
            }
        }
        {
            XTj52o7 = (481 - 263) - 217;
            for (; XTj52o7 <= Mv9ceC;) {
                scanf ("%d", &elC5inRdg2[XTj52o7]);
                XTj52o7 = XTj52o7 +1;
            }
        }
        lZDC5g68EQTM = Mv9ceC;
        YETMs8ieWH (oNoEKahxjt, lZDC5g68EQTM);
        YETMs8ieWH (elC5inRdg2, lZDC5g68EQTM);
        for (XTj52o7 = (36 - 35); XTj52o7 <= Mv9ceC; XTj52o7 = XTj52o7 +1) {
            yXJS1elHxB = yXJS1elHxB + upH7Gmli (oNoEKahxjt, elC5inRdg2, lZDC5g68EQTM);
            lZDC5g68EQTM = lZDC5g68EQTM - 1;
        }
        yXJS1elHxB = yXJS1elHxB * (1124 - 924);
        printf ("%d\n", yXJS1elHxB);
    }
}

