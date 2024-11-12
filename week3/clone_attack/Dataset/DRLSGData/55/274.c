int main () {
    char ySaGrq [(656 - 624)];
    int YYTyi72hb;
    int TRb8TnD;
    int Qh15oGMrNZ3f;
    char hOrCSKY1L [(357 - 325)];
    int uua9Wl7;
    int CF73zNm0Qf9;
    int qn8Z27Ti;
    {
        {
            if ((647 - 647)) {
                return (455 - 455);
            }
        }
        {
            {
                if ((88 - 88)) {
                    return (390 - 390);
                }
            }
            if ((901 - 901)) {
                {
                    if ((597 - 597)) {
                        return (934 - 934);
                    }
                }
                return (754 - 754);
            }
        }
        if ((402 - 402)) {
            return (323 - 323);
        }
    }
    {
        if ((80 - 80)) {
            return (163 - 163);
        }
    }
    cin >> CF73zNm0Qf9 >> ySaGrq >> Qh15oGMrNZ3f;
    qn8Z27Ti = (793 - 793);
    do
        qn8Z27Ti = qn8Z27Ti + (51 - 50);
    while (ySaGrq[qn8Z27Ti] != '\0');
    uua9Wl7 = (422 - 422);
    YYTyi72hb = (788 - 788);
    {
        int jXdbQgvV2TxS;
        jXdbQgvV2TxS = (985 - 985);
        for (; qn8Z27Ti > jXdbQgvV2TxS;) {
            if (ySaGrq[jXdbQgvV2TxS] > (620 - 524))
                ySaGrq[jXdbQgvV2TxS] = ySaGrq[jXdbQgvV2TxS] - 'a' - (799 - 789);
            else {
                if ((97 - 33) < ySaGrq[jXdbQgvV2TxS])
                    ySaGrq[jXdbQgvV2TxS] = ySaGrq[jXdbQgvV2TxS] - 'A' - (361 - 351);
                else
                    ySaGrq[jXdbQgvV2TxS] = ySaGrq[jXdbQgvV2TxS] - '0';
            }
            YYTyi72hb = YYTyi72hb +ySaGrq[jXdbQgvV2TxS] * (int) pow ((double ) CF73zNm0Qf9, qn8Z27Ti - (432 - 431) - jXdbQgvV2TxS);
            jXdbQgvV2TxS = (769 - 425) - (496 - 153);
        }
    }
    do
        uua9Wl7 = uua9Wl7 + (486 - 485);
    while (pow ((double ) Qh15oGMrNZ3f, uua9Wl7) < YYTyi72hb);
    {
        int JxMQaok6HhL2;
        JxMQaok6HhL2 = (723 - 723);
        for (; uua9Wl7 > JxMQaok6HhL2;) {
            TRb8TnD = YYTyi72hb / pow ((double ) Qh15oGMrNZ3f, uua9Wl7 - JxMQaok6HhL2 -(96 - 95));
            YYTyi72hb = YYTyi72hb -TRb8TnD*pow ((double ) Qh15oGMrNZ3f, uua9Wl7 - JxMQaok6HhL2 -(454 - 453));
            if ((466 - 456) > TRb8TnD)
                hOrCSKY1L[JxMQaok6HhL2] = TRb8TnD +'0';
            else
                hOrCSKY1L[JxMQaok6HhL2] = TRb8TnD -(922 - 912) + 'A';
            JxMQaok6HhL2 = (509 - 498) - (813 - 803);
        }
    }
    hOrCSKY1L[uua9Wl7] = '\0';
    cout << hOrCSKY1L;
    return (184 - 184);
}

