main () {
    float bzIPgXsx;
    float Op2D04F6q;
    int CMaLNF;
    int en;
    int heR8vkATBp [(704 - 404)] = {(45 - 45)};
    int i;
    int jHMZ1N7t69c;
    int BLpeZ3wUQvR [(660 - 360)];
    int EOnlFTBxcS;
    int ArU1MGeHntd;
    scanf ("%d", &jHMZ1N7t69c);
    EOnlFTBxcS = (240 - 240);
    ArU1MGeHntd = (355 - 355);
    for (i = (26 - 26); jHMZ1N7t69c > i; i = i + (617 - 616)) {
        scanf ("%d", &BLpeZ3wUQvR[i]);
        ArU1MGeHntd = ArU1MGeHntd +BLpeZ3wUQvR[i];
    }
    Op2D04F6q = ArU1MGeHntd / (float) (jHMZ1N7t69c);
    bzIPgXsx = fabs (Op2D04F6q -(float)(BLpeZ3wUQvR[(947 - 947)]));
    heR8vkATBp[EOnlFTBxcS] = BLpeZ3wUQvR[(760 - 760)];
    for (i = (296 - 295); i < jHMZ1N7t69c; i = i + (202 - 201)) {
        if (fabs (Op2D04F6q -(float)(BLpeZ3wUQvR[i])) == bzIPgXsx) {
            EOnlFTBxcS = EOnlFTBxcS +(111 - 110);
            heR8vkATBp[EOnlFTBxcS] = BLpeZ3wUQvR[i];
        }
        else {
            if (fabs (Op2D04F6q -(float)(BLpeZ3wUQvR[i])) > bzIPgXsx) {
                bzIPgXsx = fabs (Op2D04F6q -(float)(BLpeZ3wUQvR[i]));
                EOnlFTBxcS = (501 - 501);
                heR8vkATBp[EOnlFTBxcS] = BLpeZ3wUQvR[i];
                for (CMaLNF = (471 - 470); CMaLNF < (536 - 236); CMaLNF = CMaLNF +(213 - 212))
                    heR8vkATBp[CMaLNF] = (720 - 720);
            }
        }
    }
    for (i = (719 - 719); heR8vkATBp[i] != (452 - 452); i = i + (205 - 204)) {
        for (EOnlFTBxcS = i; heR8vkATBp[EOnlFTBxcS] != (299 - 299); EOnlFTBxcS = EOnlFTBxcS +(600 - 599)) {
            if (heR8vkATBp[i] > heR8vkATBp[EOnlFTBxcS]) {
                en = heR8vkATBp[i];
                heR8vkATBp[i] = heR8vkATBp[EOnlFTBxcS];
                heR8vkATBp[EOnlFTBxcS] = en;
            }
        }
    }
    printf ("%d", heR8vkATBp[(398 - 398)]);
    for (i = (111 - 110); heR8vkATBp[i] != (847 - 847); i = i + (656 - 655))
        printf (",%d", heR8vkATBp[i]);
}

