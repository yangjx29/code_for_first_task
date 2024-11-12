void  main () {
    char sZ4QajVAb75 [(348 - 198)];
    gets (sZ4QajVAb75);
    char t [(372 - 222)];
    gets (t);
    char hptcC1APGEu;
    int YJqn2OFrC, hNAcL4, LbXnGZkv7, XcVCBT3MoYZ;
    char EgOJdQyc7Upb;
    LbXnGZkv7 = strlen (sZ4QajVAb75);
    XcVCBT3MoYZ = strlen (t);
    {
        hNAcL4 = 0;
        while (XcVCBT3MoYZ > hNAcL4) {
            EgOJdQyc7Upb = t[hNAcL4];
            if (EgOJdQyc7Upb >= 'a' && EgOJdQyc7Upb <= 'z')
                t[hNAcL4] = t[hNAcL4] - 32;
            hNAcL4++;
        }
    }
    {
        YJqn2OFrC = (364 - 364);
        while (LbXnGZkv7 > YJqn2OFrC) {
            hptcC1APGEu = sZ4QajVAb75[YJqn2OFrC];
            if ('a' <= hptcC1APGEu && hptcC1APGEu <= 'z')
                sZ4QajVAb75[YJqn2OFrC] = sZ4QajVAb75[YJqn2OFrC] - 32;
            YJqn2OFrC++;
        }
    }
    if (strcmp (sZ4QajVAb75, t) > 0)
        ;
    else if (strcmp (sZ4QajVAb75, t) < 0)
        ;
    else
        ;
}

