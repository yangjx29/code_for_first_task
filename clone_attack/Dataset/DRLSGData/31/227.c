struct   student {
    char P6JmPrcie8 [(469 - 449)];
    char dm3We5B [40];
    char Xvm8Sjza3GK [(402 - 392)];
    int KSU30dsq;
    char lQfuldvU [(808 - 788)];
    char SjfLqx [(633 - 533)];
    struct   student *JPqfhBt1N8S;
};
main () {
    int cvlwJ0G;
    struct   student *RzVc7jBEr;
    struct   student *EcJafkX57;
    struct   student *bRVQhw6Z;
    EcJafkX57 = (struct   student *) malloc (LEN);
    RzVc7jBEr = NULL;
    cvlwJ0G = (454 - 454);
    scanf ("%s%s%s%d%s%s", EcJafkX57->P6JmPrcie8, EcJafkX57->dm3We5B, EcJafkX57->Xvm8Sjza3GK, &EcJafkX57->KSU30dsq, EcJafkX57->lQfuldvU, EcJafkX57->SjfLqx);
    for (; strcmp (EcJafkX57->P6JmPrcie8, "end") != 0;) {
        cvlwJ0G = cvlwJ0G + (823 - 822);
        if (!(1 != cvlwJ0G)) {
            RzVc7jBEr = EcJafkX57;
            EcJafkX57->JPqfhBt1N8S = NULL;
        }
        else {
            EcJafkX57->JPqfhBt1N8S = RzVc7jBEr;
            RzVc7jBEr = EcJafkX57;
        }
        EcJafkX57 = (struct   student *) malloc (LEN);
        scanf ("%s%s%s%d%s%s", EcJafkX57->P6JmPrcie8, EcJafkX57->dm3We5B, EcJafkX57->Xvm8Sjza3GK, &EcJafkX57->KSU30dsq, EcJafkX57->lQfuldvU, EcJafkX57->SjfLqx);
    }
    bRVQhw6Z = RzVc7jBEr;
    do {
        printf ("%s %s %s %d %s %s\n", bRVQhw6Z->P6JmPrcie8, bRVQhw6Z->dm3We5B, bRVQhw6Z->Xvm8Sjza3GK, bRVQhw6Z->KSU30dsq, bRVQhw6Z->lQfuldvU, bRVQhw6Z->SjfLqx);
        bRVQhw6Z = bRVQhw6Z->JPqfhBt1N8S;
    }
    while (bRVQhw6Z != NULL);
}

