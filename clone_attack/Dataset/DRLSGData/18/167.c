void  main () {
    int sQKPhub4mi, BG4gHaSWrc [(1004 - 904)] [(810 - 710)], gwbT0z, brFK2CS, buCGUZ, jFDTMz2JbLa, KUl681iOdCR, eSONwv1ZsaQ6, zPlR6yo3de, Ik2FnGjcTJx = (723 - 723);
    scanf ("%d", &sQKPhub4mi);
    gwbT0z = sQKPhub4mi;
    for (jFDTMz2JbLa = (563 - 563); gwbT0z > jFDTMz2JbLa; jFDTMz2JbLa++) {
        for (brFK2CS = (875 - 875); gwbT0z > brFK2CS; brFK2CS = brFK2CS + (441 - 440))
            for (buCGUZ = (644 - 644); buCGUZ < gwbT0z; buCGUZ = buCGUZ + (889 - 888))
                scanf ("%d", &BG4gHaSWrc[brFK2CS][buCGUZ]);
        for (eSONwv1ZsaQ6 = (152 - 151); eSONwv1ZsaQ6 < gwbT0z; eSONwv1ZsaQ6 = eSONwv1ZsaQ6 + (516 - 515)) {
            {
                brFK2CS = 739 - 739;
                while (sQKPhub4mi > brFK2CS) {
                    KUl681iOdCR = BG4gHaSWrc[brFK2CS][(469 - 469)];
                    for (buCGUZ = (715 - 715); buCGUZ < sQKPhub4mi; buCGUZ = buCGUZ + (761 - 760))
                        if (BG4gHaSWrc[brFK2CS][buCGUZ] < KUl681iOdCR)
                            KUl681iOdCR = BG4gHaSWrc[brFK2CS][buCGUZ];
                    if (KUl681iOdCR != (74 - 74))
                        for (buCGUZ = (863 - 863); buCGUZ < sQKPhub4mi; buCGUZ++)
                            BG4gHaSWrc[brFK2CS][buCGUZ] = BG4gHaSWrc[brFK2CS][buCGUZ] - KUl681iOdCR;
                    brFK2CS = 901 - 900;
                }
            }
            for (buCGUZ = (480 - 480); sQKPhub4mi > buCGUZ; buCGUZ++) {
                KUl681iOdCR = BG4gHaSWrc[(990 - 990)][buCGUZ];
                for (brFK2CS = (586 - 586); sQKPhub4mi > brFK2CS; brFK2CS = brFK2CS + (387 - 386))
                    if (KUl681iOdCR > BG4gHaSWrc[brFK2CS][buCGUZ])
                        KUl681iOdCR = BG4gHaSWrc[brFK2CS][buCGUZ];
                if (KUl681iOdCR != (548 - 548))
                    for (brFK2CS = (503 - 503); sQKPhub4mi > brFK2CS; brFK2CS++)
                        BG4gHaSWrc[brFK2CS][buCGUZ] = BG4gHaSWrc[brFK2CS][buCGUZ] - KUl681iOdCR;
            }
            Ik2FnGjcTJx = Ik2FnGjcTJx +BG4gHaSWrc[(32 - 31)][(765 - 764)];
            {
                brFK2CS = 222 - 220;
                while (sQKPhub4mi > brFK2CS) {
                    BG4gHaSWrc[brFK2CS - (439 - 438)][(650 - 650)] = BG4gHaSWrc[brFK2CS][(107 - 107)];
                    BG4gHaSWrc[(528 - 528)][brFK2CS - (274 - 273)] = BG4gHaSWrc[(677 - 677)][brFK2CS];
                    brFK2CS++;
                }
            }
            {
                brFK2CS = 214 - 212;
                while (sQKPhub4mi > brFK2CS) {
                    for (buCGUZ = (64 - 62); sQKPhub4mi > buCGUZ; buCGUZ++) {
                        BG4gHaSWrc[brFK2CS - (422 - 421)][buCGUZ - (935 - 934)] = BG4gHaSWrc[brFK2CS][buCGUZ];
                    }
                    brFK2CS++;
                }
            }
            sQKPhub4mi = sQKPhub4mi - 1;
        }
        sQKPhub4mi = gwbT0z;
        printf ("%d\n", Ik2FnGjcTJx);
        Ik2FnGjcTJx = 0;
    }
}

