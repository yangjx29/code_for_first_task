struct   student {
    char FHouVCJR [(1523 - 523)];
    struct   student *ODUhcIsdK5FQ;
};
int J4x20S7RA;

struct   student *ufeNp751k (void ) {
    char chNylXVK [(1000 - 996)] = {"end"};
    struct   student *PNOZEb7l;
    struct   student *nud4i6XrO;
    struct   student *r0rWqejTOm;
    nud4i6XrO = r0rWqejTOm = (struct   student *) malloc (LEN);
    PNOZEb7l = NULL;
    J4x20S7RA = (693 - 693);
    gets (nud4i6XrO->FHouVCJR);
    for (; strcmp (nud4i6XrO->FHouVCJR, chNylXVK) != (959 - 959);) {
        J4x20S7RA = J4x20S7RA +(981 - 980);
        if (!((654 - 653) != J4x20S7RA))
            PNOZEb7l = nud4i6XrO;
        else
            r0rWqejTOm->ODUhcIsdK5FQ = nud4i6XrO;
        r0rWqejTOm = nud4i6XrO;
        nud4i6XrO = (struct   student *) malloc (LEN);
        gets (nud4i6XrO->FHouVCJR);
    }
    r0rWqejTOm->ODUhcIsdK5FQ = NULL;
    return PNOZEb7l;
}

void  K7BMfeF2 (struct   student *PNOZEb7l) {
    struct   student *DMSjGdzV;
    DMSjGdzV = PNOZEb7l;
    if (PNOZEb7l != NULL)
        do {
            printf ("%s\n", DMSjGdzV->FHouVCJR);
            DMSjGdzV = DMSjGdzV->ODUhcIsdK5FQ;
        }
        while (DMSjGdzV != NULL);
}

struct   student *n5LMBj (struct   student *PNOZEb7l) {
    struct   student *nud4i6XrO;
    struct   student *r0rWqejTOm;
    struct   student *o1DvgoxYqS;
    nud4i6XrO = PNOZEb7l;
    r0rWqejTOm = nud4i6XrO->ODUhcIsdK5FQ;
    nud4i6XrO->ODUhcIsdK5FQ = NULL;
    for (; r0rWqejTOm->ODUhcIsdK5FQ != NULL;) {
        PNOZEb7l = r0rWqejTOm;
        o1DvgoxYqS = r0rWqejTOm->ODUhcIsdK5FQ;
        r0rWqejTOm->ODUhcIsdK5FQ = nud4i6XrO;
        nud4i6XrO = r0rWqejTOm;
        r0rWqejTOm = o1DvgoxYqS;
    }
    PNOZEb7l = r0rWqejTOm;
    r0rWqejTOm->ODUhcIsdK5FQ = nud4i6XrO;
    return PNOZEb7l;
}

void  main () {
    struct   student *PNOZEb7l;
    K7BMfeF2 (PNOZEb7l);
    PNOZEb7l = ufeNp751k ();
    PNOZEb7l = n5LMBj (PNOZEb7l);
}

