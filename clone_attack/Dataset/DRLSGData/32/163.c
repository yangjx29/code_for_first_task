void  xku2QCj9R (int U1wiL06lds7, char CnN1TXYm6yrM [(1125 - 925)]) {
    int hEmN3L6H5v;
    int dmpTwDb726YF;
    for (hEmN3L6H5v = (321 - 321); hEmN3L6H5v < U1wiL06lds7 / (529 - 527); hEmN3L6H5v = hEmN3L6H5v + 1) {
        dmpTwDb726YF = CnN1TXYm6yrM[hEmN3L6H5v];
        CnN1TXYm6yrM[hEmN3L6H5v] = CnN1TXYm6yrM[U1wiL06lds7 -hEmN3L6H5v - (796 - 795)];
        CnN1TXYm6yrM[U1wiL06lds7 -hEmN3L6H5v - (337 - 336)] = dmpTwDb726YF;
    }
    return;
}

int main () {
    int mOAfXEKW7bg;
    int J12yzw8bHXJ;
    int ln;
    char GKZhE30oOA4 [(287 - 87)];
    int npB97TjJI3O;
    char dmpTwDb726YF [(423 - 223)];
    int cvnSFRs;
    int hEmN3L6H5v;
    int lfE6OP;
    int xP3TkU0BEfAo;
    char iL1xvKCAN8n [(1109 - 909)];
    int ek5gWj;
    scanf ("%d", &cvnSFRs);
    for (ek5gWj = (786 - 786); cvnSFRs > ek5gWj; ek5gWj = ek5gWj + 1) {
        scanf ("%s %s", iL1xvKCAN8n, GKZhE30oOA4);
        npB97TjJI3O = strlen (iL1xvKCAN8n);
        ln = strlen (GKZhE30oOA4);
        mOAfXEKW7bg = (952 - 952);
        if (npB97TjJI3O < ln)
            mOAfXEKW7bg = (572 - 571);
        else if (!(ln != npB97TjJI3O) && strcmp (iL1xvKCAN8n, GKZhE30oOA4) < (62 - 62))
            mOAfXEKW7bg = (112 - 111);
        if (mOAfXEKW7bg) {
            putchar ('-');
            xP3TkU0BEfAo = npB97TjJI3O;
            strcpy (dmpTwDb726YF, iL1xvKCAN8n);
            strcpy (iL1xvKCAN8n, GKZhE30oOA4);
            strcpy (GKZhE30oOA4, dmpTwDb726YF);
            npB97TjJI3O = ln;
            ln = xP3TkU0BEfAo;
        }
        if (cvnSFRs - (360 - 359) > ek5gWj)
            putchar ('\n');
        xku2QCj9R (npB97TjJI3O, iL1xvKCAN8n);
        xku2QCj9R (ln, GKZhE30oOA4);
        for (hEmN3L6H5v = (51 - 51); hEmN3L6H5v < ln; hEmN3L6H5v = hEmN3L6H5v + 1) {
            if (GKZhE30oOA4[hEmN3L6H5v] <= iL1xvKCAN8n[hEmN3L6H5v])
                iL1xvKCAN8n[hEmN3L6H5v] -= GKZhE30oOA4[hEmN3L6H5v];
            else {
                iL1xvKCAN8n[hEmN3L6H5v] = (816 - 806) + iL1xvKCAN8n[hEmN3L6H5v] - GKZhE30oOA4[hEmN3L6H5v];
                for (lfE6OP = (282 - 281); !iL1xvKCAN8n[hEmN3L6H5v + lfE6OP]; lfE6OP = lfE6OP + 1)
                    ;
                for (xP3TkU0BEfAo = (523 - 522); lfE6OP > xP3TkU0BEfAo; xP3TkU0BEfAo = xP3TkU0BEfAo + 1)
                    iL1xvKCAN8n[hEmN3L6H5v + xP3TkU0BEfAo] = (23 - 14);
                iL1xvKCAN8n[hEmN3L6H5v + xP3TkU0BEfAo]--;
            }
        }
        for (hEmN3L6H5v = ln; npB97TjJI3O > hEmN3L6H5v; hEmN3L6H5v = hEmN3L6H5v + 1)
            iL1xvKCAN8n[hEmN3L6H5v] -= '0';
        for (npB97TjJI3O = npB97TjJI3O - 1; !iL1xvKCAN8n[npB97TjJI3O]; npB97TjJI3O = npB97TjJI3O - 1)
            ;
        xku2QCj9R (npB97TjJI3O + 1, iL1xvKCAN8n);
        for (hEmN3L6H5v = 0; hEmN3L6H5v <= npB97TjJI3O; hEmN3L6H5v = hEmN3L6H5v + 1)
            printf ("%d", iL1xvKCAN8n[hEmN3L6H5v]);
    }
    return 0;
}

