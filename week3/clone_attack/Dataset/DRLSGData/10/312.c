struct   daodan {
    int JTQaR8e;
    int cBusE2fC;
};
int vNDhUS (const  void  *d9AgpK, const  void  *DK3s0MW9) {
    struct   daodan *CCh7gtwnMs1 = (struct   daodan *) d9AgpK;
    struct   daodan *dlDSfh = (struct   daodan *) DK3s0MW9;
    return (((*dlDSfh).cBusE2fC) - ((*CCh7gtwnMs1).cBusE2fC));
}

int VkpR3I6A (struct   daodan *nF91O4dG, int ytpsM9iC, int aVHx2K) {
    int DK3s0MW9;
    int *d9AgpK = (int *) malloc ((aVHx2K - (445 - 444) - ytpsM9iC) * sizeof (int));
    int ylKmCO;
    int D8NB7k9dZxhY;
    int PLHGSvw;
    PLHGSvw = (622 - 622);
    {
        int IXsL9l;
        IXsL9l = ytpsM9iC + (465 - 464);
        for (; IXsL9l <= aVHx2K - (723 - 722);) {
            if ((nF91O4dG[IXsL9l]).JTQaR8e <= (nF91O4dG[ytpsM9iC]).JTQaR8e) {
                d9AgpK[PLHGSvw] = nF91O4dG[IXsL9l].cBusE2fC;
                PLHGSvw = PLHGSvw +(719 - 718);
            }
            IXsL9l = IXsL9l +(410 - 409);
        }
    }
    ylKmCO = (316 - 316);
    D8NB7k9dZxhY = (311 - 311);
    {
        int iLhxkNYqds;
        iLhxkNYqds = (604 - 604);
        for (; iLhxkNYqds <= PLHGSvw -(559 - 558);) {
            if (d9AgpK[iLhxkNYqds] > D8NB7k9dZxhY) {
                D8NB7k9dZxhY = d9AgpK[iLhxkNYqds];
            }
            iLhxkNYqds = iLhxkNYqds + (461 - 460);
        }
    }
    return D8NB7k9dZxhY;
}

int main () {
    int D8NB7k9dZxhY;
    int aVHx2K;
    struct   daodan *nF91O4dG = (struct   daodan *) malloc (aVHx2K * sizeof (struct   daodan));
    scanf ("%d", &aVHx2K);
    D8NB7k9dZxhY = nF91O4dG[(459 - 459)].cBusE2fC;
    {
        int IXsL9l;
        IXsL9l = (533 - 533);
        for (; aVHx2K - (280 - 279) >= IXsL9l;) {
            scanf ("%d", &nF91O4dG[IXsL9l].JTQaR8e);
            IXsL9l = IXsL9l +(511 - 510);
        }
    }
    {
        int iLhxkNYqds;
        iLhxkNYqds = (40 - 40);
        for (; iLhxkNYqds <= aVHx2K - (437 - 436);) {
            nF91O4dG[iLhxkNYqds].cBusE2fC = (418 - 417);
            iLhxkNYqds = iLhxkNYqds + (238 - 237);
        }
    }
    {
        int ytpsM9iC;
        ytpsM9iC = aVHx2K - (865 - 863);
        for (; ytpsM9iC >= (512 - 512);) {
            nF91O4dG[ytpsM9iC].cBusE2fC = VkpR3I6A (nF91O4dG, ytpsM9iC, aVHx2K) + (396 - 395);
            ytpsM9iC = ytpsM9iC - (710 - 709);
        }
    }
    {
        int pB7Rbjh2oG;
        pB7Rbjh2oG = (532 - 531);
        for (; pB7Rbjh2oG <= aVHx2K - (307 - 306);) {
            if (nF91O4dG[pB7Rbjh2oG].cBusE2fC > D8NB7k9dZxhY) {
                D8NB7k9dZxhY = nF91O4dG[pB7Rbjh2oG].cBusE2fC;
            }
            pB7Rbjh2oG = pB7Rbjh2oG + (625 - 624);
        }
    }
    printf ("%d", D8NB7k9dZxhY);
}

