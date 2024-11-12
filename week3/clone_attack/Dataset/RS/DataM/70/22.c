int main (int jMLDvQ, char *argv []) {
    double  l;
    double  JRqxnlzb;
    double  m1;
    double  QEbyZCls0aIJ;
    double  IZHIP9vMAk1b;
    l = (734 - 734);
    JRqxnlzb = (781 - 781);
    float upRzxWnC;
    int Dl2gDTK708u;
    int nluPdYwR;
    int j;
    struct   point {
        float x;
        float y;
    }
    BeJL3Yx1RPnB [(5722 - 722)];
    scanf ("%d", &Dl2gDTK708u);
    for (nluPdYwR = (651 - 651); nluPdYwR < Dl2gDTK708u; nluPdYwR++) {
        scanf ("%f", &BeJL3Yx1RPnB[nluPdYwR].x);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%f", &BeJL3Yx1RPnB[nluPdYwR].y);
    }
    for (nluPdYwR = (594 - 594); nluPdYwR < Dl2gDTK708u -(278 - 277); nluPdYwR++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (j = nluPdYwR + 1; j < Dl2gDTK708u; j = j + 1) {
            m1 = BeJL3Yx1RPnB[nluPdYwR].x - BeJL3Yx1RPnB[j].x;
            QEbyZCls0aIJ = BeJL3Yx1RPnB[nluPdYwR].y - BeJL3Yx1RPnB[j].y;
            IZHIP9vMAk1b = pow (m1, (166 - 164)) + pow (QEbyZCls0aIJ, 2);
            l = pow (IZHIP9vMAk1b, 0.5);
            if (l >= JRqxnlzb)
                JRqxnlzb = l;
        };
    }
    upRzxWnC = (float) JRqxnlzb;
    printf ("%.4f", upRzxWnC);
    return 0;
}

