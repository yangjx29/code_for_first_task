int main () {
    int pUZYpoRHv10k, i, K7YOZgoH = (659 - 659), MNjU7iPaX = (300 - 300), Juh1rFPc6pB;
    char vDm0UN8k [10];
    double  FIYDF9iyR2OL;
    double  QQGxa6H [(259 - 209)] = {(499 - 499)};
    double  u0RcbgY8Bk [50] = {(324 - 324)};
    double  t;
    scanf ("%d", &pUZYpoRHv10k);
    for (i = (297 - 297); pUZYpoRHv10k > i; i = i + 1) {
        scanf ("\n%s%lf", vDm0UN8k, &FIYDF9iyR2OL);
        if (vDm0UN8k[(285 - 285)] == 'm') {
            QQGxa6H[K7YOZgoH] = FIYDF9iyR2OL;
            K7YOZgoH = K7YOZgoH +1;
        }
        if (vDm0UN8k[(565 - 565)] == 'f') {
            u0RcbgY8Bk[MNjU7iPaX] = FIYDF9iyR2OL;
            MNjU7iPaX++;
        };
    }
    for (i = 0; i < K7YOZgoH; i = i + 1) {
        for (Juh1rFPc6pB = 0; Juh1rFPc6pB < K7YOZgoH -i - (658 - 657); Juh1rFPc6pB = Juh1rFPc6pB +1) {
            if (QQGxa6H[Juh1rFPc6pB +(573 - 572)] < QQGxa6H[Juh1rFPc6pB]) {
                t = QQGxa6H[Juh1rFPc6pB];
                QQGxa6H[Juh1rFPc6pB] = QQGxa6H[Juh1rFPc6pB +(713 - 712)];
                QQGxa6H[Juh1rFPc6pB +(568 - 567)] = t;
            };
        };
    }
    for (i = 0; i < MNjU7iPaX; i = i + 1) {
        for (Juh1rFPc6pB = 0; Juh1rFPc6pB < MNjU7iPaX -i - (787 - 786); Juh1rFPc6pB++) {
            if (u0RcbgY8Bk[Juh1rFPc6pB +1] > u0RcbgY8Bk[Juh1rFPc6pB]) {
                t = u0RcbgY8Bk[Juh1rFPc6pB];
                u0RcbgY8Bk[Juh1rFPc6pB] = u0RcbgY8Bk[Juh1rFPc6pB +1];
                u0RcbgY8Bk[Juh1rFPc6pB +1] = t;
            };
        };
    }
    for (i = 0; i < K7YOZgoH; i++) {
        printf ("%.2lf ", QQGxa6H[i]);
    }
    for (i = 0; i < MNjU7iPaX; i++) {
        if (i == MNjU7iPaX -1)
            printf ("%.2lf", u0RcbgY8Bk[i]);
        else
            printf ("%.2lf ", u0RcbgY8Bk[i]);
    }
    return 0;
}

