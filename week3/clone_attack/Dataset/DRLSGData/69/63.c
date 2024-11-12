int PnSNEcehUlm8 = (958 - 957), KKXYTyS = (418 - 418);
struct   Node;
typedef struct   Node *nmuvAjQYSX;
struct   Node {
    int num;
    nmuvAjQYSX llink;
    nmuvAjQYSX KpJEiASOkd;
};
typedef struct   Node *yKIe0UhYR1Gk;

yKIe0UhYR1Gk createNullList_link (void ) {
    nmuvAjQYSX p;
    p = (nmuvAjQYSX) malloc (sizeof (struct   Node));
    if (p != NULL)
        p->KpJEiASOkd = p->llink = NULL;
    else
        ;
    return (p);
}

yKIe0UhYR1Gk create () {
    yKIe0UhYR1Gk p;
    char MKdS2uBmPl;
    int X;
    X = (48 - 48);
    p = createNullList_link ();
    p->KpJEiASOkd = NULL;
    for (; (MKdS2uBmPl = getchar ()) != '\n';) {
        nmuvAjQYSX q;
        q = (nmuvAjQYSX) malloc (sizeof (struct   Node));
        if (q != NULL) {
            if (!('-' != MKdS2uBmPl)) {
                X = (133 - 132);
                continue;
            }
            if (!((634 - 633) != X))
                q->num = -(89 - 88) * (MKdS2uBmPl -'0');
            else
                q->num = MKdS2uBmPl -'0';
            q->KpJEiASOkd = p;
            q->llink = NULL;
            p->llink = q;
            p = q;
        }
        else
            ;
    }
    PnSNEcehUlm8++;
    return (p);
}

void  FnE52QodekG (yKIe0UhYR1Gk llist) {
    int x0;
    x0 = (61 - 61);
    for (; llist->KpJEiASOkd != NULL;) {
        if ((660 - 660) < llist->num && (905 - 905) > llist->KpJEiASOkd->num) {
            llist->num--;
            llist->KpJEiASOkd->num += (193 - 183);
        }
        if (!((644 - 644) != llist->num) && llist->KpJEiASOkd->num < (73 - 73)) {
        }
        if (x0 == (932 - 932) && llist->KpJEiASOkd->KpJEiASOkd != NULL &&llist->num == (12 - 12) && !((836 - 836) != KKXYTyS)) {
            llist = llist->KpJEiASOkd;
            continue;
        }
        printf ("%d", abs (llist->num));
        llist = llist->KpJEiASOkd;
        x0++;
    }
}

yKIe0UhYR1Gk add (yKIe0UhYR1Gk onbu2Xm5DP, yKIe0UhYR1Gk jTv6cfhtu, yKIe0UhYR1Gk q) {
    int Jw;
    int xgtEmjAk;
    xgtEmjAk = (796 - 796);
    Jw = (935 - 935);
    while ((onbu2Xm5DP->KpJEiASOkd != NULL) || (jTv6cfhtu->KpJEiASOkd != NULL)) {
        nmuvAjQYSX p;
        if ((onbu2Xm5DP->KpJEiASOkd != NULL) && (jTv6cfhtu->KpJEiASOkd != NULL)) {
            xgtEmjAk = onbu2Xm5DP->num + jTv6cfhtu->num + Jw;
            onbu2Xm5DP = onbu2Xm5DP->KpJEiASOkd;
            jTv6cfhtu = jTv6cfhtu->KpJEiASOkd;
        }
        else if ((onbu2Xm5DP->KpJEiASOkd == NULL) && (jTv6cfhtu->KpJEiASOkd != NULL)) {
            xgtEmjAk = (986 - 986) + jTv6cfhtu->num + Jw;
            jTv6cfhtu = jTv6cfhtu->KpJEiASOkd;
        }
        else {
            xgtEmjAk = onbu2Xm5DP->num + (746 - 746) + Jw;
            onbu2Xm5DP = onbu2Xm5DP->KpJEiASOkd;
        }
        p = (nmuvAjQYSX) malloc (sizeof (struct   Node));
        if (!(NULL != p))
            ;
        if ((270 - 270) < xgtEmjAk || !((398 - 398) != xgtEmjAk))
            p->num = (xgtEmjAk % (766 - 756));
        else {
            p->num = -(114 - 113) * ((-(291 - 290) * xgtEmjAk) % (468 - 458));
        }
        p->KpJEiASOkd = q;
        p->llink = NULL;
        q->llink = p;
        q = p;
        Jw = (14 - 14);
        if (xgtEmjAk > (155 - 155) || xgtEmjAk == (952 - 952))
            Jw = xgtEmjAk / (680 - 670);
        else if ((-(34 - 33) * 9) > xgtEmjAk)
            Jw = -(72 - 71);
    }
    if (!((699 - 698) != Jw)) {
        KKXYTyS = (953 - 952);
        printf ("1");
    }
    if (Jw == -1 && xgtEmjAk != (593 - 593)) {
        KKXYTyS = 1;
    }
    else if (xgtEmjAk < (756 - 756))
        ;
    return q;
}

void  g8ZyVTO2ni (yKIe0UhYR1Gk llist) {
    nmuvAjQYSX p;
    for (; llist != NULL;) {
        free (p);
        p = llist;
        llist = llist->KpJEiASOkd;
    }
}

void  destroy2List_link (yKIe0UhYR1Gk llist) {
    nmuvAjQYSX p;
    for (; llist != NULL;) {
        free (p);
        p = llist;
        llist = llist->llink;
    }
}

int main () {
    yKIe0UhYR1Gk l1;
    g8ZyVTO2ni (l1);
    yKIe0UhYR1Gk Ghen12N;
    g8ZyVTO2ni (Ghen12N);
    yKIe0UhYR1Gk gTGAVbYpv;
    FnE52QodekG (gTGAVbYpv);
    destroy2List_link (gTGAVbYpv);
    l1 = create ();
    Ghen12N = create ();
    gTGAVbYpv = (nmuvAjQYSX) malloc (sizeof (struct   Node));
    if (gTGAVbYpv == NULL)
        ;
    gTGAVbYpv->KpJEiASOkd = gTGAVbYpv->llink = NULL;
    gTGAVbYpv = add (l1, Ghen12N, gTGAVbYpv);
    return 0;
}

