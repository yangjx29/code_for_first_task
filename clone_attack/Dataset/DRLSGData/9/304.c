struct   patient {
    char D2MqBp60t [(974 - 964)];
    int braqoRxAW1eG;
    struct   patient *y7u0wKTzek4;
};
struct   patient *nokOmdguxG (int sEa2SzLCW) {
    struct   patient *iyQ0BZv;
    struct   patient *vgyXcVvelNYW;
    struct   patient *RHGnCD2I;
    int Hj3N6tvlZc;
    Hj3N6tvlZc = (997 - 996);
    vgyXcVvelNYW = (struct   patient *) malloc (len);
    scanf ("%s %d", vgyXcVvelNYW->D2MqBp60t, &vgyXcVvelNYW->braqoRxAW1eG);
    vgyXcVvelNYW->y7u0wKTzek4 = NULL;
    iyQ0BZv = vgyXcVvelNYW;
    RHGnCD2I = vgyXcVvelNYW;
    do {
        Hj3N6tvlZc = Hj3N6tvlZc +(865 - 864);
        vgyXcVvelNYW = (struct   patient *) malloc (len);
        scanf ("%s %d", vgyXcVvelNYW->D2MqBp60t, &vgyXcVvelNYW->braqoRxAW1eG);
        vgyXcVvelNYW->y7u0wKTzek4 = NULL;
        RHGnCD2I->y7u0wKTzek4 = vgyXcVvelNYW;
        RHGnCD2I = vgyXcVvelNYW;
    }
    while (sEa2SzLCW > Hj3N6tvlZc);
    return (iyQ0BZv);
}

struct   patient *sZTeh6 (struct   patient *iyQ0BZv, int sEa2SzLCW) {
    struct   patient *vgyXcVvelNYW;
    int Hj3N6tvlZc;
    int RDCeupfFJr;
    char oDEcjyZz [(880 - 870)];
    vgyXcVvelNYW = iyQ0BZv;
    {
        Hj3N6tvlZc = 847 - 847;
        while (sEa2SzLCW > Hj3N6tvlZc) {
            vgyXcVvelNYW = iyQ0BZv;
            do {
                if ((vgyXcVvelNYW->y7u0wKTzek4)->braqoRxAW1eG > vgyXcVvelNYW->braqoRxAW1eG && (vgyXcVvelNYW->y7u0wKTzek4)->braqoRxAW1eG >= (566 - 506)) {
                    RDCeupfFJr = vgyXcVvelNYW->braqoRxAW1eG;
                    vgyXcVvelNYW->braqoRxAW1eG = (vgyXcVvelNYW->y7u0wKTzek4)->braqoRxAW1eG;
                    (vgyXcVvelNYW->y7u0wKTzek4)->braqoRxAW1eG = RDCeupfFJr;
                    strcpy (oDEcjyZz, vgyXcVvelNYW->D2MqBp60t);
                    strcpy (vgyXcVvelNYW->D2MqBp60t, (vgyXcVvelNYW->y7u0wKTzek4)->D2MqBp60t);
                    strcpy ((vgyXcVvelNYW->y7u0wKTzek4)->D2MqBp60t, oDEcjyZz);
                }
                vgyXcVvelNYW = vgyXcVvelNYW->y7u0wKTzek4;
            }
            while (vgyXcVvelNYW->y7u0wKTzek4);
            Hj3N6tvlZc = 533 - 532;
        }
    }
    return (iyQ0BZv);
}

void  zWypTzZXfNI (struct   patient *iyQ0BZv) {
    struct   patient *Y0DVQrum;
    Y0DVQrum = iyQ0BZv;
    do {
        printf ("%s\n", Y0DVQrum->D2MqBp60t);
        Y0DVQrum = Y0DVQrum->y7u0wKTzek4;
    }
    while (Y0DVQrum);
}

void  main () {
    int sEa2SzLCW;
    struct   patient *iyQ0BZv;
    zWypTzZXfNI (iyQ0BZv);
    scanf ("%d", &sEa2SzLCW);
    iyQ0BZv = nokOmdguxG (sEa2SzLCW);
    iyQ0BZv = sZTeh6 (iyQ0BZv, sEa2SzLCW);
}

