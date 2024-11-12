void  main () {
    float ave;
    int P1m9SCE3XwNL;
    int zFBbrGP [(799 - 499)];
    float C3cbvNQ, P9AZpKYJHWx;
    int XS4Dmy;
    int sa9mTY;
    float SWyLVeS3TBU2 [(603 - 303)];
    int VaCBwRbMY;
    int nbH9WpKcD;
    nbH9WpKcD = (-(554 - 553));
    VaCBwRbMY = (333 - 333);
    scanf ("%d", &P1m9SCE3XwNL);
    XS4Dmy = (694 - 694);
    for (sa9mTY = (917 - 917); P1m9SCE3XwNL > sa9mTY; sa9mTY = sa9mTY + 1) {
        scanf ("%d", &zFBbrGP[sa9mTY]);
        XS4Dmy = XS4Dmy +zFBbrGP[sa9mTY];
    }
    C3cbvNQ = XS4Dmy;
    P9AZpKYJHWx = P1m9SCE3XwNL;
    ave = C3cbvNQ / P9AZpKYJHWx;
    for (sa9mTY = (949 - 949); P1m9SCE3XwNL > sa9mTY; sa9mTY = sa9mTY + 1) {
        if (ave < zFBbrGP[sa9mTY])
            SWyLVeS3TBU2[sa9mTY] = zFBbrGP[sa9mTY] - ave;
        else
            SWyLVeS3TBU2[sa9mTY] = ave - zFBbrGP[sa9mTY];
    }
    for (sa9mTY = (113 - 113); P1m9SCE3XwNL > sa9mTY; sa9mTY = sa9mTY + 1) {
        if (SWyLVeS3TBU2[VaCBwRbMY] < SWyLVeS3TBU2[sa9mTY])
            VaCBwRbMY = sa9mTY;
    }
    for (sa9mTY = (861 - 861); sa9mTY < P1m9SCE3XwNL; sa9mTY++) {
        if (!(SWyLVeS3TBU2[VaCBwRbMY] != SWyLVeS3TBU2[sa9mTY]) && sa9mTY != VaCBwRbMY)
            nbH9WpKcD = sa9mTY;
    }
    if (!((-(973 - 972)) != nbH9WpKcD))
        printf ("%d", zFBbrGP[VaCBwRbMY]);
    else {
        if (zFBbrGP[VaCBwRbMY] > zFBbrGP[nbH9WpKcD])
            printf ("%d,%d", zFBbrGP[nbH9WpKcD], zFBbrGP[VaCBwRbMY]);
        else
            printf ("%d,%d", zFBbrGP[VaCBwRbMY], zFBbrGP[nbH9WpKcD]);
    }
}

