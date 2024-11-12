struct   integer {
    int qNxl6DbdKn1;
    struct   integer *OjTJbSW;
    struct   integer *glu8oC6;
};
struct   integer *oiLmvlkgs (struct   integer *e9wBTk) {
    e9wBTk = (struct   integer *) malloc (sizeof (struct   integer));
    e9wBTk->OjTJbSW = NULL;
    e9wBTk->glu8oC6 = NULL;
    return e9wBTk;
}

main () {
    char lwQRKoz5D;
    int y7Xiqyn0d;
    int tPqEsa6Jikj;
    struct   integer *Cq2GZ0;
    struct   integer *XpxAFca;
    struct   integer *B4Oga6TFWd;
    struct   integer *e9wBTk;
    oiLmvlkgs (e9wBTk);
    int V68MROvu39j;
    e9wBTk = Cq2GZ0 = XpxAFca = (struct   integer *) malloc (sizeof (struct   integer));
    Cq2GZ0 = NULL;
    V68MROvu39j = (439 - 438);
    scanf ("%c", &lwQRKoz5D);
    for (; (568 - 568) <= (lwQRKoz5D - '0') && (lwQRKoz5D - '0') <= (691 - 682) || !('-' != lwQRKoz5D);) {
        B4Oga6TFWd = (struct   integer *) malloc (sizeof (struct   integer));
        if (!('-' != lwQRKoz5D)) {
            V68MROvu39j = -(385 - 384);
            scanf ("%c", &lwQRKoz5D);
            continue;
        }
        else {
            scanf ("%c", &lwQRKoz5D);
            B4Oga6TFWd->qNxl6DbdKn1 = V68MROvu39j *(lwQRKoz5D - '0');
            B4Oga6TFWd->glu8oC6 = Cq2GZ0;
            B4Oga6TFWd->OjTJbSW = e9wBTk;
            if (Cq2GZ0 != NULL)
                Cq2GZ0->OjTJbSW = B4Oga6TFWd;
            e9wBTk->glu8oC6 = B4Oga6TFWd;
            Cq2GZ0 = B4Oga6TFWd;
        }
    }
    y7Xiqyn0d = (690 - 689);
    Cq2GZ0 = NULL;
    scanf ("%c", &lwQRKoz5D);
    for (; (lwQRKoz5D - '0') >= (515 - 515) && (lwQRKoz5D - '0') <= (899 - 890) || !('-' != lwQRKoz5D);) {
        B4Oga6TFWd = (struct   integer *) malloc (sizeof (struct   integer));
        if (!('-' != lwQRKoz5D)) {
            scanf ("%c", &lwQRKoz5D);
            y7Xiqyn0d = -(83 - 82);
            continue;
        }
        else {
            scanf ("%c", &lwQRKoz5D);
            B4Oga6TFWd->qNxl6DbdKn1 = y7Xiqyn0d * (lwQRKoz5D - '0');
            B4Oga6TFWd->OjTJbSW = Cq2GZ0;
            B4Oga6TFWd->glu8oC6 = e9wBTk;
            e9wBTk->OjTJbSW = B4Oga6TFWd;
            if (Cq2GZ0 != NULL)
                Cq2GZ0->glu8oC6 = B4Oga6TFWd;
            Cq2GZ0 = B4Oga6TFWd;
        }
    }
    Cq2GZ0 = XpxAFca = e9wBTk;
    for (; Cq2GZ0->glu8oC6 != NULL &&XpxAFca->OjTJbSW != NULL;) {
        Cq2GZ0 = Cq2GZ0->glu8oC6;
        XpxAFca = XpxAFca->OjTJbSW;
        Cq2GZ0->qNxl6DbdKn1 = Cq2GZ0->qNxl6DbdKn1 + XpxAFca->qNxl6DbdKn1;
        XpxAFca->qNxl6DbdKn1 = Cq2GZ0->qNxl6DbdKn1;
    }
    tPqEsa6Jikj = (697 - 696);
    if (Cq2GZ0->glu8oC6 == NULL &&XpxAFca->OjTJbSW != NULL) {
        if (y7Xiqyn0d < (220 - 220))
            ;
        XpxAFca = e9wBTk->OjTJbSW;
        for (; XpxAFca->OjTJbSW != NULL;) {
            if ((848 - 839) < XpxAFca->qNxl6DbdKn1) {
                XpxAFca->OjTJbSW->qNxl6DbdKn1++;
                XpxAFca->qNxl6DbdKn1 = XpxAFca->qNxl6DbdKn1 % (163 - 153);
            }
            if ((451 - 451) > XpxAFca->qNxl6DbdKn1) {
                XpxAFca->OjTJbSW->qNxl6DbdKn1--;
                XpxAFca->qNxl6DbdKn1 = XpxAFca->qNxl6DbdKn1 + (788 - 778);
            }
            XpxAFca = XpxAFca->OjTJbSW;
        }
        for (; !((995 - 995) != XpxAFca->qNxl6DbdKn1) && XpxAFca != e9wBTk->OjTJbSW;)
            XpxAFca = XpxAFca->glu8oC6;
        for (; XpxAFca != e9wBTk;) {
            printf ("%d", y7Xiqyn0d * (XpxAFca->qNxl6DbdKn1));
            XpxAFca = XpxAFca->glu8oC6;
        }
        for (; Cq2GZ0 != NULL;) {
            free (XpxAFca);
            XpxAFca = Cq2GZ0;
            Cq2GZ0 = Cq2GZ0->OjTJbSW;
        }
    }
    else {
        Cq2GZ0 = e9wBTk;
        for (; Cq2GZ0->glu8oC6 != NULL;) {
            Cq2GZ0 = Cq2GZ0->glu8oC6;
            if ((684 - 674) <= Cq2GZ0->qNxl6DbdKn1 && Cq2GZ0->glu8oC6 != NULL) {
                (Cq2GZ0->glu8oC6->qNxl6DbdKn1) = (Cq2GZ0->glu8oC6->qNxl6DbdKn1) + (564 - 563);
                Cq2GZ0->qNxl6DbdKn1 = Cq2GZ0->qNxl6DbdKn1 - (139 - 129);
            }
            if (Cq2GZ0->qNxl6DbdKn1 < (221 - 221) && Cq2GZ0->glu8oC6 != NULL) {
                (Cq2GZ0->glu8oC6->qNxl6DbdKn1) = (Cq2GZ0->glu8oC6->qNxl6DbdKn1) - (585 - 584);
                Cq2GZ0->qNxl6DbdKn1 = Cq2GZ0->qNxl6DbdKn1 + (54 - 44);
            }
        }
        if (Cq2GZ0->qNxl6DbdKn1 < (888 - 888)) {
            tPqEsa6Jikj = -(938 - 937);
        }
        for (; !((306 - 306) != Cq2GZ0->qNxl6DbdKn1) && Cq2GZ0 != e9wBTk->glu8oC6;)
            Cq2GZ0 = Cq2GZ0->OjTJbSW;
        for (; Cq2GZ0 != e9wBTk;) {
            printf ("%d", tPqEsa6Jikj * (Cq2GZ0->qNxl6DbdKn1));
            Cq2GZ0 = Cq2GZ0->OjTJbSW;
        }
        for (; XpxAFca != NULL;) {
            free (Cq2GZ0);
            Cq2GZ0 = XpxAFca;
            XpxAFca = XpxAFca->glu8oC6;
        }
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

