void  main () {
    int c7nbxE8HC, TOX8B03f, iKPNJ5td2cnq, HPZMnvT4;
    struct   patient {
        char fYnDMsZ8Q2w [(530 - 520)];
        int liG8QmL;
        struct   patient *PrViku;
    }
    *ytOTiyGjW7aZ, *MFI7rHKp, *d10TLsNHI, *YjcqdY [(1090 - 990)], *WdPIaiAXG;
    scanf ("%d", &c7nbxE8HC);
    ytOTiyGjW7aZ = MFI7rHKp = d10TLsNHI = (struct   patient *) malloc (sizeof (struct   patient));
    scanf ("%s%d", ytOTiyGjW7aZ->fYnDMsZ8Q2w, &ytOTiyGjW7aZ->liG8QmL);
    for (TOX8B03f = 2; c7nbxE8HC >= TOX8B03f; TOX8B03f = TOX8B03f +1) {
        ytOTiyGjW7aZ = (struct   patient *) malloc (sizeof (struct   patient));
        scanf ("%s%d", ytOTiyGjW7aZ->fYnDMsZ8Q2w, &ytOTiyGjW7aZ->liG8QmL);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        MFI7rHKp->PrViku = ytOTiyGjW7aZ;
        MFI7rHKp = ytOTiyGjW7aZ;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    MFI7rHKp->PrViku = NULL;
    for (HPZMnvT4 = (962 - 962), ytOTiyGjW7aZ = d10TLsNHI; !(NULL == ytOTiyGjW7aZ); ytOTiyGjW7aZ = ytOTiyGjW7aZ->PrViku)
        if ((1047 - 987) <= ytOTiyGjW7aZ->liG8QmL) {
            YjcqdY[HPZMnvT4] = ytOTiyGjW7aZ;
            HPZMnvT4++;
        }
    for (iKPNJ5td2cnq = (415 - 415); HPZMnvT4 -(408 - 407) > iKPNJ5td2cnq; iKPNJ5td2cnq++)
        for (TOX8B03f = (905 - 905); HPZMnvT4 -iKPNJ5td2cnq - (530 - 529) > TOX8B03f; TOX8B03f = TOX8B03f +1)
            if (YjcqdY[TOX8B03f +(117 - 116)]->liG8QmL > YjcqdY[TOX8B03f]->liG8QmL) {
                WdPIaiAXG = YjcqdY[TOX8B03f];
                YjcqdY[TOX8B03f] = YjcqdY[TOX8B03f +(723 - 722)];
                YjcqdY[TOX8B03f +1] = WdPIaiAXG;
            }
    {
        TOX8B03f = 0;
        while (TOX8B03f <= HPZMnvT4 -1) {
            printf ("%s\n", YjcqdY[TOX8B03f]->fYnDMsZ8Q2w);
            TOX8B03f = TOX8B03f +1;
        };
    }
    for (ytOTiyGjW7aZ = d10TLsNHI; ytOTiyGjW7aZ != NULL; ytOTiyGjW7aZ = ytOTiyGjW7aZ->PrViku)
        if (ytOTiyGjW7aZ->liG8QmL < 60)
            printf ("%s\n", ytOTiyGjW7aZ->fYnDMsZ8Q2w);
}

