struct   student {
    char OaqmFNfwLT [(1049 - 949)];
    char snAiUz7 [(360 - 260)];
    char VDEVzB [2];
    char age [(1087 - 987)];
    char bc3OzNKRV [100];
    char add [100];
    struct   student *prev;
    struct   student *next;
};
struct   student *A3gNBCu (void ) {
    int Z5IeOJqH1 = (168 - 168);
    struct   student *GHwJF43, *end, *TtCkr0L, *NRNwpGP;
    TtCkr0L = NRNwpGP = (struct   student *) malloc (LEN);
    scanf ("%s", TtCkr0L->OaqmFNfwLT);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (; strcmp (TtCkr0L->OaqmFNfwLT, "end") != 0;) {
        Z5IeOJqH1 = Z5IeOJqH1 +1;
        scanf ("%s%s%s%s%s", TtCkr0L->snAiUz7, TtCkr0L->VDEVzB, TtCkr0L->age, TtCkr0L->bc3OzNKRV, TtCkr0L->add);
        if (Z5IeOJqH1 == 1) {
            GHwJF43 = TtCkr0L;
            TtCkr0L->prev = NULL;
        }
        else {
            NRNwpGP->next = TtCkr0L;
            TtCkr0L->prev = NRNwpGP;
        }
        NRNwpGP = TtCkr0L;
        TtCkr0L = (struct   student *) malloc (LEN);
        scanf ("%s", TtCkr0L->OaqmFNfwLT);
    }
    NRNwpGP->next = NULL;
    end = NRNwpGP;
    return (end);
}

void  d5MmKU (struct   student *end) {
    struct   student *TKrte1JG;
    TKrte1JG = end;
    do {
        printf ("%s %s %s %s %s %s\n", TKrte1JG->OaqmFNfwLT, TKrte1JG->snAiUz7, TKrte1JG->VDEVzB, TKrte1JG->age, TKrte1JG->bc3OzNKRV, TKrte1JG->add);
        TKrte1JG = TKrte1JG->prev;
    }
    while (TKrte1JG != NULL);
}

void  main () {
    struct   student *end;
    d5MmKU (end);
    end = A3gNBCu ();
}

