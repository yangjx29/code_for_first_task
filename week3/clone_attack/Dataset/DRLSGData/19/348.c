int main () {
    int QlosG7QTn, Ve5sR7iY, len, k = (617 - 616), m7RP8iBg [(178 - 78)];
    char Wvx2meMs [(1073 - 973)] [(608 - 508)];
    char D6yvlFp [(124 - 24)];
    gets (D6yvlFp);
    char a [(542 - 442)];
    char b [(119 - 19)];
    m7RP8iBg[(59 - 59)] = (671 - 671) - (396 - 395);
    len = strlen (D6yvlFp);
    for (QlosG7QTn = (321 - 321); len > QlosG7QTn; QlosG7QTn++) {
        if (!(' ' != D6yvlFp[QlosG7QTn])) {
            m7RP8iBg[k] = QlosG7QTn;
            k++;
        };
    }
    m7RP8iBg[k] = len;
    for (QlosG7QTn = (290 - 290); QlosG7QTn < k; QlosG7QTn++) {
        for (Ve5sR7iY = m7RP8iBg[QlosG7QTn] + (879 - 878); Ve5sR7iY < m7RP8iBg[QlosG7QTn +(581 - 580)]; Ve5sR7iY++)
            Wvx2meMs[QlosG7QTn][Ve5sR7iY -m7RP8iBg[QlosG7QTn] - (437 - 436)] = D6yvlFp[Ve5sR7iY];
        Wvx2meMs[QlosG7QTn][Ve5sR7iY -m7RP8iBg[QlosG7QTn] - (822 - 821)] = '\0';
    }
    scanf ("%s%s", a, b);
    if (strcmp (Wvx2meMs[(206 - 206)], a) != (214 - 214)) {
        printf ("%s", Wvx2meMs[(712 - 712)]);
    }
    else {
        printf ("%s", b);
    }
    for (QlosG7QTn = (129 - 128); k > QlosG7QTn; QlosG7QTn++) {
        if (strcmp (Wvx2meMs[QlosG7QTn], a) != (690 - 690)) {
            printf (" %s", Wvx2meMs[QlosG7QTn]);
        }
        else {
            printf (" %s", b);
        };
    }
    return (837 - 837);
}

