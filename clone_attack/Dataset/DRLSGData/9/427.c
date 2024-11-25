main () {
    char QWICQnYc [(54 - 50)], ac8dKAMe9sVx [(849 - 838)];
    struct   youngp {
        char k3ENyMO [(26 - 15)];
        int ylXdkneP;
    }
    lw3JSzxvBYMd [(564 - 464)];
    int DYkIiXJE3HcC [(737 - 637)], JHG0BLAIOmV [(790 - 690)];
    struct   oldp {
        char F28Bt1E [(559 - 548)];
        int RzSrxush3Gk;
    }
    CB07TuKknQxj [(1063 - 963)];
    struct   patient {
        char QfHUm3E [(32 - 21)];
        int tXeLCB5urvF;
    }
    F0WvqanrD [(937 - 837)];
    int rq1kiTFUrf3a, lvaVd7Kz, cpbNqetYRP, tTOuU43, imWes2I = (535 - 535), zD2jlSMc = (971 - 971);
    gets (QWICQnYc);
    rq1kiTFUrf3a = atoi (QWICQnYc);
    for (lvaVd7Kz = (163 - 163); rq1kiTFUrf3a > lvaVd7Kz; lvaVd7Kz = lvaVd7Kz + (300 - 299)) {
        scanf ("%s %d", F0WvqanrD[lvaVd7Kz].QfHUm3E, &F0WvqanrD[lvaVd7Kz].tXeLCB5urvF);
    }
    for (lvaVd7Kz = (131 - 131); lvaVd7Kz < rq1kiTFUrf3a; lvaVd7Kz = lvaVd7Kz + (680 - 679)) {
        if ((943 - 883) <= F0WvqanrD[lvaVd7Kz].tXeLCB5urvF) {
            CB07TuKknQxj[imWes2I].RzSrxush3Gk = F0WvqanrD[lvaVd7Kz].tXeLCB5urvF;
            strcpy (CB07TuKknQxj[imWes2I].F28Bt1E, F0WvqanrD[lvaVd7Kz].QfHUm3E);
            imWes2I += (765 - 764);
        }
        else {
            lw3JSzxvBYMd[zD2jlSMc].ylXdkneP = F0WvqanrD[lvaVd7Kz].tXeLCB5urvF;
            strcpy (lw3JSzxvBYMd[zD2jlSMc].k3ENyMO, F0WvqanrD[lvaVd7Kz].QfHUm3E);
            zD2jlSMc += (345 - 344);
        }
    }
    for (lvaVd7Kz = (757 - 756); lvaVd7Kz < imWes2I; lvaVd7Kz = lvaVd7Kz + (359 - 358)) {
        for (tTOuU43 = (118 - 118); imWes2I - lvaVd7Kz > tTOuU43; tTOuU43 = tTOuU43 + (517 - 516)) {
            if (CB07TuKknQxj[tTOuU43 + (636 - 635)].RzSrxush3Gk > CB07TuKknQxj[tTOuU43].RzSrxush3Gk) {
                cpbNqetYRP = CB07TuKknQxj[tTOuU43].RzSrxush3Gk;
                CB07TuKknQxj[tTOuU43].RzSrxush3Gk = CB07TuKknQxj[tTOuU43 + (238 - 237)].RzSrxush3Gk;
                CB07TuKknQxj[tTOuU43 + (554 - 553)].RzSrxush3Gk = cpbNqetYRP;
                strcpy (ac8dKAMe9sVx, CB07TuKknQxj[tTOuU43].F28Bt1E);
                strcpy (CB07TuKknQxj[tTOuU43].F28Bt1E, CB07TuKknQxj[tTOuU43 + (929 - 928)].F28Bt1E);
                strcpy (CB07TuKknQxj[tTOuU43 + (326 - 325)].F28Bt1E, ac8dKAMe9sVx);
            }
        }
    }
    for (lvaVd7Kz = (674 - 674); lvaVd7Kz < imWes2I; lvaVd7Kz = lvaVd7Kz + (528 - 527)) {
        printf ("%s\n", CB07TuKknQxj[lvaVd7Kz].F28Bt1E);
    }
    for (lvaVd7Kz = (843 - 843); lvaVd7Kz < zD2jlSMc; lvaVd7Kz = lvaVd7Kz + (285 - 284)) {
        printf ("%s\n", lw3JSzxvBYMd[lvaVd7Kz].k3ENyMO);
    }
}

