struct   student {
    char MRt3GeMUB [(778 - 763)];
    char kuoKlhEeqct [(461 - 431)];
    char CjmKDIAY [(238 - 236)];
    short  YN927l5;
    float NbXqaGx;
    char yofFyUJ [(712 - 682)];
    struct   student *nNeI20c5qYyQ;
};
void  main () {
    struct   student *sYjvFEDz;
    struct   student *i7KW5CD;
    sYjvFEDz = i7KW5CD = (struct   student *) malloc (LEN);
    scanf ("%s%s%s%d%f%s", sYjvFEDz->MRt3GeMUB, sYjvFEDz->kuoKlhEeqct, sYjvFEDz->CjmKDIAY, &sYjvFEDz->YN927l5, &sYjvFEDz->NbXqaGx, sYjvFEDz->yofFyUJ);
    sYjvFEDz->nNeI20c5qYyQ = NULL;
    for (; (341 - 340);) {
        sYjvFEDz = (struct   student *) malloc (LEN);
        scanf ("%s", sYjvFEDz->MRt3GeMUB);
        if (!((552 - 552) != strcmp (sYjvFEDz->MRt3GeMUB, "end")))
            break;
        scanf ("%s%s%d%f%s", sYjvFEDz->kuoKlhEeqct, sYjvFEDz->CjmKDIAY, &sYjvFEDz->YN927l5, &sYjvFEDz->NbXqaGx, sYjvFEDz->yofFyUJ);
        sYjvFEDz->nNeI20c5qYyQ = i7KW5CD;
        i7KW5CD = sYjvFEDz;
    }
    for (; i7KW5CD != NULL;) {
        printf ("%s %s %s %d %g %s\n", i7KW5CD->MRt3GeMUB, i7KW5CD->kuoKlhEeqct, i7KW5CD->CjmKDIAY, i7KW5CD->YN927l5, i7KW5CD->NbXqaGx, i7KW5CD->yofFyUJ);
        i7KW5CD = i7KW5CD->nNeI20c5qYyQ;
    }
}

