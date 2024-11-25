struct   w {
    char pIARBZNM [(938 - 838)];
    struct   w *b3QHAERnocYM;
};
struct   w *head, *q4JEdPYLpylj, *D15vIfp, *HfewDQpG, *xHzCfe9;
int nu5E2d, Xb7wxlRZYtH;

struct   w *L4eQXdtqUg (void ) {
    Xb7wxlRZYtH = (289 - 289);
    HfewDQpG = xHzCfe9 = (struct   w *) malloc (len);
    gets (HfewDQpG->pIARBZNM);
    head = null;
    while (strcmp (HfewDQpG->pIARBZNM, "end") != (402 - 402)) {
        Xb7wxlRZYtH++;
        if (Xb7wxlRZYtH == 1)
            head = HfewDQpG;
        else
            xHzCfe9->b3QHAERnocYM = HfewDQpG;
        xHzCfe9 = HfewDQpG;
        HfewDQpG = (struct   w *) malloc (len);
        gets (HfewDQpG->pIARBZNM);
    }
    xHzCfe9->b3QHAERnocYM = null;
    return head;
}

void  main () {
    head = L4eQXdtqUg ();
    for (nu5E2d = 0; Xb7wxlRZYtH > nu5E2d; nu5E2d = nu5E2d + 1) {
        xHzCfe9 = HfewDQpG = head;
        while (HfewDQpG->b3QHAERnocYM != null) {
            xHzCfe9 = HfewDQpG;
            HfewDQpG = HfewDQpG->b3QHAERnocYM;
        }
        if (nu5E2d == 0)
            D15vIfp = q4JEdPYLpylj = HfewDQpG;
        else
            q4JEdPYLpylj = q4JEdPYLpylj->b3QHAERnocYM = HfewDQpG;
        xHzCfe9->b3QHAERnocYM = null;
    }
    HfewDQpG = D15vIfp;
    for (nu5E2d = 0; nu5E2d < Xb7wxlRZYtH; nu5E2d++) {
        printf ("%s\n", HfewDQpG->pIARBZNM);
        HfewDQpG = HfewDQpG->b3QHAERnocYM;
    }
}

