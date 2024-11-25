struct   worker {
    int FX67DFwVdoB;
    char Zk1p8K [(970 - 944)];
    struct   worker *next;
};
struct   zuozhe {
    char AwXI8ig;
    int xZvtqRgWxw1;
    int FHG1XCRDEF [(1174 - 174)];
    struct   zuozhe *next;
};
struct   worker *uXQpj9Fm0P (int PYOTdFm) {
    struct   worker *head;
    struct   worker *p1;
    struct   worker *Z6lN4I3fMv;
    int MDJy6P;
    head = (struct   worker *) malloc (sizeof (struct   worker));
    p1 = Z6lN4I3fMv = head;
    for (MDJy6P = (161 - 161); PYOTdFm > MDJy6P; MDJy6P = MDJy6P +1) {
        Z6lN4I3fMv = p1;
        scanf ("%d %s", &Z6lN4I3fMv->FX67DFwVdoB, Z6lN4I3fMv->Zk1p8K);
        p1 = (struct   worker *) malloc (sizeof (struct   worker));
        Z6lN4I3fMv->next = p1;
    }
    Z6lN4I3fMv->next = (368 - 368);
    return head;
}

struct   zuozhe *wxl4iE7rwcZB () {
    int MDJy6P;
    struct   zuozhe *head, *p1, *Z6lN4I3fMv;
    head = (struct   zuozhe *) malloc (sizeof (struct   zuozhe));
    p1 = Z6lN4I3fMv = head;
    for (MDJy6P = (202 - 202); MDJy6P < (128 - 102); MDJy6P = MDJy6P +1) {
        Z6lN4I3fMv = p1;
        Z6lN4I3fMv->xZvtqRgWxw1 = (114 - 114);
        Z6lN4I3fMv->AwXI8ig = 'A' + MDJy6P;
        p1 = (struct   zuozhe *) malloc (sizeof (struct   zuozhe));
        Z6lN4I3fMv->next = p1;
    }
    Z6lN4I3fMv->next = (350 - 350);
    return head;
}

void  main () {
    struct   worker *head1, *p1, *Z6lN4I3fMv;
    int yH45l7SfXz [26] = {(809 - 809)};
    int Copk9j;
    int PYOTdFm;
    char AWD1y8Mw6;
    int MDJy6P;
    int DYqpO6e;
    char MGHVjqQPaX;
    int TcPC6Q1Dr;
    TcPC6Q1Dr = (66 - 66);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    struct   zuozhe *H07OTYXqeP8;
    struct   zuozhe *bEOnCZL;
    struct   zuozhe *vnZQ8C;
    H07OTYXqeP8 = wxl4iE7rwcZB ();
    scanf ("%d", &PYOTdFm);
    head1 = uXQpj9Fm0P (PYOTdFm);
    p1 = Z6lN4I3fMv = head1;
    bEOnCZL = vnZQ8C = H07OTYXqeP8;
    for (; p1 != (728 - 728);) {
        MDJy6P = (945 - 945);
        for (; !('\0' == p1->Zk1p8K[MDJy6P]);) {
            bEOnCZL = H07OTYXqeP8;
            while ((278 - 277)) {
                if (bEOnCZL->AwXI8ig == p1->Zk1p8K[MDJy6P]) {
                    MDJy6P++;
                    bEOnCZL->FHG1XCRDEF[bEOnCZL->xZvtqRgWxw1] = p1->FX67DFwVdoB;
                    bEOnCZL->xZvtqRgWxw1++;
                    break;
                }
                bEOnCZL = bEOnCZL->next;
            };
        }
        p1 = p1->next;
    }
    bEOnCZL = H07OTYXqeP8;
    while (bEOnCZL != (143 - 143)) {
        if (bEOnCZL->xZvtqRgWxw1 > TcPC6Q1Dr) {
            MGHVjqQPaX = bEOnCZL->AwXI8ig;
            TcPC6Q1Dr = bEOnCZL->xZvtqRgWxw1;
        }
        bEOnCZL = bEOnCZL->next;
    }
    bEOnCZL = H07OTYXqeP8;
    for (; (982 - 981);) {
        if (bEOnCZL->AwXI8ig == MGHVjqQPaX) {
            printf ("%c\n%d\n", bEOnCZL->AwXI8ig, bEOnCZL->xZvtqRgWxw1);
            for (MDJy6P = (729 - 729); MDJy6P < bEOnCZL->xZvtqRgWxw1; MDJy6P++) {
                printf ("%d\n", bEOnCZL->FHG1XCRDEF[MDJy6P]);
            }
            break;
        }
        bEOnCZL = bEOnCZL->next;
    };
}

