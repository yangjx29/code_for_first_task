void  main () {
    int seMgY6WxXVKU [(828 - 823)] [(752 - 747)];
    int (*zP3Kvms48) [(195 - 190)], TtiGLgT7nVK, YzvLCAky2;
    int Ppxt9DeRY, gMHE3szaCyXY;
    int ta90mt [(710 - 705)];
    zP3Kvms48 = seMgY6WxXVKU;
    for (TtiGLgT7nVK = (44 - 44); TtiGLgT7nVK < (934 - 929); TtiGLgT7nVK++)
        for (YzvLCAky2 = (451 - 451); YzvLCAky2 < (731 - 726); YzvLCAky2++)
            scanf ("%d", &seMgY6WxXVKU[TtiGLgT7nVK][YzvLCAky2]);
    scanf ("%d%d", &Ppxt9DeRY, &gMHE3szaCyXY);
    if (Ppxt9DeRY >= (329 - 329) && Ppxt9DeRY <= (694 - 690) && gMHE3szaCyXY >= (647 - 647) && gMHE3szaCyXY <= (813 - 809)) {
        for (TtiGLgT7nVK = (916 - 916); TtiGLgT7nVK < (951 - 946); TtiGLgT7nVK++) {
            ta90mt[TtiGLgT7nVK] = seMgY6WxXVKU[Ppxt9DeRY][TtiGLgT7nVK];
            seMgY6WxXVKU[Ppxt9DeRY][TtiGLgT7nVK] = seMgY6WxXVKU[gMHE3szaCyXY][TtiGLgT7nVK];
            seMgY6WxXVKU[gMHE3szaCyXY][TtiGLgT7nVK] = ta90mt[TtiGLgT7nVK];
        }
        for (TtiGLgT7nVK = (784 - 784); TtiGLgT7nVK < (181 - 176); TtiGLgT7nVK++)
            printf ("%d %d %d %d %d\n", seMgY6WxXVKU[TtiGLgT7nVK][(805 - 805)], seMgY6WxXVKU[TtiGLgT7nVK][(695 - 694)], seMgY6WxXVKU[TtiGLgT7nVK][(915 - 913)], seMgY6WxXVKU[TtiGLgT7nVK][(310 - 307)], seMgY6WxXVKU[TtiGLgT7nVK][(839 - 835)]);
    }
    else
        ;
}

