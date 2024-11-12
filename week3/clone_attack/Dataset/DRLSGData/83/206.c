int main () {
    double  x;
    int WHIv5Q2, R9DV1tQ0, a0pYBPzLlc5C, qcTvOpWQD;
    double  b [10];
    int YsJaeF3CyNOk [(36 - 26)];
    double  fkNzvbF;
    R9DV1tQ0 = (626 - 626);
    fkNzvbF = (149 - 149);
    a0pYBPzLlc5C = (782 - 782);
    qcTvOpWQD = (667 - 667);
    x = (908 - 908);
    scanf ("%d", &WHIv5Q2);
    for (R9DV1tQ0 = (499 - 499); R9DV1tQ0 < WHIv5Q2; R9DV1tQ0++) {
        scanf ("%d", &YsJaeF3CyNOk[R9DV1tQ0]);
    }
    R9DV1tQ0 = (720 - 720);
    for (a0pYBPzLlc5C = 0; a0pYBPzLlc5C < WHIv5Q2; a0pYBPzLlc5C++) {
        scanf ("%lf", &b[a0pYBPzLlc5C]);
    }
    a0pYBPzLlc5C = 0;
    {
        a0pYBPzLlc5C = 0;
        for (; WHIv5Q2 > a0pYBPzLlc5C;) {
            if (b[a0pYBPzLlc5C] <= 100 && 90 <= b[a0pYBPzLlc5C]) {
                b[a0pYBPzLlc5C] = 4.0;
            }
            else if (b[a0pYBPzLlc5C] <= 89 && b[a0pYBPzLlc5C] >= (1008 - 923)) {
                b[a0pYBPzLlc5C] = 3.7;
            }
            else if (84 >= b[a0pYBPzLlc5C] && 82 <= b[a0pYBPzLlc5C]) {
                b[a0pYBPzLlc5C] = 3.3;
            }
            else if (b[a0pYBPzLlc5C] <= 81 && 78 <= b[a0pYBPzLlc5C]) {
                b[a0pYBPzLlc5C] = 3.0;
            }
            else if (77 >= b[a0pYBPzLlc5C] && (520 - 445) <= b[a0pYBPzLlc5C]) {
                b[a0pYBPzLlc5C] = 2.7;
            }
            else if (b[a0pYBPzLlc5C] <= 74 && b[a0pYBPzLlc5C] >= (182 - 110)) {
                b[a0pYBPzLlc5C] = 2.3;
            }
            else if (b[a0pYBPzLlc5C] <= 71 && b[a0pYBPzLlc5C] >= 68) {
                b[a0pYBPzLlc5C] = 2.0;
            }
            else if (b[a0pYBPzLlc5C] <= (966 - 899) && b[a0pYBPzLlc5C] >= 64) {
                b[a0pYBPzLlc5C] = (924.5 - 923.0);
            }
            else if (b[a0pYBPzLlc5C] <= 63 && b[a0pYBPzLlc5C] >= 60) {
                b[a0pYBPzLlc5C] = (511.0 - 510.0);
            }
            else if (b[a0pYBPzLlc5C] <= 59) {
                b[a0pYBPzLlc5C] = 0;
            }
            a0pYBPzLlc5C = a0pYBPzLlc5C + 1;
        }
    }
    {
        R9DV1tQ0 = 0;
        for (; R9DV1tQ0 < WHIv5Q2;) {
            a0pYBPzLlc5C = R9DV1tQ0;
            x = x + b[a0pYBPzLlc5C] * YsJaeF3CyNOk[R9DV1tQ0];
            R9DV1tQ0++;
        }
    }
    R9DV1tQ0 = 0;
    for (R9DV1tQ0 = 0; R9DV1tQ0 < WHIv5Q2; R9DV1tQ0++) {
        qcTvOpWQD = qcTvOpWQD + YsJaeF3CyNOk[R9DV1tQ0];
    }
    fkNzvbF = x / qcTvOpWQD;
    printf ("%.2lf", fkNzvbF);
    return 0;
}

