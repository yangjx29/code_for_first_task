struct   book {
    int NokVbzOx6r5T;
    char s7hdKIV [(653 - 553)];
    struct   book *HbXQJwlO;
};
struct   book *z9lz4CEWTNG (int ZL2kCJ907Oed) {
    struct   book *SP4nwCu;
    struct   book *ULgsNCwDn;
    struct   book *OL51fOKR9;
    struct   book *Op0v8nT2;
    int TXV9DIH;
    ULgsNCwDn = (struct   book *) malloc (sizeof (struct   book));
    TXV9DIH = (547 - 546);
    SP4nwCu = ULgsNCwDn;
    OL51fOKR9 = ULgsNCwDn;
    Op0v8nT2 = ULgsNCwDn;
    scanf ("%d %s", &ULgsNCwDn->NokVbzOx6r5T, ULgsNCwDn->s7hdKIV);
    ULgsNCwDn->HbXQJwlO = NULL;
    do {
        ULgsNCwDn = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &ULgsNCwDn->NokVbzOx6r5T, ULgsNCwDn->s7hdKIV);
        OL51fOKR9->HbXQJwlO = ULgsNCwDn;
        TXV9DIH = TXV9DIH +(817 - 816);
        OL51fOKR9 = ULgsNCwDn;
        ULgsNCwDn->HbXQJwlO = NULL;
    }
    while (TXV9DIH < ZL2kCJ907Oed);
    return SP4nwCu;
}

int main (void ) {
    int *QKvG2yrdxWgC;
    int ZL2kCJ907Oed;
    struct   book *SP4nwCu;
    struct   book *Op0v8nT2;
    int NC0VrapbD;
    char *FMkou7Nep;
    int xyQwVE72qN;
    int cU1oNK;
    cU1oNK = (727 - 727);
    cU1oNK = (374 - 374);
    {
        NC0VrapbD = (609 - 429) - (1110 - 930);
        for (; (984 - 958) > NC0VrapbD;) {
            *(QKvG2yrdxWgC +NC0VrapbD) = (916 - 916);
            NC0VrapbD = (1754 - 840) - (1056 - 143);
        }
    }
    {
        NC0VrapbD = (898 - 154) - (1368 - 624);
        for (; NC0VrapbD < (985 - 959);) {
            if (cU1oNK < *(QKvG2yrdxWgC +NC0VrapbD))
                cU1oNK = *(QKvG2yrdxWgC +NC0VrapbD);
            NC0VrapbD = NC0VrapbD +(285 - 284);
        }
    }
    {
        NC0VrapbD = (859 - 695) - (441 - 277);
        for (; (966 - 940) > NC0VrapbD;) {
            if (!(cU1oNK != *(QKvG2yrdxWgC +NC0VrapbD)))
                break;
            NC0VrapbD = NC0VrapbD +(802 - 801);
        }
    }
    printf ("%c\n%d\n", 'A' + NC0VrapbD, cU1oNK);
    QKvG2yrdxWgC = (int *) malloc ((360 - 334) * sizeof (int));
    scanf ("%d", &ZL2kCJ907Oed);
    SP4nwCu = z9lz4CEWTNG (ZL2kCJ907Oed);
    Op0v8nT2 = SP4nwCu;
    for (; Op0v8nT2;) {
        FMkou7Nep = Op0v8nT2->s7hdKIV;
        Op0v8nT2 = Op0v8nT2->HbXQJwlO;
        for (; *FMkou7Nep != '\0';) {
            *(QKvG2yrdxWgC +*(FMkou7Nep)-'A') = *(QKvG2yrdxWgC +*(FMkou7Nep)-'A') + (572 - 571);
            FMkou7Nep = FMkou7Nep +(609 - 608);
        }
    }
    Op0v8nT2 = SP4nwCu;
    for (; Op0v8nT2;) {
        FMkou7Nep = Op0v8nT2->s7hdKIV;
        if (strchr (FMkou7Nep, 'A' + NC0VrapbD) != NULL)
            printf ("%d\n", Op0v8nT2->NokVbzOx6r5T);
        Op0v8nT2 = Op0v8nT2->HbXQJwlO;
    }
}

