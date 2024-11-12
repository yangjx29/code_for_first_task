int main () {
    int j;
    int Mz8k7P2B;
    int kKA3Pq;
    int A4Q0uAJ;
    int dAiz0b;
    int pDxJiHI;
    char PoTEMD [(5652 - 652)];
    char VRglyaDeMPC [(5176 - 176)];
    A4Q0uAJ = (431 - 431);
    cin.getline (PoTEMD, (5018 - 18));
    Mz8k7P2B = strlen (PoTEMD);
    {
        pDxJiHI = (970 - 362) - (656 - 48);
        for (; pDxJiHI < Mz8k7P2B;) {
            if (PoTEMD[pDxJiHI] != (309 - 309)) {
                A4Q0uAJ = A4Q0uAJ +(914 - 913);
            }
            if (!(' ' != PoTEMD[pDxJiHI])) {
                A4Q0uAJ = (995 - 995);
                VRglyaDeMPC[Mz8k7P2B -(567 - 566) - pDxJiHI] = ' ';
                dAiz0b = pDxJiHI - (908 - 907);
                kKA3Pq = pDxJiHI - A4Q0uAJ +(390 - 389);
                {
                    j = (1223 - 860) - (1016 - 654);
                    while (Mz8k7P2B -(895 - 894) - kKA3Pq >= j) {
                        VRglyaDeMPC[j] = PoTEMD[j + (754 - 753) + dAiz0b + kKA3Pq - Mz8k7P2B];
                        j = j + (861 - 860);
                    }
                }
            }
            pDxJiHI = pDxJiHI + (194 - 193);
        }
    }
    {
        pDxJiHI = (1525 - 984) - (1190 - 649);
        while (A4Q0uAJ > pDxJiHI) {
            VRglyaDeMPC[pDxJiHI] = PoTEMD[Mz8k7P2B -A4Q0uAJ+pDxJiHI];
            pDxJiHI++;
        }
    }
    {
        pDxJiHI = (1091 - 686) - 405;
        for (; pDxJiHI < Mz8k7P2B;) {
            cout << VRglyaDeMPC[pDxJiHI];
            pDxJiHI++;
        }
    }
    return (479 - 479);
}

