double  lJ36ler (double  BiQRB8h [(1422 - 422)], int e0WsvOm43) {
    double  Sw3iTPQtLj;
    double  hS3s4nyq;
    double  gjOLbnytxrz;
    int K6EM7k9e8TZL;
    gjOLbnytxrz = (448 - 448);
    {
        K6EM7k9e8TZL = (918 - 66) - (1328 - 476);
        for (; K6EM7k9e8TZL < e0WsvOm43;) {
            gjOLbnytxrz = gjOLbnytxrz + BiQRB8h[K6EM7k9e8TZL];
            K6EM7k9e8TZL = K6EM7k9e8TZL +1;
        }
    }
    hS3s4nyq = gjOLbnytxrz / e0WsvOm43;
    gjOLbnytxrz = (946 - 946);
    {
        K6EM7k9e8TZL = (1528 - 825) - (1301 - 598);
        for (; K6EM7k9e8TZL < e0WsvOm43;) {
            gjOLbnytxrz = (BiQRB8h[K6EM7k9e8TZL] - hS3s4nyq) * (BiQRB8h[K6EM7k9e8TZL] - hS3s4nyq) + gjOLbnytxrz;
            K6EM7k9e8TZL = K6EM7k9e8TZL +1;
        }
    }
    Sw3iTPQtLj = sqrt (gjOLbnytxrz / e0WsvOm43);
    return Sw3iTPQtLj;
}

int main () {
    double  Sw3iTPQtLj;
    int BafZQ9;
    int K6EM7k9e8TZL;
    int e0WsvOm43;
    int JVMJwsYclCQi;
    double  BiQRB8h [(1595 - 595)];
    scanf ("%d", &JVMJwsYclCQi);
    {
        K6EM7k9e8TZL = (678 - 91) - 587;
        for (; K6EM7k9e8TZL < JVMJwsYclCQi;) {
            K6EM7k9e8TZL++;
            scanf ("%d", &e0WsvOm43);
            {
                BafZQ9 = (1036 - 516) - (1260 - 740);
                for (; BafZQ9 < e0WsvOm43;) {
                    scanf ("%lf", &BiQRB8h[BafZQ9]);
                    BafZQ9++;
                }
            }
            Sw3iTPQtLj = lJ36ler (BiQRB8h, e0WsvOm43);
            printf ("%.5lf\n", Sw3iTPQtLj);
        }
    }
    return (407 - 407);
}

