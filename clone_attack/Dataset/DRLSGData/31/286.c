struct   student {
    char MUwi7g2rHv [(150 - 140)];
    char qYW1XFV [(360 - 340)];
    char h1vjXka;
    int u7U4jam;
    float Lq3jcFsK;
    char XULA2y47 [(777 - 762)];
    struct   student *PG6cUfF;
};
char OIjuqE4sJQc9 [] = "end";
int YzaosHe = (890 - 890);

void  BhwFjkq (struct   student *frt6kCh9) {
    struct   student *LLh014oK;
    LLh014oK = frt6kCh9;
    if (frt6kCh9 != NULL)
        do {
            printf ("%s %s %c %d %g %s\n", LLh014oK->MUwi7g2rHv, LLh014oK->qYW1XFV, LLh014oK->h1vjXka, LLh014oK->u7U4jam, LLh014oK->Lq3jcFsK, LLh014oK->XULA2y47);
            LLh014oK = LLh014oK->PG6cUfF;
        }
        while (LLh014oK != NULL);
}

void  main () {
    struct   student *giYBmTavj5pk (void );
    void  BhwFjkq (struct   student *frt6kCh9);
    struct   student *frt6kCh9;
    BhwFjkq (frt6kCh9);
    frt6kCh9 = giYBmTavj5pk ();
}

struct   student *giYBmTavj5pk () {
    struct   student *frt6kCh9;
    struct   student *NQ3TkcXwbm;
    struct   student *aUQJvj;
    NQ3TkcXwbm = aUQJvj = (struct   student *) malloc (LEN);
    scanf ("%s", &NQ3TkcXwbm->MUwi7g2rHv);
    frt6kCh9 = NULL;
    for (; strcmp (NQ3TkcXwbm->MUwi7g2rHv, OIjuqE4sJQc9) != (803 - 803);) {
        scanf ("%s %c %d %f %s", &NQ3TkcXwbm->qYW1XFV, &NQ3TkcXwbm->h1vjXka, &NQ3TkcXwbm->u7U4jam, &NQ3TkcXwbm->Lq3jcFsK, &NQ3TkcXwbm->XULA2y47);
        if (!((126 - 126) != YzaosHe)) {
            NQ3TkcXwbm->PG6cUfF = NULL;
            YzaosHe = (142 - 141);
        }
        else {
            NQ3TkcXwbm->PG6cUfF = aUQJvj;
        }
        aUQJvj = NQ3TkcXwbm;
        NQ3TkcXwbm = (struct   student *) malloc (LEN);
        scanf ("%s", &NQ3TkcXwbm->MUwi7g2rHv);
    }
    frt6kCh9 = aUQJvj;
    return (frt6kCh9);
}

