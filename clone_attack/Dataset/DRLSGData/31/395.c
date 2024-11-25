struct   student {
    char JineCHWZFIhX [(1001 - 991)];
    char hzNfID2PuOW [(170 - 150)];
    char mrEbGYxdk1 [(238 - 233)];
    int emHJ6v;
    char faLHFpTA [(437 - 417)];
    char d4NdORt [(717 - 697)];
    struct   student *Ll9zHS;
};
struct   student *TKr9ZnTEIb6;

struct   student *x4BZpt () {
    struct   student *ni1rSWENsJ;
    struct   student *ofGyZPCgp;
    ni1rSWENsJ = ofGyZPCgp = (struct   student *) malloc (sizeof (struct   student));
    ofGyZPCgp->Ll9zHS = NULL;
    scanf ("%s", ni1rSWENsJ->JineCHWZFIhX);
    for (; strcmp (ni1rSWENsJ->JineCHWZFIhX, "end") != (739 - 739);) {
        scanf ("%s", ni1rSWENsJ->hzNfID2PuOW);
        scanf ("%s", ni1rSWENsJ->mrEbGYxdk1);
        scanf ("%d", &ni1rSWENsJ->emHJ6v);
        scanf ("%s", ni1rSWENsJ->faLHFpTA);
        scanf ("%s", ni1rSWENsJ->d4NdORt);
        ni1rSWENsJ = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", ni1rSWENsJ->JineCHWZFIhX);
        ni1rSWENsJ->Ll9zHS = ofGyZPCgp;
        ofGyZPCgp = ni1rSWENsJ;
    }
    TKr9ZnTEIb6 = ni1rSWENsJ;
    return (TKr9ZnTEIb6);
}

void  bLjrU3f6 (struct   student *TKr9ZnTEIb6) {
    struct   student *LBJMF0DcYv5;
    LBJMF0DcYv5 = TKr9ZnTEIb6->Ll9zHS;
    if (TKr9ZnTEIb6 != NULL)
        do {
            printf ("%s %s %s %d %s %s\n", LBJMF0DcYv5->JineCHWZFIhX, LBJMF0DcYv5->hzNfID2PuOW, LBJMF0DcYv5->mrEbGYxdk1, LBJMF0DcYv5->emHJ6v, LBJMF0DcYv5->faLHFpTA, LBJMF0DcYv5->d4NdORt);
            LBJMF0DcYv5 = LBJMF0DcYv5->Ll9zHS;
        }
        while (LBJMF0DcYv5 != NULL);
}

main () {
    bLjrU3f6 (TKr9ZnTEIb6);
    x4BZpt ();
    return (567 - 567);
}

