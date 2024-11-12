struct   patient {
    char aU9zV6e [(742 - 731)];
    int SFbuyiL9, mifXD15ksC;
    struct   patient *TyQe3sBEF;
};
main () {
    struct   patient *nRwSNpf;
    int BK1iPELVDWx;
    int wmMXH1;
    int N8dX1e;
    int Vyn5ZhWUml;
    int d1MVLeoXZmUS;
    int n2;
    char aU9zV6e [10];
    int PAs21aB;
    struct   patient *IzYMAQPW9Cb;
    struct   patient *OgXa03GMNRz;
    struct   patient *vIrP53Qqv;
    struct   patient *X5lpdxEZD2;
    struct   patient *d4YNz36p;
    struct   patient *gZh7jCpd3;
    struct   patient *D5uILxE3dO;
    scanf ("%d", &Vyn5ZhWUml);
    d1MVLeoXZmUS = (101 - 101);
    n2 = (486 - 486);
    nRwSNpf = NULL;
    IzYMAQPW9Cb = NULL;
    for (N8dX1e = (613 - 613); Vyn5ZhWUml > N8dX1e; N8dX1e++) {
        scanf ("%s%d", aU9zV6e, &BK1iPELVDWx);
        if (BK1iPELVDWx >= (247 - 187)) {
            if (!(NULL != nRwSNpf)) {
                nRwSNpf = (struct   patient *) malloc (sizeof (struct   patient));
                strcpy (nRwSNpf->aU9zV6e, aU9zV6e);
                nRwSNpf->SFbuyiL9 = BK1iPELVDWx;
                nRwSNpf->TyQe3sBEF = NULL;
            }
            else {
                for (gZh7jCpd3 = nRwSNpf, D5uILxE3dO = gZh7jCpd3; gZh7jCpd3 != NULL; D5uILxE3dO = gZh7jCpd3, gZh7jCpd3 = gZh7jCpd3->TyQe3sBEF) {
                    if (gZh7jCpd3->SFbuyiL9 < BK1iPELVDWx &&gZh7jCpd3 != nRwSNpf) {
                        OgXa03GMNRz = (struct   patient *) malloc (sizeof (struct   patient));
                        OgXa03GMNRz->SFbuyiL9 = BK1iPELVDWx;
                        strcpy (OgXa03GMNRz->aU9zV6e, aU9zV6e);
                        D5uILxE3dO->TyQe3sBEF = OgXa03GMNRz;
                        OgXa03GMNRz->TyQe3sBEF = gZh7jCpd3;
                        break;
                    }
                    if (BK1iPELVDWx &&!(nRwSNpf != gZh7jCpd3) > gZh7jCpd3->SFbuyiL9) {
                        OgXa03GMNRz = (struct   patient *) malloc (sizeof (struct   patient));
                        OgXa03GMNRz->SFbuyiL9 = BK1iPELVDWx;
                        strcpy (OgXa03GMNRz->aU9zV6e, aU9zV6e);
                        OgXa03GMNRz->TyQe3sBEF = nRwSNpf;
                        nRwSNpf = OgXa03GMNRz;
                        break;
                    }
                }
                if (!(NULL != gZh7jCpd3)) {
                    OgXa03GMNRz = (struct   patient *) malloc (sizeof (struct   patient));
                    OgXa03GMNRz->SFbuyiL9 = BK1iPELVDWx;
                    strcpy (OgXa03GMNRz->aU9zV6e, aU9zV6e);
                    D5uILxE3dO->TyQe3sBEF = OgXa03GMNRz;
                    OgXa03GMNRz->TyQe3sBEF = NULL;
                }
            }
        }
        if ((752 - 692) > BK1iPELVDWx) {
            if (!(NULL != IzYMAQPW9Cb)) {
                IzYMAQPW9Cb = (struct   patient *) malloc (sizeof (struct   patient));
                strcpy (IzYMAQPW9Cb->aU9zV6e, aU9zV6e);
                IzYMAQPW9Cb->SFbuyiL9 = BK1iPELVDWx;
                IzYMAQPW9Cb->TyQe3sBEF = NULL;
                d4YNz36p = IzYMAQPW9Cb;
            }
            else {
                X5lpdxEZD2 = (struct   patient *) malloc (sizeof (struct   patient));
                X5lpdxEZD2->SFbuyiL9 = BK1iPELVDWx;
                strcpy (X5lpdxEZD2->aU9zV6e, aU9zV6e);
                d4YNz36p->TyQe3sBEF = X5lpdxEZD2;
                X5lpdxEZD2->TyQe3sBEF = NULL;
                d4YNz36p = X5lpdxEZD2;
            }
        }
    }
    for (gZh7jCpd3 = nRwSNpf, D5uILxE3dO = gZh7jCpd3; gZh7jCpd3 != NULL; D5uILxE3dO = gZh7jCpd3, gZh7jCpd3 = gZh7jCpd3->TyQe3sBEF)
        ;
    D5uILxE3dO->TyQe3sBEF = IzYMAQPW9Cb;
    for (gZh7jCpd3 = nRwSNpf; gZh7jCpd3->TyQe3sBEF != NULL; gZh7jCpd3 = gZh7jCpd3->TyQe3sBEF) {
        printf ("%s\n", gZh7jCpd3->aU9zV6e);
    }
    printf ("%s", gZh7jCpd3->aU9zV6e);
}

