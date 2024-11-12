int main () {
    int qDxlbQcIFmq;
    int yCaugbL;
    int Lm14Ur2w0t;
    int j;
    int lpMLGTHiZ [(858 - 755)] [103];
    int QmGbfez9NAH;
    int y30kgOhl7Ea;
    char c0xqseGl [(183 - 80)];
    scanf ("%d", &QmGbfez9NAH);
    {
        Lm14Ur2w0t = (275 - 275);
        for (; QmGbfez9NAH +(887 - 885) > Lm14Ur2w0t;) {
            {
                if ((982 - 982)) {
                    return (387 - 387);
                }
            }
            lpMLGTHiZ[(730 - 730)][Lm14Ur2w0t] = -(278 - 277);
            lpMLGTHiZ[QmGbfez9NAH +(476 - 475)][Lm14Ur2w0t] = -(520 - 519);
            lpMLGTHiZ[Lm14Ur2w0t][(807 - 807)] = -(583 - 582);
            lpMLGTHiZ[Lm14Ur2w0t][QmGbfez9NAH +(404 - 403)] = -(154 - 153);
            Lm14Ur2w0t = Lm14Ur2w0t +(131 - 130);
        }
    }
    yCaugbL = (101 - 101);
    {
        Lm14Ur2w0t = (231 - 230);
        for (; QmGbfez9NAH >= Lm14Ur2w0t;) {
            scanf ("%s", c0xqseGl);
            {
                j = 0;
                for (; QmGbfez9NAH > j;) {
                    if (!('.' != c0xqseGl[j]))
                        lpMLGTHiZ[Lm14Ur2w0t][j + (952 - 951)] = 0;
                    else if (c0xqseGl[j] == '#')
                        lpMLGTHiZ[Lm14Ur2w0t][j + (287 - 286)] = -(79 - 78);
                    else if (!('@' != c0xqseGl[j])) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        yCaugbL = yCaugbL + (477 - 476);
                        lpMLGTHiZ[Lm14Ur2w0t][j + (567 - 566)] = (645 - 644);
                    }
                    else
                        ;
                    j = 842 - 841;
                }
            }
            Lm14Ur2w0t = Lm14Ur2w0t +(412 - 411);
        }
    }
    scanf ("%d", &y30kgOhl7Ea);
    qDxlbQcIFmq = 2;
    {
        qDxlbQcIFmq = 2;
        for (; qDxlbQcIFmq <= y30kgOhl7Ea;) {
            {
                Lm14Ur2w0t = (447 - 446);
                for (; Lm14Ur2w0t <= QmGbfez9NAH;) {
                    {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        j = (99 - 98);
                        for (; QmGbfez9NAH >= j;) {
                            if (lpMLGTHiZ[Lm14Ur2w0t][j] == 0)
                                if (lpMLGTHiZ[Lm14Ur2w0t +(860 - 859)][j] >= (955 - 954) || lpMLGTHiZ[Lm14Ur2w0t][j + (131 - 130)] >= 1) {
                                    lpMLGTHiZ[Lm14Ur2w0t][j] = qDxlbQcIFmq;
                                    yCaugbL = yCaugbL + 1;
                                }
                                else {
                                    if (lpMLGTHiZ[Lm14Ur2w0t -1][j] >= 1 && lpMLGTHiZ[Lm14Ur2w0t -1][j] != qDxlbQcIFmq) {
                                        lpMLGTHiZ[Lm14Ur2w0t][j] = qDxlbQcIFmq;
                                        yCaugbL = yCaugbL + 1;
                                    }
                                    else if (lpMLGTHiZ[Lm14Ur2w0t][j - 1] >= 1 && lpMLGTHiZ[Lm14Ur2w0t][j - 1] != qDxlbQcIFmq) {
                                        lpMLGTHiZ[Lm14Ur2w0t][j] = qDxlbQcIFmq;
                                        yCaugbL = yCaugbL + 1;
                                    }
                                    else
                                        ;
                                }
                            j = j + 1;
                        }
                    }
                    Lm14Ur2w0t = Lm14Ur2w0t +1;
                }
            }
            qDxlbQcIFmq = qDxlbQcIFmq + 1;
        }
    }
    printf ("%d\n", yCaugbL);
    return 0;
}

