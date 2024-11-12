struct   data {
    int wh6lms450;
    struct   data *Uf0TE76Haj3;
};
int main () {
    struct   data *t5Dx8r2R6G;
    struct   data *TucwtLdT;
    struct   data *head;
    struct   data *bhLAa2DTnfe;
    int i;
    int ndNOltzIZv7;
    int X7iIXQ13;
    scanf ("%d", &X7iIXQ13);
    for (i = 0; i < X7iIXQ13; i++) {
        t5Dx8r2R6G = (struct   data *) malloc (sizeof (struct   data));
        scanf ("%d", &t5Dx8r2R6G->wh6lms450);
        if (i == 0) {
            head = t5Dx8r2R6G;
            TucwtLdT = t5Dx8r2R6G;
        }
        else {
            TucwtLdT->Uf0TE76Haj3 = t5Dx8r2R6G;
            TucwtLdT = t5Dx8r2R6G;
        };
    }
    t5Dx8r2R6G->Uf0TE76Haj3 = NULL;
    scanf ("%d", &ndNOltzIZv7);
    t5Dx8r2R6G = head;
    TucwtLdT = head;
    for (; t5Dx8r2R6G != NULL;) {
        if (t5Dx8r2R6G->wh6lms450 == ndNOltzIZv7) {
            if (t5Dx8r2R6G == head)
                head = t5Dx8r2R6G->Uf0TE76Haj3;
            else
                TucwtLdT->Uf0TE76Haj3 = t5Dx8r2R6G->Uf0TE76Haj3;
            t5Dx8r2R6G = t5Dx8r2R6G->Uf0TE76Haj3;
        }
        else {
            TucwtLdT = t5Dx8r2R6G;
            t5Dx8r2R6G = t5Dx8r2R6G->Uf0TE76Haj3;
        };
    }
    t5Dx8r2R6G = head;
    printf ("%d", t5Dx8r2R6G->wh6lms450);
    t5Dx8r2R6G = t5Dx8r2R6G->Uf0TE76Haj3;
    for (; t5Dx8r2R6G;) {
        printf (" %d", t5Dx8r2R6G->wh6lms450);
        t5Dx8r2R6G = t5Dx8r2R6G->Uf0TE76Haj3;
    }
    t5Dx8r2R6G = head;
    head = NULL;
    for (; t5Dx8r2R6G;) {
        free (bhLAa2DTnfe);
        bhLAa2DTnfe = t5Dx8r2R6G;
        t5Dx8r2R6G = t5Dx8r2R6G->Uf0TE76Haj3;
    }
    return 0;
}

