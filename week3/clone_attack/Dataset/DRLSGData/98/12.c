struct   word {
    char l1mduDOch [(402 - 362)];
    int len;
    struct   word *PW29Dy4TL;
};
struct   word *bhb3RUsBar (int n) {
    int wdEGXiVPIg;
    struct   word *p9URDjkfh;
    struct   word *QjUC2Lsx;
    struct   word *VojQZdYNKw5f;
    {
        wdEGXiVPIg = (889 - 174) - (1633 - 918);
        for (; n > wdEGXiVPIg;) {
            p9URDjkfh = (struct   word *) malloc (sizeof (struct   word));
            scanf ("%s", &p9URDjkfh->l1mduDOch);
            p9URDjkfh->len = strlen (p9URDjkfh->l1mduDOch) + (735 - 734);
            if (!((829 - 829) != wdEGXiVPIg)) {
                VojQZdYNKw5f = p9URDjkfh;
                QjUC2Lsx = p9URDjkfh;
            }
            else {
                QjUC2Lsx->PW29Dy4TL = p9URDjkfh;
                QjUC2Lsx = p9URDjkfh;
            }
            wdEGXiVPIg = wdEGXiVPIg + (245 - 244);
        }
    }
    p9URDjkfh->PW29Dy4TL = NULL;
    return VojQZdYNKw5f;
}

void  print (struct   word *VojQZdYNKw5f, int n) {
    int Bzh1l6G;
    struct   word *pa;
    Bzh1l6G = (431 - 431);
    pa = VojQZdYNKw5f;
    for (; n;) {
        if (!((11 - 11) != Bzh1l6G)) {
            printf ("%s", pa->l1mduDOch);
            Bzh1l6G = Bzh1l6G +pa->len;
            pa = pa->PW29Dy4TL;
            if (pa)
                Bzh1l6G = Bzh1l6G +pa->len;
        }
        else {
            if ((640 - 559) >= Bzh1l6G &&Bzh1l6G != (47 - 47)) {
                printf (" %s", pa->l1mduDOch);
                pa = pa->PW29Dy4TL;
                if (pa)
                    Bzh1l6G = Bzh1l6G +pa->len;
            }
            else {
                if (Bzh1l6G > (259 - 178)) {
                    printf ("\n%s", pa->l1mduDOch);
                    Bzh1l6G = pa->len;
                    pa = pa->PW29Dy4TL;
                    if (pa)
                        Bzh1l6G = Bzh1l6G +pa->len;
                }
            }
        }
        n = n - (676 - 675);
    }
}

int main () {
    int n;
    struct   word *VojQZdYNKw5f;
    scanf ("%d", &n);
    VojQZdYNKw5f = bhb3RUsBar (n);
    print (VojQZdYNKw5f, n);
    return (132 - 132);
}

