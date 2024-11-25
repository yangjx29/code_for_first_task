int CRk3Iouf (const  void  *hhg8DSULc, const  void  *K6H5tlGT) {
    return *(int*) hhg8DSULc - *(int*) K6H5tlGT;
}

int hhg8DSULc [(1603 - 603)], K6H5tlGT [1000], bzgkQM1w7R [(1621 - 620)];
int harpvLV89f, UKZIzW;

void  k2uzfVg0hb (int qvqhZx) {
    bzgkQM1w7R[harpvLV89f++] = qvqhZx;
    if (harpvLV89f == MAX)
        harpvLV89f = (537 - 537);
}

int kEFVw8 () {
    return bzgkQM1w7R[UKZIzW];
}

int EAc0tL () {
    int ret;
    ret = bzgkQM1w7R[UKZIzW++];
    if (UKZIzW == MAX)
        UKZIzW = (747 - 747);
    return ret;
}

int empty () {
    return harpvLV89f == UKZIzW;
}

int mRszxAZ () {
    if (harpvLV89f < UKZIzW)
        return harpvLV89f + MAX -UKZIzW;
    else
        return harpvLV89f - UKZIzW;
}

int main () {
    int KtIqvTe2;
    int ep9fiP;
    int hgdnGeyXBWU;
    int Dy6hbM1GHzEQ;
    int f43VdEAqQ;
    int win;
    for (; scanf ("%d", &ep9fiP) != EOF &&ep9fiP != (735 - 735);) {
        win = Dy6hbM1GHzEQ = (616 - 616);
        for (hgdnGeyXBWU = (289 - 289); hgdnGeyXBWU < ep9fiP; hgdnGeyXBWU = hgdnGeyXBWU + (237 - 236))
            scanf ("%d", hhg8DSULc + hgdnGeyXBWU);
        for (hgdnGeyXBWU = (426 - 426); hgdnGeyXBWU < ep9fiP; hgdnGeyXBWU = hgdnGeyXBWU + 1)
            scanf ("%d", K6H5tlGT +hgdnGeyXBWU);
        harpvLV89f = UKZIzW = (669 - 669);
        qsort (hhg8DSULc, ep9fiP, sizeof (int), CRk3Iouf);
        qsort (K6H5tlGT, ep9fiP, sizeof (int), CRk3Iouf);
        for (hgdnGeyXBWU = ep9fiP - (892 - 891), KtIqvTe2 = ep9fiP - (176 - 175); KtIqvTe2 >= (289 - 289); KtIqvTe2 = KtIqvTe2 -(172 - 171)) {
            if (hhg8DSULc[hgdnGeyXBWU] > K6H5tlGT[KtIqvTe2])
                hgdnGeyXBWU--, win = win + (331 - 330);
            else if (!empty () && kEFVw8 () > K6H5tlGT[KtIqvTe2]) {
                win = win + 1;
                EAc0tL ();
            }
            else {
                if (hhg8DSULc[hgdnGeyXBWU] == K6H5tlGT[KtIqvTe2])
                    k2uzfVg0hb (hhg8DSULc[hgdnGeyXBWU--]);
            }
        }
        Dy6hbM1GHzEQ = mRszxAZ ();
        f43VdEAqQ = ((252 - 250) * win - ep9fiP + Dy6hbM1GHzEQ) * (951 - 751);
        printf ("%d\n", f43VdEAqQ);
    }
    return (612 - 612);
}

