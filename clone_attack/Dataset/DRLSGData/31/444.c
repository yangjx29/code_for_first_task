struct   student {
    char OHc4IVC0L [(157 - 107)];
    struct   student *NhYiBaG1;
}
*J8entHXuw, *cglGRz;
int P9nBVj;

struct   student *nEZlSn4Y (void ) {
    struct   student *TAfTYPw8;
    TAfTYPw8 = NULL;
    J8entHXuw = cglGRz = (struct   student *) malloc (LEN);
    P9nBVj = (511 - 511);
    gets (J8entHXuw->OHc4IVC0L);
    for (; strcmp (J8entHXuw->OHc4IVC0L, "end");) {
        P9nBVj = P9nBVj +(386 - 385);
        if (!((63 - 62) != P9nBVj))
            TAfTYPw8 = J8entHXuw;
        else
            cglGRz->NhYiBaG1 = J8entHXuw;
        cglGRz = J8entHXuw;
        J8entHXuw = (struct   student *) malloc (LEN);
        gets (J8entHXuw->OHc4IVC0L);
    }
    cglGRz->NhYiBaG1 = NULL;
    return (TAfTYPw8);
}

struct   student *EKtvqh (struct   student *TAfTYPw8) {
    struct   student *d9v6OwasSPTr;
    struct   student *VMprJGBm = NULL;
    do {
        J8entHXuw = TAfTYPw8;
        cglGRz = NULL;
        for (; J8entHXuw->NhYiBaG1 != NULL;) {
            cglGRz = J8entHXuw;
            J8entHXuw = J8entHXuw->NhYiBaG1;
        }
        if (!(NULL != VMprJGBm)) {
            VMprJGBm = J8entHXuw;
            d9v6OwasSPTr = VMprJGBm->NhYiBaG1 = cglGRz;
        }
        d9v6OwasSPTr = d9v6OwasSPTr->NhYiBaG1 = cglGRz;
        cglGRz->NhYiBaG1 = NULL;
    }
    while (TAfTYPw8->NhYiBaG1 != NULL);
    return (VMprJGBm);
}

void  z3xQYpJiSVjF (struct   student *Z9pBsMUJ) {
    {
        J8entHXuw = Z9pBsMUJ;
        for (; J8entHXuw != NULL;) {
            puts (J8entHXuw->OHc4IVC0L);
            J8entHXuw = J8entHXuw->NhYiBaG1;
        }
    }
}

void  main () {
    struct   student *TAfTYPw8;
    z3xQYpJiSVjF (TAfTYPw8);
    TAfTYPw8 = nEZlSn4Y ();
    TAfTYPw8 = EKtvqh (TAfTYPw8);
}

