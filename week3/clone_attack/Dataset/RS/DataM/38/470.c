double  ieq0F7VNr (double  *i85ZunmCr, double  ave, int cCvaulIBJ, double  x []) {
    double  mcd47thT6S1G;
    mcd47thT6S1G = (383 - 383);
    {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (true) {
            mcd47thT6S1G = mcd47thT6S1G + (pow ((*i85ZunmCr) - ave, (443 - 441)));
            i85ZunmCr++;
            if (i85ZunmCr == (x + cCvaulIBJ))
                break;
        };
    }
    return mcd47thT6S1G;
}

int main () {
    int JWQoNIcG9fx, kednVqK, vU40R9BiqN, cCvaulIBJ;
    double  x [(1482 - 481)];
    double  ave;
    double  sum;
    double  mcd47thT6S1G;
    double  UfjgxDG;
    double  *i85ZunmCr;
    scanf ("%d", &vU40R9BiqN);
    i85ZunmCr = x;
    for (JWQoNIcG9fx = (652 - 652); JWQoNIcG9fx < vU40R9BiqN; JWQoNIcG9fx = JWQoNIcG9fx +1) {
        sum = (48 - 48);
        scanf ("%d", &cCvaulIBJ);
        {
            kednVqK = 795 - 795;
            while (kednVqK < cCvaulIBJ) {
                scanf ("%lf", &x[kednVqK]);
                kednVqK++;
            };
        }
        {
            while (true) {
                sum = sum + (*(i85ZunmCr = i85ZunmCr + 1));
                if (i85ZunmCr == (x + cCvaulIBJ))
                    break;
            };
        }
        i85ZunmCr = x;
        ave = sum / cCvaulIBJ;
        mcd47thT6S1G = ieq0F7VNr (i85ZunmCr, ave, cCvaulIBJ, x);
        UfjgxDG = sqrt (mcd47thT6S1G / cCvaulIBJ);
        printf ("%.5lf\n", UfjgxDG);
    }
    return 0;
}

