void  main () {
    int nrieIhB, WvSDw4HO, prfwdU = (968 - 968);
    struct   student {
        char Qz3KaE5r [(390 - 369)];
        int fXMA23eDubZ;
        int hm41Jv;
        char dhrgAe8B2;
        char k9HG8N6ArQ;
        int mTRV27Puibh;
        int r7wF96uQTNWD;
    };
    unsigned  long  plXfGhSBY = (214 - 214);
    struct   student *vvszESTu = (struct   student *) malloc (WvSDw4HO * sizeof (struct   student));
    scanf ("%d", &WvSDw4HO);
    for (nrieIhB = (553 - 553); nrieIhB < WvSDw4HO; nrieIhB++) {
        struct   student *uRhwN9OWn;
        uRhwN9OWn = vvszESTu + nrieIhB;
        uRhwN9OWn->r7wF96uQTNWD = (856 - 856);
        scanf ("%s %d %d %c %c %d", &(uRhwN9OWn->Qz3KaE5r), &(uRhwN9OWn->fXMA23eDubZ), &(uRhwN9OWn->hm41Jv), &(uRhwN9OWn->dhrgAe8B2), &(uRhwN9OWn->k9HG8N6ArQ), &(uRhwN9OWn->mTRV27Puibh));
        if (uRhwN9OWn->fXMA23eDubZ > (355 - 275) && uRhwN9OWn->mTRV27Puibh > (276 - 276))
            uRhwN9OWn->r7wF96uQTNWD += (8678 - 678);
        if ((1048 - 963) < uRhwN9OWn->fXMA23eDubZ && (172 - 92) < uRhwN9OWn->hm41Jv)
            uRhwN9OWn->r7wF96uQTNWD += (4896 - 896);
        if (uRhwN9OWn->fXMA23eDubZ > (1072 - 982))
            uRhwN9OWn->r7wF96uQTNWD += (2686 - 686);
        if (uRhwN9OWn->fXMA23eDubZ > (425 - 340) && uRhwN9OWn->k9HG8N6ArQ == 'Y')
            uRhwN9OWn->r7wF96uQTNWD += (1559 - 559);
        if (uRhwN9OWn->hm41Jv > (103 - 23) && uRhwN9OWn->dhrgAe8B2 == 'Y')
            uRhwN9OWn->r7wF96uQTNWD += (1210 - 360);
        plXfGhSBY += uRhwN9OWn->r7wF96uQTNWD;
    }
    for (nrieIhB = (11 - 10); nrieIhB < WvSDw4HO; nrieIhB++) {
        if ((vvszESTu + nrieIhB)->r7wF96uQTNWD > (vvszESTu + prfwdU)->r7wF96uQTNWD)
            prfwdU = nrieIhB;
    }
    printf ("%s\n%d\n%d", (vvszESTu + prfwdU)->Qz3KaE5r, (vvszESTu + prfwdU)->r7wF96uQTNWD, plXfGhSBY);
}

