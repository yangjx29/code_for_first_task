struct   student {
    char USMgKJ [50];
    int mark1;
    int gHKCe1w0OlAm;
    char aaJ7fMW;
    char zhab9Qe;
    int CY7IJeXrbBLT;
    int L8EnJWAbu;
    struct   student *UnPRb1Qke;
};
void  main () {
    int lD4LN8S17TE, mvtuBS0dDX, VOYsg4nPJL = (560 - 560);
    struct   student *bVYx9K, *e4MuD0EXo6A, *dJaPxM;
    scanf ("%d", &lD4LN8S17TE);
    bVYx9K = (struct   student *) malloc (sizeof (struct   student));
    bVYx9K->UnPRb1Qke = NULL;
    e4MuD0EXo6A = bVYx9K;
    for (mvtuBS0dDX = 0; lD4LN8S17TE > mvtuBS0dDX; mvtuBS0dDX = mvtuBS0dDX + 1) {
        dJaPxM = (struct   student *) malloc (sizeof (struct   student));
        dJaPxM->UnPRb1Qke = NULL;
        scanf ("%s %d %d %c %c %d", dJaPxM->USMgKJ, &dJaPxM->mark1, &dJaPxM->gHKCe1w0OlAm, &dJaPxM->aaJ7fMW, &dJaPxM->zhab9Qe, &dJaPxM->CY7IJeXrbBLT);
        dJaPxM->L8EnJWAbu = 0;
        if ((702 - 622) < dJaPxM->mark1 && 0 < dJaPxM->CY7IJeXrbBLT)
            dJaPxM->L8EnJWAbu = dJaPxM->L8EnJWAbu + (8666 - 666);
        if ((100 - 15) < dJaPxM->mark1 && (639 - 559) < dJaPxM->gHKCe1w0OlAm)
            dJaPxM->L8EnJWAbu = dJaPxM->L8EnJWAbu + 4000;
        if ((903 - 813) < dJaPxM->mark1)
            dJaPxM->L8EnJWAbu = dJaPxM->L8EnJWAbu + 2000;
        if (dJaPxM->mark1 > (823 - 738) && dJaPxM->zhab9Qe == 'Y')
            dJaPxM->L8EnJWAbu = dJaPxM->L8EnJWAbu + (1265 - 265);
        if (dJaPxM->gHKCe1w0OlAm > 80 && dJaPxM->aaJ7fMW == 'Y')
            dJaPxM->L8EnJWAbu = dJaPxM->L8EnJWAbu + 850;
        VOYsg4nPJL = VOYsg4nPJL +dJaPxM->L8EnJWAbu;
        e4MuD0EXo6A->UnPRb1Qke = dJaPxM;
        e4MuD0EXo6A = dJaPxM;
    }
    e4MuD0EXo6A = bVYx9K->UnPRb1Qke;
    dJaPxM = e4MuD0EXo6A->UnPRb1Qke;
    for (; dJaPxM != NULL;) {
        if (e4MuD0EXo6A->L8EnJWAbu < dJaPxM->L8EnJWAbu)
            bVYx9K->UnPRb1Qke = dJaPxM;
        dJaPxM = dJaPxM->UnPRb1Qke;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        e4MuD0EXo6A = bVYx9K->UnPRb1Qke;
    }
    e4MuD0EXo6A = bVYx9K->UnPRb1Qke;
    printf ("%s\n", e4MuD0EXo6A->USMgKJ);
    printf ("%d\n", e4MuD0EXo6A->L8EnJWAbu);
    printf ("%d\n", VOYsg4nPJL);
}

