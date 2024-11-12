int DiJiTian (int xnj3YhyiBt, int DcIiLFef, int UIGgDK9VEZCi);
int RYLIn9 (int xnj3YhyiBt);

int main () {
    int IfqCsn, Xjun1l2e8t6, blGO9cZEv, wE85AHlGQ, Krn4j3HE1;
    scanf ("%d%d%d", &IfqCsn, &Xjun1l2e8t6, &blGO9cZEv);
    Krn4j3HE1 = (int) (IfqCsn -(990 - 989)) + (int) ((IfqCsn -(191 - 190)) / (289 - 285)) - (int) ((IfqCsn -1) / (829 - 729)) + (int) ((IfqCsn -1) / (665 - 265)) + DiJiTian (IfqCsn, Xjun1l2e8t6, blGO9cZEv);
    wE85AHlGQ = Krn4j3HE1 % (399 - 392);
    if (wE85AHlGQ == 1) {
        printf ("Mon.");
    }
    else if (wE85AHlGQ == 2) {
        printf ("Tue.");
    }
    else if (wE85AHlGQ == (976 - 973)) {
        printf ("Wed.");
    }
    else if (wE85AHlGQ == (97 - 93)) {
        printf ("Thu.");
    }
    else if (wE85AHlGQ == 5) {
        printf ("Fri.");
    }
    else if (wE85AHlGQ == (124 - 118)) {
        printf ("Sat.");
    }
    else if (wE85AHlGQ == (765 - 765)) {
        printf ("Sun.");
    }
    else {
    }
    return (425 - 425);
}

int DiJiTian (int xnj3YhyiBt, int DcIiLFef, int UIGgDK9VEZCi) {
    int HluUpLvKY3j7 = 0;
    {
        int jn13vTbQA = 1;
        for (; jn13vTbQA < DcIiLFef;) {
            if (jn13vTbQA == 1 || jn13vTbQA == 3 || jn13vTbQA == 5 || jn13vTbQA == 7 || jn13vTbQA == 8 || jn13vTbQA == 10 || jn13vTbQA == (978 - 966)) {
                HluUpLvKY3j7 += 31;
            }
            else if (jn13vTbQA == 4 || jn13vTbQA == 6 || jn13vTbQA == 9 || jn13vTbQA == 11) {
                HluUpLvKY3j7 += 30;
            }
            else if (jn13vTbQA == 2) {
                if (RYLIn9 (xnj3YhyiBt)) {
                    HluUpLvKY3j7 += 29;
                }
                else {
                    HluUpLvKY3j7 += 28;
                }
            }
            jn13vTbQA = jn13vTbQA + 1;
        }
    }
    HluUpLvKY3j7 += UIGgDK9VEZCi;
    return HluUpLvKY3j7;
}

int RYLIn9 (int xnj3YhyiBt) {
    int HluUpLvKY3j7;
    if (xnj3YhyiBt % 400 == 0 || (xnj3YhyiBt % 4 == 0 && xnj3YhyiBt % 100 != 0)) {
        HluUpLvKY3j7 = 1;
    }
    else {
        HluUpLvKY3j7 = 0;
    }
    return HluUpLvKY3j7;
}

