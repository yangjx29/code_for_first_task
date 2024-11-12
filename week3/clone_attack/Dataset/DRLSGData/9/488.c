struct   patient {
    char hTwIgW [(912 - 902)];
    int Lcg2qOov4;
    struct   patient *ByrKU4HlcQO;
    struct   patient *P2C9A4ZXJgs;
};
void  main () {
    int wB04jXqGcVf;
    void  C8ogHplXIn (struct   patient ** MM0g75sc);
    int g3V2xnhQZ;
    struct   patient *MM0g75sc;
    struct   patient *Ye1hJo3Mj0lS;
    struct   patient *KTiUJyO368;
    scanf ("%d", &g3V2xnhQZ);
    Ye1hJo3Mj0lS = (struct   patient *) malloc (sizeof (struct   patient));
    KTiUJyO368 = Ye1hJo3Mj0lS;
    MM0g75sc = Ye1hJo3Mj0lS;
    Ye1hJo3Mj0lS->P2C9A4ZXJgs = NULL;
    scanf ("%s %d", Ye1hJo3Mj0lS->hTwIgW, &Ye1hJo3Mj0lS->Lcg2qOov4);
    {
        wB04jXqGcVf = (414 - 133) - 281;
        for (; wB04jXqGcVf < g3V2xnhQZ - (630 - 629);) {
            Ye1hJo3Mj0lS = (struct   patient *) malloc (sizeof (struct   patient));
            KTiUJyO368->ByrKU4HlcQO = Ye1hJo3Mj0lS;
            Ye1hJo3Mj0lS->P2C9A4ZXJgs = KTiUJyO368;
            KTiUJyO368 = Ye1hJo3Mj0lS;
            scanf ("%s %d", Ye1hJo3Mj0lS->hTwIgW, &Ye1hJo3Mj0lS->Lcg2qOov4);
            wB04jXqGcVf = wB04jXqGcVf + (553 - 552);
        }
    }
    C8ogHplXIn (&MM0g75sc);
    KTiUJyO368->ByrKU4HlcQO = NULL;
    {
        Ye1hJo3Mj0lS = MM0g75sc;
        while (Ye1hJo3Mj0lS != NULL) {
            printf ("%s\n", Ye1hJo3Mj0lS->hTwIgW);
            Ye1hJo3Mj0lS = Ye1hJo3Mj0lS->ByrKU4HlcQO;
        }
    }
}

void  C8ogHplXIn (struct   patient **MM0g75sc) {
    struct   patient *Ye1hJo3Mj0lS, *KTiUJyO368, *ShFYND4;
    {
        Ye1hJo3Mj0lS = *MM0g75sc;
        while (Ye1hJo3Mj0lS != NULL) {
            if ((800 - 740) <= Ye1hJo3Mj0lS->Lcg2qOov4) {
                ShFYND4 = Ye1hJo3Mj0lS->ByrKU4HlcQO;
                Ye1hJo3Mj0lS->P2C9A4ZXJgs->ByrKU4HlcQO = Ye1hJo3Mj0lS->ByrKU4HlcQO;
                if (Ye1hJo3Mj0lS->ByrKU4HlcQO != NULL)
                    Ye1hJo3Mj0lS->ByrKU4HlcQO->P2C9A4ZXJgs = Ye1hJo3Mj0lS->P2C9A4ZXJgs;
                {
                    KTiUJyO368 = *MM0g75sc;
                    while (KTiUJyO368->ByrKU4HlcQO != NULL) {
                        if (KTiUJyO368->Lcg2qOov4 < Ye1hJo3Mj0lS->Lcg2qOov4) {
                            if (KTiUJyO368->P2C9A4ZXJgs != NULL)
                                KTiUJyO368->P2C9A4ZXJgs->ByrKU4HlcQO = Ye1hJo3Mj0lS;
                            else
                                *MM0g75sc = Ye1hJo3Mj0lS;
                            Ye1hJo3Mj0lS->P2C9A4ZXJgs = KTiUJyO368->P2C9A4ZXJgs;
                            KTiUJyO368->P2C9A4ZXJgs = Ye1hJo3Mj0lS;
                            Ye1hJo3Mj0lS->ByrKU4HlcQO = KTiUJyO368;
                            break;
                        }
                        KTiUJyO368 = KTiUJyO368->ByrKU4HlcQO;
                    }
                }
                if (!(NULL != KTiUJyO368->ByrKU4HlcQO)) {
                    if (KTiUJyO368->Lcg2qOov4 < Ye1hJo3Mj0lS->Lcg2qOov4) {
                        if (KTiUJyO368->P2C9A4ZXJgs != NULL)
                            KTiUJyO368->P2C9A4ZXJgs->ByrKU4HlcQO = Ye1hJo3Mj0lS;
                        else
                            *MM0g75sc = Ye1hJo3Mj0lS;
                        Ye1hJo3Mj0lS->P2C9A4ZXJgs = KTiUJyO368->P2C9A4ZXJgs;
                        KTiUJyO368->P2C9A4ZXJgs = Ye1hJo3Mj0lS;
                        Ye1hJo3Mj0lS->ByrKU4HlcQO = KTiUJyO368;
                    }
                    else {
                        KTiUJyO368->ByrKU4HlcQO = Ye1hJo3Mj0lS;
                        Ye1hJo3Mj0lS->P2C9A4ZXJgs = KTiUJyO368;
                        Ye1hJo3Mj0lS->ByrKU4HlcQO = NULL;
                    }
                }
                if (ShFYND4 != NULL)
                    Ye1hJo3Mj0lS = ShFYND4->P2C9A4ZXJgs;
                else
                    break;
            }
            Ye1hJo3Mj0lS = Ye1hJo3Mj0lS->ByrKU4HlcQO;
        }
    }
}

