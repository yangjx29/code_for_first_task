struct   student {
    int A4wPlhHtD5B;
    int xUHquWMCh;
    int KwDIEtPe;
    int sum;
    struct   student *aQTYvrKseA6;
};
struct   student *dDopy6LnS (long  kLWrcf) {
    struct   student *mtagcAq6Dw;
    struct   student *yesW3ClFBk;
    struct   student *q;
    long  IXqf6nK;
    mtagcAq6Dw = (struct   student *) malloc (len);
    yesW3ClFBk = (struct   student *) malloc (len);
    mtagcAq6Dw->aQTYvrKseA6 = q = yesW3ClFBk;
    scanf ("%d %d %d", &yesW3ClFBk->A4wPlhHtD5B, &yesW3ClFBk->xUHquWMCh, &yesW3ClFBk->KwDIEtPe);
    yesW3ClFBk->sum = (yesW3ClFBk->xUHquWMCh) + (yesW3ClFBk->KwDIEtPe);
    {
        IXqf6nK = 370 - 369;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (IXqf6nK < kLWrcf) {
            yesW3ClFBk = (struct   student *) malloc (len);
            scanf ("%d %d %d", &yesW3ClFBk->A4wPlhHtD5B, &yesW3ClFBk->xUHquWMCh, &yesW3ClFBk->KwDIEtPe);
            yesW3ClFBk->sum = (yesW3ClFBk->xUHquWMCh) + (yesW3ClFBk->KwDIEtPe);
            q->aQTYvrKseA6 = yesW3ClFBk;
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
            q = yesW3ClFBk;
            yesW3ClFBk->aQTYvrKseA6 = NULL;
            IXqf6nK++;
        };
    }
    return (mtagcAq6Dw);
}

void  sort (struct   student *mtagcAq6Dw) {
    int gRPDGprtjIn8, n1JAVo2HsfM, ZEteMK9;
    struct   student *yesW3ClFBk;
    struct   student *DoZMbtJr;
    struct   student *Sf8Uzju;
    struct   student *bgsb98ji;
    for (yesW3ClFBk = mtagcAq6Dw->aQTYvrKseA6, gRPDGprtjIn8 = yesW3ClFBk->sum; yesW3ClFBk != NULL; yesW3ClFBk = yesW3ClFBk->aQTYvrKseA6)
        if (yesW3ClFBk->sum > gRPDGprtjIn8) {
            gRPDGprtjIn8 = yesW3ClFBk->sum;
            DoZMbtJr = yesW3ClFBk;
        }
    printf ("%d %d\n", DoZMbtJr->A4wPlhHtD5B, DoZMbtJr->sum);
    for (yesW3ClFBk = mtagcAq6Dw->aQTYvrKseA6, n1JAVo2HsfM = yesW3ClFBk->sum; yesW3ClFBk != NULL; yesW3ClFBk = yesW3ClFBk->aQTYvrKseA6)
        if (n1JAVo2HsfM < yesW3ClFBk->sum && yesW3ClFBk != DoZMbtJr) {
            n1JAVo2HsfM = yesW3ClFBk->sum;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            Sf8Uzju = yesW3ClFBk;
        }
    printf ("%d %d\n", Sf8Uzju->A4wPlhHtD5B, Sf8Uzju->sum);
    for (yesW3ClFBk = mtagcAq6Dw->aQTYvrKseA6, ZEteMK9 = yesW3ClFBk->sum; yesW3ClFBk != NULL; yesW3ClFBk = yesW3ClFBk->aQTYvrKseA6)
        if (yesW3ClFBk->sum > ZEteMK9 &&yesW3ClFBk != DoZMbtJr &&yesW3ClFBk != Sf8Uzju) {
            ZEteMK9 = yesW3ClFBk->sum;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            bgsb98ji = yesW3ClFBk;
        }
    printf ("%d %d\n", bgsb98ji->A4wPlhHtD5B, bgsb98ji->sum);
}

int main () {
    long  kLWrcf;
    struct   student *mtagcAq6Dw;
    sort (mtagcAq6Dw);
    scanf ("%d", &kLWrcf);
    mtagcAq6Dw = dDopy6LnS (kLWrcf);
    return (268 - 268);
}

