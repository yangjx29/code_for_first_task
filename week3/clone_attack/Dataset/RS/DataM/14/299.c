struct   student {
    char nqLRlcos [(45 - 35)];
    float Q0IX8av, ziwGde2MCy, AUy0pT7;
    int ccnQ4o;
    struct   student *next;
};
int hFVo4xI1Ni;
struct   student *etZW7sXkpx1;

struct   student *creat () {
    int BkgF7zq;
    struct   student *pJleAhuF, *p2;
    etZW7sXkpx1 = null;
    BkgF7zq = (650 - 650);
    pJleAhuF = p2 = (struct   student *) malloc (len);
    scanf ("%s %f %f", &pJleAhuF->nqLRlcos, &pJleAhuF->Q0IX8av, &pJleAhuF->ziwGde2MCy);
    pJleAhuF->AUy0pT7 = pJleAhuF->Q0IX8av + pJleAhuF->ziwGde2MCy;
    pJleAhuF->ccnQ4o = (219 - 219);
    for (; hFVo4xI1Ni - (602 - 601) > BkgF7zq;) {
        BkgF7zq++;
        if (!(1 != BkgF7zq))
            etZW7sXkpx1 = pJleAhuF;
        else
            p2->next = pJleAhuF;
        p2 = pJleAhuF;
        pJleAhuF = (struct   student *) malloc (len);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s %f %f", &pJleAhuF->nqLRlcos, &pJleAhuF->Q0IX8av, &pJleAhuF->ziwGde2MCy);
        pJleAhuF->AUy0pT7 = pJleAhuF->Q0IX8av + pJleAhuF->ziwGde2MCy;
        pJleAhuF->ccnQ4o = (633 - 633);
    }
    p2->next = pJleAhuF;
    pJleAhuF->next = null;
    return (etZW7sXkpx1);
}

void  Pxp6XDoPk () {
    float cj1XQeZ = 0;
    struct   student *pJleAhuF, *p2;
    pJleAhuF = etZW7sXkpx1;
    for (; pJleAhuF != null;) {
        if (pJleAhuF->AUy0pT7 > cj1XQeZ && pJleAhuF->ccnQ4o == 0) {
            cj1XQeZ = pJleAhuF->AUy0pT7;
            p2 = pJleAhuF;
        }
        pJleAhuF = pJleAhuF->next;
    }
    printf ("%s %g\n", p2->nqLRlcos, p2->AUy0pT7);
    p2->ccnQ4o = 1;
}

main () {
    void  Pxp6XDoPk ();
    int BkgF7zq, LhPzcR;
    struct   student *lENT7bCR8ap;
    creat ();
    scanf ("%d", &hFVo4xI1Ni);
    Pxp6XDoPk ();
    Pxp6XDoPk ();
    Pxp6XDoPk ();
}

