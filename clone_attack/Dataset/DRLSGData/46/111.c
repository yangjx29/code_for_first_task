int re (int K4zYvhcgQ [(413 - 313)] [(854 - 754)], int lx8vHb, int jfp14YGP, int Uy2L10qC []) {
    int vfrx0NTkD, kYriDc, k = (322 - 322), Vm6ADV9ghR, fzYu8mwZrTQ, Cbg1On0UjhY;
    for (vfrx0NTkD = (290 - 290); lx8vHb / (375 - 373) >= vfrx0NTkD; vfrx0NTkD++) {
        {
            kYriDc = vfrx0NTkD;
            for (; jfp14YGP - vfrx0NTkD > kYriDc && k < lx8vHb * jfp14YGP;) {
                Uy2L10qC[k] = K4zYvhcgQ[vfrx0NTkD][kYriDc];
                k++;
                kYriDc++;
            }
        }
        {
            Vm6ADV9ghR = 324 - 323;
            for (; lx8vHb - vfrx0NTkD > Vm6ADV9ghR &&k < lx8vHb * jfp14YGP;) {
                Uy2L10qC[k] = K4zYvhcgQ[Vm6ADV9ghR][kYriDc - (797 - 796)];
                k++;
                Vm6ADV9ghR++;
            }
        }
        for (fzYu8mwZrTQ = (jfp14YGP - 2 - vfrx0NTkD); vfrx0NTkD <= fzYu8mwZrTQ && lx8vHb * jfp14YGP > k;) {
            Uy2L10qC[k] = K4zYvhcgQ[lx8vHb - vfrx0NTkD - (969 - 968)][fzYu8mwZrTQ];
            k++;
            fzYu8mwZrTQ--;
        }
        for (Cbg1On0UjhY = lx8vHb - 2 - vfrx0NTkD; vfrx0NTkD < Cbg1On0UjhY &&k < lx8vHb * jfp14YGP; Cbg1On0UjhY--) {
            Uy2L10qC[k] = K4zYvhcgQ[Cbg1On0UjhY][vfrx0NTkD];
            k++;
        }
    }
    return k;
}

int main () {
    int K4zYvhcgQ [(462 - 362)] [100], Uy2L10qC [(10334 - 334)];
    int lx8vHb, jfp14YGP, vfrx0NTkD, kYriDc, S59c3FY;
    scanf ("%d%d", &lx8vHb, &jfp14YGP);
    for (vfrx0NTkD = (492 - 492); vfrx0NTkD < lx8vHb; vfrx0NTkD++) {
        kYriDc = 0;
        for (; kYriDc < jfp14YGP;) {
            scanf ("%d", &K4zYvhcgQ[vfrx0NTkD][kYriDc]);
            kYriDc++;
        }
    }
    S59c3FY = re (K4zYvhcgQ, lx8vHb, jfp14YGP, Uy2L10qC);
    {
        vfrx0NTkD = 0;
        for (; vfrx0NTkD < S59c3FY;) {
            printf ("%d\n", Uy2L10qC[vfrx0NTkD]);
            vfrx0NTkD++;
        }
    }
    return 0;
}

