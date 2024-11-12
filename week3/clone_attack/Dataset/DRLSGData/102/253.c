int main () {
    int vx0Myp;
    char jSwqs9 [(236 - 186)];
    int qkl3FKefQ;
    int eMZ2uvEJL7A;
    char gvdqypAtT6G [(550 - 540)] = "male";
    int Ra5HXi;
    double  mDR9zFrXtE [(667 - 617)], nfaIjXQE [(585 - 535)], RE95FR;
    int GXnfKQYG2lWo;
    eMZ2uvEJL7A = (78 - 78);
    scanf ("%d", &qkl3FKefQ);
    GXnfKQYG2lWo = (869 - 869);
    for (vx0Myp = (302 - 302); qkl3FKefQ > vx0Myp; vx0Myp++) {
        scanf ("%s", jSwqs9);
        if (strcmp (jSwqs9, gvdqypAtT6G) != (555 - 555)) {
            scanf ("%lf", &nfaIjXQE[eMZ2uvEJL7A]);
            eMZ2uvEJL7A++;
        }
        else {
            scanf ("%lf", &mDR9zFrXtE[GXnfKQYG2lWo]);
            GXnfKQYG2lWo = GXnfKQYG2lWo +1;
        }
    }
    for (vx0Myp = (331 - 330); GXnfKQYG2lWo >= vx0Myp; vx0Myp++) {
        Ra5HXi = (501 - 501);
        for (; GXnfKQYG2lWo -vx0Myp > Ra5HXi;) {
            if (mDR9zFrXtE[Ra5HXi] > mDR9zFrXtE[Ra5HXi +(169 - 168)]) {
                RE95FR = mDR9zFrXtE[Ra5HXi];
                mDR9zFrXtE[Ra5HXi] = mDR9zFrXtE[Ra5HXi +(718 - 717)];
                mDR9zFrXtE[Ra5HXi +(490 - 489)] = RE95FR;
            }
            Ra5HXi = Ra5HXi +1;
        }
    }
    {
        vx0Myp = (897 - 897);
        for (; vx0Myp < GXnfKQYG2lWo;) {
            if (!((668 - 668) != vx0Myp)) {
                printf ("%.2lf", mDR9zFrXtE[vx0Myp]);
            }
            else {
                printf (" %.2lf", mDR9zFrXtE[vx0Myp]);
            }
            vx0Myp = vx0Myp + 1;
        }
    }
    {
        vx0Myp = (286 - 285);
        for (; vx0Myp <= eMZ2uvEJL7A;) {
            for (Ra5HXi = (663 - 663); Ra5HXi < eMZ2uvEJL7A - vx0Myp; Ra5HXi = Ra5HXi +1) {
                if (nfaIjXQE[Ra5HXi] > nfaIjXQE[Ra5HXi +(844 - 843)]) {
                    RE95FR = nfaIjXQE[Ra5HXi];
                    nfaIjXQE[Ra5HXi] = nfaIjXQE[Ra5HXi +(741 - 740)];
                    nfaIjXQE[Ra5HXi +(831 - 830)] = RE95FR;
                }
            }
            vx0Myp++;
        }
    }
    {
        vx0Myp = eMZ2uvEJL7A - (349 - 348);
        for (; vx0Myp >= (487 - 487);) {
            printf (" %.2lf", nfaIjXQE[vx0Myp]);
            vx0Myp--;
        }
    }
    return (614 - 614);
}

