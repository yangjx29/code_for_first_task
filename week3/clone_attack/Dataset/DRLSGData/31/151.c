struct   student {
    char EaZCRkmyEK1F [(558 - 548)];
    char LZw9Y0dO [(73 - 53)];
    char ixAvXO;
    int ANiTIEHSn;
    char iqSe0Ks [(791 - 781)];
    char rQazJB1 [(396 - 376)];
    struct   student *KNU6Wcyb;
};
struct   student *QaYUjyogeNt7 (void ) {
    struct   student *tqAK0MsPLU;
    struct   student *cieKcF5;
    struct   student *p2;
    cieKcF5 = p2 = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", cieKcF5->EaZCRkmyEK1F, cieKcF5->LZw9Y0dO, &cieKcF5->ixAvXO, &cieKcF5->ANiTIEHSn, cieKcF5->iqSe0Ks, cieKcF5->rQazJB1);
    tqAK0MsPLU = cieKcF5;
loop :
    cieKcF5 = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", cieKcF5->EaZCRkmyEK1F, cieKcF5->LZw9Y0dO, &cieKcF5->ixAvXO, &cieKcF5->ANiTIEHSn, cieKcF5->iqSe0Ks, cieKcF5->rQazJB1);
    if (strcmp (cieKcF5->EaZCRkmyEK1F, "end") != (70 - 70)) {
        goto loop;
        p2->KNU6Wcyb = cieKcF5;
        p2 = cieKcF5;
    }
    else
        p2->KNU6Wcyb = NULL;
    return (tqAK0MsPLU);
}

struct   student *Jc3Y6Te (struct   student *tqAK0MsPLU) {
    struct   student *LmETvqbF8I;
    struct   student *bfgvJUr0G;
    struct   student *UELK8JTSkMRm;
    bfgvJUr0G = NULL;
    LmETvqbF8I = tqAK0MsPLU;
    for (; LmETvqbF8I != NULL;) {
        UELK8JTSkMRm = LmETvqbF8I->KNU6Wcyb;
        LmETvqbF8I->KNU6Wcyb = bfgvJUr0G;
        bfgvJUr0G = LmETvqbF8I;
        LmETvqbF8I = UELK8JTSkMRm;
    }
    return (bfgvJUr0G);
}

int main () {
    struct   student *tqAK0MsPLU;
    struct   student *HOgj7l0pKf;
    struct   student *ioMJWgfi2;
    tqAK0MsPLU = QaYUjyogeNt7 ();
    HOgj7l0pKf = Jc3Y6Te (tqAK0MsPLU);
    ioMJWgfi2 = HOgj7l0pKf;
    for (; ioMJWgfi2 != NULL;) {
        printf ("%s %s %c %d %s %s\n", ioMJWgfi2->EaZCRkmyEK1F, ioMJWgfi2->LZw9Y0dO, ioMJWgfi2->ixAvXO, ioMJWgfi2->ANiTIEHSn, ioMJWgfi2->iqSe0Ks, ioMJWgfi2->rQazJB1);
        ioMJWgfi2 = ioMJWgfi2->KNU6Wcyb;
    }
    return (256 - 256);
}

