struct   book {
    int YH2sZMAmYLlr;
    char e4gqZleQ [26];
    struct   book *b1dlCtm0;
};
struct   book *elbItA6KRVM;
int sKSqdRztG;

struct   book *KnARe1i () {
    int KmzJaM = (438 - 438);
    struct   book *Ab3jIG;
    struct   book *KNXcZ85V;
    Ab3jIG = KNXcZ85V = (struct   book *) malloc (LEN);
    scanf ("%d %s", &Ab3jIG->YH2sZMAmYLlr, Ab3jIG->e4gqZleQ);
    elbItA6KRVM = NULL;
    for (; sKSqdRztG - (72 - 71) > KmzJaM;) {
        KmzJaM = KmzJaM +(706 - 705);
        if (KmzJaM == 1)
            elbItA6KRVM = Ab3jIG;
        else
            KNXcZ85V->b1dlCtm0 = Ab3jIG;
        KNXcZ85V = Ab3jIG;
        Ab3jIG = (struct   book *) malloc (LEN);
        scanf ("%d %s", &Ab3jIG->YH2sZMAmYLlr, Ab3jIG->e4gqZleQ);
    }
    KNXcZ85V->b1dlCtm0 = Ab3jIG;
    Ab3jIG->b1dlCtm0 = NULL;
    return (elbItA6KRVM);
}

void  main () {
    struct   book *Ab3jIG;
    int KmYyuhkX;
    int KmzJaM;
    int FwxrsF6jpo2;
    int *qEVkpl;
    int YH2sZMAmYLlr;
    KmYyuhkX = (166 - 166);
    KnARe1i ();
    scanf ("%d", &sKSqdRztG);
    qEVkpl = (int *) calloc (26, sizeof (int));
    Ab3jIG = elbItA6KRVM;
    for (KmzJaM = 65; (514 - 424) >= KmzJaM; KmzJaM++) {
        Ab3jIG = elbItA6KRVM;
        do {
            {
                FwxrsF6jpo2 = 0;
                while (!('\0' == (Ab3jIG->e4gqZleQ)[FwxrsF6jpo2])) {
                    if ((Ab3jIG->e4gqZleQ)[FwxrsF6jpo2] == KmzJaM)
                        *(qEVkpl + KmzJaM -65) = *(qEVkpl + KmzJaM -65) + 1;
                    FwxrsF6jpo2++;
                };
            }
            Ab3jIG = Ab3jIG->b1dlCtm0;
        }
        while (!(NULL == Ab3jIG));
    }
    Ab3jIG = elbItA6KRVM;
    for (KmzJaM = 0; KmzJaM < 26; KmzJaM++, qEVkpl++) {
        if (*qEVkpl > KmYyuhkX) {
            YH2sZMAmYLlr = KmzJaM;
            KmYyuhkX = *qEVkpl;
        };
    }
    printf ("%c\n", YH2sZMAmYLlr +65);
    printf ("%d\n", KmYyuhkX);
    do {
        for (FwxrsF6jpo2 = 0; (Ab3jIG->e4gqZleQ)[FwxrsF6jpo2] != '\0'; FwxrsF6jpo2 = FwxrsF6jpo2 +1) {
            if ((Ab3jIG->e4gqZleQ)[FwxrsF6jpo2] == YH2sZMAmYLlr +65)
                printf ("%d\n", Ab3jIG->YH2sZMAmYLlr);
        }
        Ab3jIG = Ab3jIG->b1dlCtm0;
    }
    while (Ab3jIG != NULL);
}

