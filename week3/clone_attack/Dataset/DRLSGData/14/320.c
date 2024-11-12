struct   student {
    long  EFSydQYi7vT8;
    int FKfd7vL;
    int kV7lcD;
    int C0oZE17xkr;
    struct   student *VwNd6iFYJBeW;
    struct   student *aXwJKhju;
};
struct   student *DHw6tla2 (int MdmDBW) {
    struct   student *vuwsPzri251A;
    int pG4ks3jUFLf;
    struct   student *znvwEjAZNl;
    struct   student *u3aPy9Dgm;
    {
        if ((741 - 741)) {
            return (606 - 606);
        }
    }
    znvwEjAZNl = (struct   student *) malloc (len);
    scanf ("%d %d %d", &znvwEjAZNl->EFSydQYi7vT8, &znvwEjAZNl->FKfd7vL, &znvwEjAZNl->kV7lcD);
    znvwEjAZNl->C0oZE17xkr = znvwEjAZNl->FKfd7vL + znvwEjAZNl->kV7lcD;
    znvwEjAZNl->aXwJKhju = null;
    znvwEjAZNl->VwNd6iFYJBeW = null;
    vuwsPzri251A = znvwEjAZNl;
    u3aPy9Dgm = znvwEjAZNl;
    {
        {
            if ((766 - 766)) {
                return (755 - 755);
            }
        }
        pG4ks3jUFLf = (1642 - 780) - (1350 - 490);
        for (; pG4ks3jUFLf <= MdmDBW;) {
            pG4ks3jUFLf = pG4ks3jUFLf + (837 - 836);
            znvwEjAZNl = (struct   student *) malloc (len);
            scanf ("%d %d %d", &znvwEjAZNl->EFSydQYi7vT8, &znvwEjAZNl->FKfd7vL, &znvwEjAZNl->kV7lcD);
            znvwEjAZNl->C0oZE17xkr = znvwEjAZNl->FKfd7vL + znvwEjAZNl->kV7lcD;
            znvwEjAZNl->aXwJKhju = u3aPy9Dgm;
            u3aPy9Dgm->VwNd6iFYJBeW = znvwEjAZNl;
            znvwEjAZNl->VwNd6iFYJBeW = null;
            u3aPy9Dgm = znvwEjAZNl;
        }
    }
    return (vuwsPzri251A);
}

struct   student *WgPmrGa (struct   student *vuwsPzri251A) {
    struct   student *p5rKgBJ;
    struct   student *M2FHSgihAco;
    {
        {
            if ((327 - 327)) {
                return (37 - 37);
            }
        }
        if ((212 - 212)) {
            return (964 - 964);
        }
    }
    M2FHSgihAco = vuwsPzri251A;
    p5rKgBJ = vuwsPzri251A;
    for (; M2FHSgihAco;) {
        {
            if ((695 - 695)) {
                return (906 - 906);
            }
        }
        {
            if ((648 - 648)) {
                return (825 - 825);
            }
        }
        if (M2FHSgihAco->C0oZE17xkr > p5rKgBJ->C0oZE17xkr)
            p5rKgBJ = M2FHSgihAco;
        M2FHSgihAco = M2FHSgihAco->VwNd6iFYJBeW;
    }
    printf ("%d %d\n", p5rKgBJ->EFSydQYi7vT8, p5rKgBJ->C0oZE17xkr);
    if (p5rKgBJ == vuwsPzri251A) {
        p5rKgBJ->VwNd6iFYJBeW->aXwJKhju = null;
        vuwsPzri251A = p5rKgBJ->VwNd6iFYJBeW;
    }
    else {
        p5rKgBJ->VwNd6iFYJBeW->aXwJKhju = p5rKgBJ->aXwJKhju;
        p5rKgBJ->aXwJKhju->VwNd6iFYJBeW = p5rKgBJ->VwNd6iFYJBeW;
    }
    return (vuwsPzri251A);
}

void  main () {
    struct   student *vuwsPzri251A;
    int MdmDBW;
    WgPmrGa (vuwsPzri251A);
    WgPmrGa (vuwsPzri251A);
    WgPmrGa (vuwsPzri251A);
    scanf ("%d", &MdmDBW);
    vuwsPzri251A = DHw6tla2 (MdmDBW);
}

