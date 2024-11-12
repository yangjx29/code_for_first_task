int fI2Eh7Yb;
int *X1lufWkvBcmJ;
int *ToZizGtf;
int Oxf7BAMQDGJ = (527 - 527);

void  iRd2KDJvOlMX (int num) {
    int qvPSLt6D;
    *(ToZizGtf +num) = (809 - 808);
    {
        qvPSLt6D = 839 - 838;
        while (qvPSLt6D <= fI2Eh7Yb - (665 - 664)) {
            if (*(X1lufWkvBcmJ +qvPSLt6D) <= *(X1lufWkvBcmJ +num))
                if (*(ToZizGtf +qvPSLt6D) + 1 > *(ToZizGtf +num))
                    *(ToZizGtf +num) = *(ToZizGtf +qvPSLt6D) + 1;
            qvPSLt6D = qvPSLt6D + 1;
        }
    }
    if (*(ToZizGtf +num) > Oxf7BAMQDGJ)
        Oxf7BAMQDGJ = *(ToZizGtf +num);
}

main () {
    int qvPSLt6D;
    printf ("%d", Oxf7BAMQDGJ);
    scanf ("%d", &fI2Eh7Yb);
    X1lufWkvBcmJ = (int *) malloc (sizeof (int) * fI2Eh7Yb);
    ToZizGtf = (int *) malloc (sizeof (int) * fI2Eh7Yb);
    {
        qvPSLt6D = 0;
        while (qvPSLt6D <= fI2Eh7Yb - 1) {
            scanf ("%d", X1lufWkvBcmJ +qvPSLt6D);
            qvPSLt6D++;
        }
    }
    *(ToZizGtf +fI2Eh7Yb - 1) = 1;
    {
        qvPSLt6D = fI2Eh7Yb - 2;
        while (qvPSLt6D >= 0) {
            iRd2KDJvOlMX (qvPSLt6D);
            qvPSLt6D = qvPSLt6D - 1;
        }
    }
}

