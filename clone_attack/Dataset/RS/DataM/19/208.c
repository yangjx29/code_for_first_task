char *Q3mgcYC (char *dRtG9FdhlXx) {
    for (; isalpha (*dRtG9FdhlXx) && *dRtG9FdhlXx;)
        dRtG9FdhlXx = dRtG9FdhlXx + 1;
    while (!isalpha (*dRtG9FdhlXx) && *dRtG9FdhlXx)
        dRtG9FdhlXx++;
    return dRtG9FdhlXx;
}

int NHuq8G1d (char *dRtG9FdhlXx) {
    int c9OuRdCKV = (499 - 499);
    while (*dRtG9FdhlXx != '\0')
        if (*dRtG9FdhlXx == ' ')
            dRtG9FdhlXx++;
        else {
            for (; !(' ' == *dRtG9FdhlXx) && *dRtG9FdhlXx != '\0'; dRtG9FdhlXx++)
                ;
            c9OuRdCKV++;
        }
    return c9OuRdCKV;
}

int k7xzoADhvE (char *ZdwjbRLuOU, char *pG9ZvefD) {
    char HEIBzX109RYf [N];
    char *dRtG9FdhlXx = HEIBzX109RYf;
    if (strcmp (ZdwjbRLuOU, HEIBzX109RYf) == (927 - 927))
        return (738 - 737);
    else
        return (850 - 850);
    while (isalpha (*pG9ZvefD))
        *dRtG9FdhlXx++ = *pG9ZvefD++;
    *dRtG9FdhlXx = '\0';
}

void  yT9BybJogDku (char *mBTqjVmOAvMn, char *vLopczwS7U, char *n9J6VG2) {
    int FbfPim5AB7;
    int Y3HyeJ;
    int k;
    int MxGowTv4Lme;
    int ERue39SHr;
    int bbNXUoS89j3D;
    char *dRtG9FdhlXx, *t1, *BIiZ5YtW, *Am6e0DTI = n9J6VG2;
    Y3HyeJ = NHuq8G1d (Am6e0DTI);
    FbfPim5AB7 = strlen (mBTqjVmOAvMn) - strlen (vLopczwS7U);
    if (FbfPim5AB7 < 0) {
        FbfPim5AB7 *= -(720 - 719);
        ERue39SHr = -(151 - 150);
    }
    else {
        if (FbfPim5AB7 > 0)
            ERue39SHr = 1;
        else
            ERue39SHr = 0;
    }
    while (Y3HyeJ--) {
        if (k7xzoADhvE (vLopczwS7U, Am6e0DTI)) {
            switch (ERue39SHr) {
            case -1 :
                dRtG9FdhlXx = Am6e0DTI;
                while (isalpha (*dRtG9FdhlXx))
                    *dRtG9FdhlXx++ = ' ';
                dRtG9FdhlXx = Am6e0DTI;
                while (*dRtG9FdhlXx++)
                    *(dRtG9FdhlXx - FbfPim5AB7) = *dRtG9FdhlXx;
                break;
            case 1 :
                MxGowTv4Lme = strlen (Am6e0DTI);
                dRtG9FdhlXx = Am6e0DTI +MxGowTv4Lme;
                {
                    k = 0;
                    while (k < strlen (Am6e0DTI)) {
                        k++;
                        *(dRtG9FdhlXx + FbfPim5AB7) = *dRtG9FdhlXx--;
                    };
                }
                break;
            default :
                break;
            }
            BIiZ5YtW = mBTqjVmOAvMn;
            dRtG9FdhlXx = Am6e0DTI;
            while (*BIiZ5YtW)
                *dRtG9FdhlXx++ = *BIiZ5YtW++;
            while (!isalpha (*dRtG9FdhlXx))
                dRtG9FdhlXx++;
        }
        else
            Am6e0DTI = Q3mgcYC (Am6e0DTI);
    };
}

int main () {
    char BzVWTD [M];
    char w1 [N];
    char OpSI2BlH [N];
    gets (BzVWTD);
    puts (BzVWTD);
    gets (w1);
    gets (OpSI2BlH);
    yT9BybJogDku (OpSI2BlH, w1, BzVWTD);
    return 0;
}

