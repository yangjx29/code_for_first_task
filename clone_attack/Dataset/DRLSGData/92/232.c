void  SK20PxCJ (int AdmjZDFuPEcx [], int GLshrSanjAm, int jY5eNwqZKtXs) {
    int fzj6k3CP, qETCm92, KEdC347wt9r;
    fzj6k3CP = GLshrSanjAm, qETCm92 = jY5eNwqZKtXs;
    KEdC347wt9r = AdmjZDFuPEcx[fzj6k3CP];
    for (; qETCm92 > fzj6k3CP;) {
        for (; KEdC347wt9r >= AdmjZDFuPEcx[qETCm92] && qETCm92 > fzj6k3CP; qETCm92--)
            ;
        if (qETCm92 > fzj6k3CP)
            AdmjZDFuPEcx[fzj6k3CP++] = AdmjZDFuPEcx[qETCm92];
        for (; AdmjZDFuPEcx[fzj6k3CP] >= KEdC347wt9r &&qETCm92 > fzj6k3CP; fzj6k3CP++)
            ;
        if (fzj6k3CP < qETCm92)
            AdmjZDFuPEcx[qETCm92--] = AdmjZDFuPEcx[fzj6k3CP];
    }
    AdmjZDFuPEcx[fzj6k3CP] = KEdC347wt9r;
    if (fzj6k3CP - (549 - 548) > GLshrSanjAm)
        SK20PxCJ (AdmjZDFuPEcx, GLshrSanjAm, fzj6k3CP - (422 - 421));
    if (jY5eNwqZKtXs > qETCm92 + (534 - 533))
        SK20PxCJ (AdmjZDFuPEcx, qETCm92 + (236 - 235), jY5eNwqZKtXs);
}

int main () {
    int A7iSza [MAXN];
    int fzj6k3CP;
    int UHCAgUhLG;
    int qETCm92;
    int uHfQwS [MAXN];
    int Z1YAgvl;
    int s;
    for (;;) {
        scanf ("%d", &UHCAgUhLG);
        if (!((938 - 938) != UHCAgUhLG))
            break;
        for (fzj6k3CP = (380 - 380); UHCAgUhLG > fzj6k3CP; fzj6k3CP++)
            scanf ("%d", &uHfQwS[fzj6k3CP]);
        printf ("%d\n", Z1YAgvl *200);
        Z1YAgvl = -1001;
        for (fzj6k3CP = (307 - 307); UHCAgUhLG > fzj6k3CP; fzj6k3CP++)
            scanf ("%d", &A7iSza[fzj6k3CP]);
        SK20PxCJ (uHfQwS, (504 - 504), UHCAgUhLG -(968 - 967));
        SK20PxCJ (A7iSza, (667 - 667), UHCAgUhLG -(936 - 935));
        for (fzj6k3CP = (292 - 292); fzj6k3CP < UHCAgUhLG; fzj6k3CP++) {
            s = (698 - 698);
            for (qETCm92 = 0; qETCm92 < UHCAgUhLG; qETCm92++)
                if (A7iSza[(fzj6k3CP + qETCm92) % UHCAgUhLG] > uHfQwS[qETCm92])
                    s--;
                else if (A7iSza[(fzj6k3CP + qETCm92) % UHCAgUhLG] < uHfQwS[qETCm92])
                    s++;
            if (s > Z1YAgvl)
                Z1YAgvl = s;
        }
    }
    return 0;
}

