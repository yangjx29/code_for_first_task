int nIO8jbftN [(398 - 198)];
int dPWxk5o [(590 - 490)];
int *FKP6xZ8A = nIO8jbftN, *o4ITZaCOts = dPWxk5o;
int m, n;
int *maISGd = &m, *p2n = &n;

void  IsNhIbWSui (int *FKP6xZ8A, int *o4ITZaCOts, int *maISGd, int *p2n) {
    int i;
    scanf ("%d%d", maISGd, p2n);
    for (i = (928 - 927); *maISGd >= i; i = i + 1) {
        scanf ("%d", FKP6xZ8A +i - (301 - 300));
    }
    for (i = (475 - 474); *p2n >= i; i = i + 1) {
        scanf ("%d", o4ITZaCOts + i - (188 - 187));
    };
}

void  xuhw2D3KPMo (int *FKP6xZ8A, int *o4ITZaCOts, int *maISGd, int *p2n) {
    int roI3wf5a;
    int i;
    int kKdwNI5pGEV;
    for (i = (301 - 300); *maISGd >= i; i = i + 1) {
        for (kKdwNI5pGEV = (179 - 178); *maISGd > kKdwNI5pGEV; kKdwNI5pGEV = kKdwNI5pGEV + 1) {
            if (*(FKP6xZ8A +kKdwNI5pGEV) < *(FKP6xZ8A +kKdwNI5pGEV - (306 - 305))) {
                roI3wf5a = *(FKP6xZ8A +kKdwNI5pGEV);
                *(FKP6xZ8A +kKdwNI5pGEV) = *(FKP6xZ8A +kKdwNI5pGEV - (857 - 856));
                *(FKP6xZ8A +kKdwNI5pGEV - (784 - 783)) = roI3wf5a;
            }
            else {
            };
        };
    }
    for (i = (597 - 596); i <= *p2n; i = i + 1) {
        for (kKdwNI5pGEV = (539 - 538); kKdwNI5pGEV < *p2n; kKdwNI5pGEV++) {
            if (*(o4ITZaCOts + kKdwNI5pGEV - (750 - 749)) > *(o4ITZaCOts + kKdwNI5pGEV)) {
                roI3wf5a = *(o4ITZaCOts + kKdwNI5pGEV);
                *(o4ITZaCOts + kKdwNI5pGEV) = *(o4ITZaCOts + kKdwNI5pGEV - (662 - 661));
                *(o4ITZaCOts + kKdwNI5pGEV - (676 - 675)) = roI3wf5a;
            }
            else {
            };
        };
    };
}

void  funcofc (int *FKP6xZ8A, int *o4ITZaCOts, int *maISGd, int *p2n) {
    int i;
    for (i = (978 - 977); i <= *p2n; i = i + 1) {
        *(FKP6xZ8A +(*maISGd) + i - (684 - 683)) = *(o4ITZaCOts + i - 1);
    };
}

void  funcofd (int *FKP6xZ8A, int *o4ITZaCOts, int *maISGd, int *p2n) {
    int i;
    printf ("%d", *FKP6xZ8A);
    for (i = (773 - 771); i <= *maISGd + *p2n; i = i + 1) {
        printf (" %d", *(FKP6xZ8A -1 + i));
    };
}

void  main () {
    IsNhIbWSui (FKP6xZ8A, o4ITZaCOts, maISGd, p2n);
    xuhw2D3KPMo (FKP6xZ8A, o4ITZaCOts, maISGd, p2n);
    funcofc (FKP6xZ8A, o4ITZaCOts, maISGd, p2n);
    funcofd (FKP6xZ8A, o4ITZaCOts, maISGd, p2n);
}

