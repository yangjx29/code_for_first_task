struct   student {
    char rohnZz [10];
    char R9lXH4CP6eEN [(267 - 237)];
    char FQByPs7TbYS [(570 - 568)];
    char age [5];
    char DFu9QH [10];
    char S2SHQgn [20];
    struct   student *WfoXtrgP;
};
struct   student *xqfC0YbUnsLB (void ) {
    struct   student *skKwYgot;
    struct   student *kPKj45Rmcp;
    skKwYgot = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s", skKwYgot->rohnZz);
    if (strcmp (skKwYgot->rohnZz, "end")) {
        scanf ("%s%s%s%s%s", skKwYgot->R9lXH4CP6eEN, skKwYgot->FQByPs7TbYS, skKwYgot->age, skKwYgot->DFu9QH, skKwYgot->S2SHQgn);
        kPKj45Rmcp = skKwYgot;
        skKwYgot->WfoXtrgP = NULL;
    }
    while (strcmp (skKwYgot->rohnZz, "end")) {
        skKwYgot = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", skKwYgot->rohnZz);
        if (strcmp (skKwYgot->rohnZz, "end")) {
            scanf ("%s%s%s%s%s", skKwYgot->R9lXH4CP6eEN, skKwYgot->FQByPs7TbYS, skKwYgot->age, skKwYgot->DFu9QH, skKwYgot->S2SHQgn);
            skKwYgot->WfoXtrgP = kPKj45Rmcp;
            kPKj45Rmcp = skKwYgot;
        };
    }
    return (kPKj45Rmcp);
}

void  main () {
    struct   student *skKwYgot;
    skKwYgot = xqfC0YbUnsLB ();
    for (; skKwYgot != NULL;) {
        printf ("%s %s %s %s %s %s\n", skKwYgot->rohnZz, skKwYgot->R9lXH4CP6eEN, skKwYgot->FQByPs7TbYS, skKwYgot->age, skKwYgot->DFu9QH, skKwYgot->S2SHQgn);
        skKwYgot = skKwYgot->WfoXtrgP;
    };
}

