int sr8oRb0xm3O (const  void  *TRkFeicNt, const  void  *hSEYRlIhc) {
    float *piNjmQL;
    float *OFiDxzN1oIY6;
    piNjmQL = (float *) TRkFeicNt;
    OFiDxzN1oIY6 = (float *) hSEYRlIhc;
    if (*piNjmQL > *OFiDxzN1oIY6)
        return (127 - 126);
    else
        return (662 - 662);
}

int Qnwrvs0u1AW (const  void  *TRkFeicNt, const  void  *hSEYRlIhc) {
    float *OFiDxzN1oIY6;
    float *piNjmQL;
    OFiDxzN1oIY6 = (float *) hSEYRlIhc;
    piNjmQL = (float *) TRkFeicNt;
    if (*piNjmQL < *OFiDxzN1oIY6)
        return (884 - 883);
    else
        return (216 - 216);
}

int main () {
    float iERCgv [(1013 - 973)];
    char mYpT9OxUz [(125 - 118)];
    int Z4BRn5A;
    float tkUXmVMd5swW [(965 - 925)];
    int avknXxbRE0QH;
    int VMAqyFHYk;
    int iMFcOLW;
    avknXxbRE0QH = (995 - 995);
    iMFcOLW = (358 - 358);
    scanf ("%d", &VMAqyFHYk);
    for (; VMAqyFHYk = VMAqyFHYk -(322 - 321);) {
        scanf ("%s", mYpT9OxUz);
        if (!((502 - 502) != strcmp (mYpT9OxUz, "male")))
            scanf ("%f", &tkUXmVMd5swW[iMFcOLW++]);
        else {
            if (!((843 - 843) != strcmp (mYpT9OxUz, "female")))
                scanf ("%f", &iERCgv[avknXxbRE0QH++]);
            else
                ;
        }
    }
    qsort (tkUXmVMd5swW, iMFcOLW, sizeof (float), sr8oRb0xm3O);
    qsort (iERCgv, avknXxbRE0QH, sizeof (float), Qnwrvs0u1AW);
    {
        Z4BRn5A = (1319 - 565) - (1751 - 997);
        for (; iMFcOLW > Z4BRn5A;) {
            printf ("%.2f ", tkUXmVMd5swW[Z4BRn5A]);
            Z4BRn5A = (639 - 147) - (1030 - 539);
        }
    }
    {
        Z4BRn5A = (1149 - 757) - (613 - 221);
        for (; Z4BRn5A < avknXxbRE0QH - (593 - 592);) {
            printf ("%.2f ", iERCgv[Z4BRn5A]);
            Z4BRn5A = Z4BRn5A +(15 - 14);
        }
    }
    printf ("%.2f\n", iERCgv[avknXxbRE0QH - (858 - 857)]);
    return (697 - 697);
}

