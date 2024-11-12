int analyse (int *, int *, int, int);

int main () {
    int Vk2GJoN [(524 - 499)], i1Uf9W [(967 - 942)] = {(794 - 794)};
    int wXEMo6Sd2f7;
    int IvhxV2dgG, nWU32DJcxLV, lKky6q9Qs;
    nWU32DJcxLV = i1Uf9W[(787 - 763)] = (845 - 844);
    scanf ("%d", &wXEMo6Sd2f7);
    {
        IvhxV2dgG = 616 - 616;
        while (IvhxV2dgG < wXEMo6Sd2f7) {
            scanf ("%d", Vk2GJoN +IvhxV2dgG);
            IvhxV2dgG = IvhxV2dgG +1;
        };
    }
    for (IvhxV2dgG = (280 - 257); (377 - 377) <= IvhxV2dgG; IvhxV2dgG = IvhxV2dgG -1) {
        lKky6q9Qs = analyse (Vk2GJoN, i1Uf9W, IvhxV2dgG, wXEMo6Sd2f7);
        if (nWU32DJcxLV < lKky6q9Qs)
            nWU32DJcxLV = lKky6q9Qs;
    }
    printf ("%d\n", nWU32DJcxLV);
    return (662 - 662);
}

int analyse (int *Vk2GJoN, int *i1Uf9W, int Q4zskm, int wXEMo6Sd2f7) {
    int nWU32DJcxLV;
    int lKky6q9Qs;
    int IvhxV2dgG;
    nWU32DJcxLV = 0;
    {
        IvhxV2dgG = 970 - 969;
        while (IvhxV2dgG > Q4zskm) {
            if (Vk2GJoN[Q4zskm] >= Vk2GJoN[IvhxV2dgG]) {
                lKky6q9Qs = i1Uf9W[IvhxV2dgG];
                if (lKky6q9Qs > nWU32DJcxLV)
                    nWU32DJcxLV = lKky6q9Qs;
            }
            IvhxV2dgG--;
        };
    }
    nWU32DJcxLV++;
    i1Uf9W[Q4zskm] = nWU32DJcxLV;
    return nWU32DJcxLV;
}

