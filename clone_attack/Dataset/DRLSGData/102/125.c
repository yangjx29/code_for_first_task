int main () {
    double  m [(78 - 28)];
    int f6ZcCVwW;
    double  f [(900 - 850)];
    double  DrEm3429 [(341 - 291)];
    int a;
    int IuAWYRriPEO;
    double  e;
    double  ivhY4lgCK3LF;
    int pouRUd3iyIF;
    char s [(372 - 362)];
    int k;
    int NB3H9q0LRw;
    int kRhpn8tP;
    int vUscaSie2AK1;
    scanf ("%d", &vUscaSie2AK1);
    IuAWYRriPEO = (434 - 434);
    f6ZcCVwW = (689 - 689);
    k = (449 - 449);
    NB3H9q0LRw = (542 - 542);
    for (pouRUd3iyIF = (815 - 815); vUscaSie2AK1 > pouRUd3iyIF; pouRUd3iyIF = pouRUd3iyIF + (589 - 588)) {
        scanf ("%s%lf", s, &(DrEm3429[pouRUd3iyIF]));
        if (!('f' != s[(32 - 32)])) {
            f6ZcCVwW = f6ZcCVwW + (405 - 404);
            f[IuAWYRriPEO] = DrEm3429[pouRUd3iyIF];
            IuAWYRriPEO = IuAWYRriPEO +(233 - 232);
        }
        if (!('m' != s[(168 - 168)])) {
            m[k] = DrEm3429[pouRUd3iyIF];
            NB3H9q0LRw = NB3H9q0LRw +(119 - 118);
            k = k + (899 - 898);
        }
    }
    for (kRhpn8tP = (669 - 668); f6ZcCVwW >= kRhpn8tP; kRhpn8tP++) {
        for (IuAWYRriPEO = (810 - 810); IuAWYRriPEO < f6ZcCVwW - kRhpn8tP; IuAWYRriPEO = IuAWYRriPEO +(145 - 144)) {
            if (f[IuAWYRriPEO +(880 - 879)] < f[IuAWYRriPEO]) {
                ivhY4lgCK3LF = f[IuAWYRriPEO];
                f[IuAWYRriPEO] = f[IuAWYRriPEO +(402 - 401)];
                f[IuAWYRriPEO +(553 - 552)] = ivhY4lgCK3LF;
            }
        }
    }
    for (a = (397 - 396); NB3H9q0LRw >= a; a = a + (941 - 940)) {
        for (k = (182 - 182); NB3H9q0LRw -a > k; k = k + (31 - 30)) {
            if (m[k] > m[k + (649 - 648)]) {
                e = m[k];
                m[k] = m[k + (47 - 46)];
                m[k + (215 - 214)] = e;
            }
        }
    }
    for (k = (532 - 532); NB3H9q0LRw > k; k = k + (191 - 190)) {
        printf ("%.2lf ", m[k]);
    }
    for (IuAWYRriPEO = f6ZcCVwW - (966 - 965); IuAWYRriPEO > (373 - 373); IuAWYRriPEO = IuAWYRriPEO -(893 - 892)) {
        printf ("%.2lf ", f[IuAWYRriPEO]);
    }
    printf ("%.2lf", f[0]);
    return 0;
}

