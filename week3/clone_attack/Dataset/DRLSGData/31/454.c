struct   student {
    char Iv4BPE8KY [(735 - 725)];
    char sScmAiHD [(143 - 113)];
    char ELQG1b [(344 - 342)];
    char LL8Eh6T [(266 - 261)];
    char dYWXug2S [(204 - 194)];
    char krJyg7pR1hA [(98 - 78)];
    struct   student *rYcvFuXAe;
};
struct   student *Z3bk2XspDySf (void ) {
    struct   student *eTwgZ8L0u;
    struct   student *yiHeJmEjA0Mx;
    eTwgZ8L0u = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s", eTwgZ8L0u->Iv4BPE8KY);
    if (strcmp (eTwgZ8L0u->Iv4BPE8KY, "end")) {
        scanf ("%s%s%s%s%s", eTwgZ8L0u->sScmAiHD, eTwgZ8L0u->ELQG1b, eTwgZ8L0u->LL8Eh6T, eTwgZ8L0u->dYWXug2S, eTwgZ8L0u->krJyg7pR1hA);
        yiHeJmEjA0Mx = eTwgZ8L0u;
        eTwgZ8L0u->rYcvFuXAe = NULL;
    }
    for (; strcmp (eTwgZ8L0u->Iv4BPE8KY, "end");) {
        eTwgZ8L0u = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", eTwgZ8L0u->Iv4BPE8KY);
        if (strcmp (eTwgZ8L0u->Iv4BPE8KY, "end")) {
            scanf ("%s%s%s%s%s", eTwgZ8L0u->sScmAiHD, eTwgZ8L0u->ELQG1b, eTwgZ8L0u->LL8Eh6T, eTwgZ8L0u->dYWXug2S, eTwgZ8L0u->krJyg7pR1hA);
            eTwgZ8L0u->rYcvFuXAe = yiHeJmEjA0Mx;
            yiHeJmEjA0Mx = eTwgZ8L0u;
        }
    }
    return (yiHeJmEjA0Mx);
}

void  main () {
    struct   student *eTwgZ8L0u;
    eTwgZ8L0u = Z3bk2XspDySf ();
    for (; eTwgZ8L0u != NULL;) {
        printf ("%s %s %s %s %s %s\n", eTwgZ8L0u->Iv4BPE8KY, eTwgZ8L0u->sScmAiHD, eTwgZ8L0u->ELQG1b, eTwgZ8L0u->LL8Eh6T, eTwgZ8L0u->dYWXug2S, eTwgZ8L0u->krJyg7pR1hA);
        eTwgZ8L0u = eTwgZ8L0u->rYcvFuXAe;
    }
}

