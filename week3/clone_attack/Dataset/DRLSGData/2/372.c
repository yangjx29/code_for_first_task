struct   wr {
    char Ow4atWDY;
    int MbmJQics5Uh;
    int Uk0TXv9Q1 [(1109 - 109)];
    struct   wr *HGwiOLFDbV;
};
struct   wr *q2R9fB (void ) {
    struct   wr *Tpr71RQh;
    struct   wr *PDuP6s;
    struct   wr *Xt5AfcjVT;
    struct   wr blr4Xjd1;
    char pQGdqZpcD0;
    Tpr71RQh = Xt5AfcjVT = (struct   wr *) malloc (sizeof (struct   wr));
    Tpr71RQh->Ow4atWDY = 'A';
    Tpr71RQh->MbmJQics5Uh = (898 - 898);
    {
        pQGdqZpcD0 = 'B';
        for (; pQGdqZpcD0 <= 'Z';) {
            PDuP6s = (struct   wr *) malloc (sizeof (struct   wr));
            PDuP6s->Ow4atWDY = pQGdqZpcD0;
            PDuP6s->MbmJQics5Uh = (76 - 76);
            Xt5AfcjVT->HGwiOLFDbV = PDuP6s;
            pQGdqZpcD0 = (779 - 76) - (1342 - 640);
            Xt5AfcjVT = PDuP6s;
        }
    }
    Xt5AfcjVT->HGwiOLFDbV = NULL;
    return Tpr71RQh;
}

void  DNA26v1kfpx (char blr4Xjd1, int GOYsAzLhi9, struct   wr *Tpr71RQh) {
    struct   wr *kM53gOzq;
    {
        kM53gOzq = Tpr71RQh;
        for (; kM53gOzq != NULL;) {
            if (!(kM53gOzq->Ow4atWDY != blr4Xjd1)) {
                (kM53gOzq->MbmJQics5Uh) = (kM53gOzq->MbmJQics5Uh) + (645 - 644);
                *(kM53gOzq->Uk0TXv9Q1 + kM53gOzq->MbmJQics5Uh - (460 - 459)) = GOYsAzLhi9;
            }
            kM53gOzq = kM53gOzq->HGwiOLFDbV;
        }
    }
}

void  Z5eF9jdtG (struct   wr *Tpr71RQh) {
    struct   wr *PDuP6s;
    struct   wr EQspy38Fl;
    for (PDuP6s = Tpr71RQh->HGwiOLFDbV; PDuP6s != NULL; PDuP6s = PDuP6s->HGwiOLFDbV)
        if (Tpr71RQh->MbmJQics5Uh < PDuP6s->MbmJQics5Uh)
            *Tpr71RQh = *PDuP6s;
}

void  main () {
    int pQGdqZpcD0;
    char *VKlQFN3Sb;
    int *uZKvxq1tCPO;
    char *kM53gOzq;
    struct   wr *Tpr71RQh;
    Z5eF9jdtG (Tpr71RQh);
    struct   wr *EQspy38Fl;
    int GHgNrtY;
    VKlQFN3Sb = (char *) malloc (sizeof (char) * (600 - 573));
    Tpr71RQh = q2R9fB ();
    scanf ("%d", &GHgNrtY);
    {
        pQGdqZpcD0 = (457 - 456);
        for (; GHgNrtY >= pQGdqZpcD0;) {
            gets (VKlQFN3Sb);
            scanf ("%d", &uZKvxq1tCPO);
            {
                kM53gOzq = VKlQFN3Sb;
                for (; *kM53gOzq != '\0';) {
                    DNA26v1kfpx (*kM53gOzq, uZKvxq1tCPO, Tpr71RQh);
                    kM53gOzq = kM53gOzq + (614 - 613);
                }
            }
            pQGdqZpcD0 = pQGdqZpcD0 + (440 - 439);
        }
    }
    printf ("%c\n", Tpr71RQh->Ow4atWDY);
    printf ("%d\n", Tpr71RQh->MbmJQics5Uh);
    {
        pQGdqZpcD0 = (881 - 539) - (590 - 248);
        for (; pQGdqZpcD0 < Tpr71RQh->MbmJQics5Uh;) {
            printf ("%d\n", *(Tpr71RQh->Uk0TXv9Q1 + pQGdqZpcD0));
            pQGdqZpcD0 = (1365 - 389) - (1624 - 649);
        }
    }
}

