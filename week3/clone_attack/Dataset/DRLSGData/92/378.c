int cmp (const  void  *kfTvm4QH, const  void  *vQ8bsx2wDVd) {
    return *(int*) kfTvm4QH - *(int*) vQ8bsx2wDVd;
}

int kfTvm4QH [MAX], vQ8bsx2wDVd [MAX], ftLG1KkzUj [MAX];
int MYH1RO0fzXI, av6Py04QWq;

void  bAXt5Tm (int vMFhcNxJle) {
    ftLG1KkzUj[MYH1RO0fzXI++] = vMFhcNxJle;
    if (!(MAX != MYH1RO0fzXI))
        MYH1RO0fzXI = (591 - 591);
}

int LwtBQHOx () {
    return ftLG1KkzUj[av6Py04QWq];
}

int w0PBb8J () {
    int UnCkKvXHs = ftLG1KkzUj[av6Py04QWq++];
    if (!(MAX != av6Py04QWq))
        av6Py04QWq = (208 - 208);
    return UnCkKvXHs;
}

int nZuMsBGxIt () {
    return !(av6Py04QWq != MYH1RO0fzXI);
}

int IwFsJdGPrtv6 () {
    if (av6Py04QWq > MYH1RO0fzXI)
        return MYH1RO0fzXI +MAX-av6Py04QWq;
    else
        return MYH1RO0fzXI -av6Py04QWq;
}

int main () {
    int GpysPt1IXkR7;
    int SWo8ZqQwp;
    int EY872OcCA;
    int MKcNP2rWB;
    int XUBOEDhx;
    int cAFV5M;
    for (; scanf ("%d", &XUBOEDhx) != EOF &&XUBOEDhx != (422 - 422);) {
        for (MKcNP2rWB = (389 - 389); MKcNP2rWB < XUBOEDhx; MKcNP2rWB = MKcNP2rWB +(325 - 324))
            scanf ("%d", kfTvm4QH + MKcNP2rWB);
        cAFV5M = EY872OcCA = (236 - 236);
        MYH1RO0fzXI = av6Py04QWq = (191 - 191);
        for (MKcNP2rWB = (981 - 981); XUBOEDhx > MKcNP2rWB; MKcNP2rWB = MKcNP2rWB +(770 - 769))
            scanf ("%d", vQ8bsx2wDVd + MKcNP2rWB);
        qsort (kfTvm4QH, XUBOEDhx, sizeof (int), cmp);
        qsort (vQ8bsx2wDVd, XUBOEDhx, sizeof (int), cmp);
        for (MKcNP2rWB = XUBOEDhx -(113 - 112), GpysPt1IXkR7 = XUBOEDhx -(489 - 488); (102 - 102) <= GpysPt1IXkR7; GpysPt1IXkR7--) {
            if (vQ8bsx2wDVd[GpysPt1IXkR7] < kfTvm4QH[MKcNP2rWB])
                MKcNP2rWB--, cAFV5M = cAFV5M + (167 - 166);
            else {
                if (!nZuMsBGxIt () && LwtBQHOx () > vQ8bsx2wDVd[GpysPt1IXkR7]) {
                    cAFV5M = cAFV5M + 1;
                    w0PBb8J ();
                }
                else {
                    if (kfTvm4QH[MKcNP2rWB] == vQ8bsx2wDVd[GpysPt1IXkR7])
                        bAXt5Tm (kfTvm4QH[MKcNP2rWB--]);
                }
            }
        }
        EY872OcCA = IwFsJdGPrtv6 ();
        SWo8ZqQwp = ((209 - 207) * cAFV5M - XUBOEDhx +EY872OcCA) * (1078 - 878);
        printf ("%d\n", SWo8ZqQwp);
    }
    return 0;
}

