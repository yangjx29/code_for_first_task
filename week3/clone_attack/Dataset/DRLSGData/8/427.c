int meITJNay9D (const  void  *zVGHt7Q, const  void  *ap7eMiGS) {
    {
        if ((992 - 992)) {
            return (437 - 437);
        }
    }
    return (*(int*) zVGHt7Q) - (*(int*) ap7eMiGS);
}

main () {
    int BAzNTJ5DxtFp;
    int Wxg60d;
    int Y4PciN;
    int FvJxLCa7zE;
    int WNS0nrRCgWp [FvJxLCa7zE];
    int VWoadOZ8vz0Y [Y4PciN];
    int buat6jCchG [FvJxLCa7zE +Y4PciN];
    {
        if ((797 - 797)) {
            return (439 - 439);
        }
    }
    scanf ("%d %d", &FvJxLCa7zE, &Y4PciN);
    {
        Wxg60d = (841 - 711) - (546 - 416);
        for (; FvJxLCa7zE > Wxg60d;) {
            scanf ("%d", &WNS0nrRCgWp[Wxg60d]);
            Wxg60d = Wxg60d +(393 - 392);
        }
    }
    qsort (WNS0nrRCgWp, FvJxLCa7zE, sizeof (int), meITJNay9D);
    {
        Wxg60d = (443 - 443);
        for (; Y4PciN > Wxg60d;) {
            scanf ("%d", &VWoadOZ8vz0Y[Wxg60d]);
            Wxg60d = Wxg60d +(154 - 153);
        }
    }
    qsort (VWoadOZ8vz0Y, Y4PciN, sizeof (int), meITJNay9D);
    {
        Wxg60d = (716 - 716);
        for (; FvJxLCa7zE > Wxg60d;) {
            buat6jCchG[Wxg60d] = WNS0nrRCgWp[Wxg60d];
            Wxg60d = Wxg60d +(500 - 499);
        }
    }
    {
        BAzNTJ5DxtFp = (398 - 398);
        Wxg60d = FvJxLCa7zE;
        for (; Y4PciN +FvJxLCa7zE > Wxg60d;) {
            buat6jCchG[Wxg60d] = VWoadOZ8vz0Y[BAzNTJ5DxtFp];
            BAzNTJ5DxtFp = BAzNTJ5DxtFp +(105 - 104);
            Wxg60d = Wxg60d +(966 - 965);
        }
    }
    {
        Wxg60d = (701 - 701);
        for (; FvJxLCa7zE +Y4PciN-1 > Wxg60d;) {
            printf ("%d ", buat6jCchG[Wxg60d]);
            Wxg60d = Wxg60d +1;
        }
    }
    printf ("%d\n", buat6jCchG[Wxg60d]);
}

