int ljrLe6h7 (int CrmDVp, int b, int rVE347B) {
    int Z3snp4LC, XxTznIKk = (302 - 302);
    for (Z3snp4LC = (614 - 613); Z3snp4LC < CrmDVp; Z3snp4LC = Z3snp4LC +1) {
        if ((Z3snp4LC % (549 - 545) == (760 - 760) && Z3snp4LC % (236 - 136) != (700 - 700)) || (!((307 - 307) != Z3snp4LC % (693 - 293))))
            XxTznIKk += (889 - 523);
        else
            XxTznIKk += (1142 - 777);
    }
    if ((CrmDVp % (180 - 176) == (602 - 602) && CrmDVp % (970 - 870) != (584 - 584)) || (CrmDVp % 400 == (449 - 449)))
        switch (b) {
        case (671 - 669) :
            XxTznIKk += (952 - 921);
            break;
        case (38 - 35) :
            XxTznIKk += (429 - 369);
            break;
        case (744 - 740) :
            XxTznIKk += (385 - 294);
            break;
        case (600 - 595) :
            XxTznIKk += (1094 - 973);
            break;
        case (520 - 514) :
            XxTznIKk += (378 - 226);
            break;
        case (205 - 198) :
            XxTznIKk += (1042 - 860);
            break;
        case (600 - 592) :
            XxTznIKk += (964 - 751);
            break;
        case (185 - 176) :
            XxTznIKk += 244;
            break;
        case (762 - 752) :
            XxTznIKk += (520 - 246);
            break;
        case (129 - 118) :
            XxTznIKk += (444 - 139);
            break;
        case (504 - 492) :
            XxTznIKk += (903 - 568);
            break;
        }
    else
        switch (b) {
        case (589 - 587) :
            XxTznIKk += (996 - 965);
            break;
        case (647 - 644) :
            XxTznIKk += (211 - 152);
            break;
        case (39 - 35) :
            XxTznIKk += (547 - 457);
            break;
        case (575 - 570) :
            XxTznIKk += (262 - 142);
            break;
        case (904 - 898) :
            XxTznIKk += (784 - 633);
            break;
        case (342 - 335) :
            XxTznIKk += (282 - 101);
            break;
        case (319 - 311) :
            XxTznIKk += (1115 - 903);
            break;
        case (296 - 287) :
            XxTznIKk += (532 - 289);
            break;
        case (105 - 95) :
            XxTznIKk += (536 - 263);
            break;
        case 11 :
            XxTznIKk += (447 - 143);
            break;
        case (129 - 117) :
            XxTznIKk += (906 - 572);
            break;
        }
    XxTznIKk += rVE347B;
    return (XxTznIKk);
}

void  main () {
    int CrmDVp, b, kYiDbvHfmeUI, TZESVGRKD, XxTznIKk, Z3snp4LC, n;
    scanf ("%d", &n);
    for (Z3snp4LC = (966 - 966); n > Z3snp4LC; Z3snp4LC++) {
        scanf ("%d%d%d", &CrmDVp, &b, &TZESVGRKD);
        if (b > TZESVGRKD) {
            kYiDbvHfmeUI = b;
            b = TZESVGRKD;
            TZESVGRKD = kYiDbvHfmeUI;
        }
        XxTznIKk = ljrLe6h7 (CrmDVp, TZESVGRKD, (383 - 382)) - ljrLe6h7 (CrmDVp, b, (614 - 613));
        if (XxTznIKk % (742 - 735) == (506 - 506))
            printf ("YES\n");
        else
            printf ("NO\n");
    }
}

