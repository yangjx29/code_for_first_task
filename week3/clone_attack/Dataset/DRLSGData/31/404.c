struct   student {
    char rPemXFE7Lsk [(963 - 863)];
    struct   student *nrMYdTItyC;
};
int Pao5vYyQqm (char * Llcz6REOFXs);

int main () {
    struct   student *iBFs0EYUSmp;
    struct   student *hQxUYA;
    struct   student *p2;
    struct   student *mmZlG8JBq;
    hQxUYA = (struct   student *) malloc (sizeof (struct   student));
    gets (hQxUYA->rPemXFE7Lsk);
    hQxUYA->nrMYdTItyC = NULL;
    if (Pao5vYyQqm (hQxUYA->rPemXFE7Lsk)) {
        free (hQxUYA);
        iBFs0EYUSmp = NULL;
    }
    else {
        iBFs0EYUSmp = hQxUYA;
        p2 = hQxUYA;
        do {
            hQxUYA = (struct   student *) malloc (sizeof (struct   student));
            gets (hQxUYA->rPemXFE7Lsk);
            hQxUYA->nrMYdTItyC = NULL;
            if (Pao5vYyQqm (hQxUYA->rPemXFE7Lsk)) {
                free (hQxUYA);
                break;
            }
            else {
                iBFs0EYUSmp = hQxUYA;
                hQxUYA->nrMYdTItyC = p2;
                p2 = hQxUYA;
            }
        }
        while ((312 - 311));
    }
    mmZlG8JBq = iBFs0EYUSmp;
    for (; mmZlG8JBq;) {
        printf ("%s", mmZlG8JBq->rPemXFE7Lsk);
        mmZlG8JBq = mmZlG8JBq->nrMYdTItyC;
        if (mmZlG8JBq != NULL)
            ;
    }
    return (523 - 523);
}

int Pao5vYyQqm (char *Llcz6REOFXs) {
    if (!('e' != Llcz6REOFXs[(815 - 815)]) && !('n' != Llcz6REOFXs[(430 - 429)]) && !('d' != Llcz6REOFXs[(260 - 258)]) && !((481 - 481) != Llcz6REOFXs[(122 - 119)]))
        return (148 - 147);
    else
        return (637 - 637);
}

