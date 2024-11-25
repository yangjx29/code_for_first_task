struct   student {
    char GwMSAqrL [(480 - 470)];
    char jh7FA4 [(608 - 588)];
    char eVY5gGeZU3 [(964 - 962)];
    int K6zJ3AUXg;
    float jBQOj3EmGdk7;
    char cR3aY4LB [(574 - 534)];
    struct   student *jVgQ2tF;
};
void  main () {
    struct   student *RVy4nFY07, *QVEJ0vou39q, *Lbhxq57T3r;
    QVEJ0vou39q = (struct   student *) malloc (len);
    QVEJ0vou39q->jVgQ2tF = NULL;
    scanf ("%s", QVEJ0vou39q->GwMSAqrL);
    for (; QVEJ0vou39q->GwMSAqrL[0] != 'e';) {
        scanf ("%s%s%d%f%s", QVEJ0vou39q->jh7FA4, QVEJ0vou39q->eVY5gGeZU3, &QVEJ0vou39q->K6zJ3AUXg, &QVEJ0vou39q->jBQOj3EmGdk7, QVEJ0vou39q->cR3aY4LB);
        Lbhxq57T3r = QVEJ0vou39q;
        QVEJ0vou39q = (struct   student *) malloc (len);
        QVEJ0vou39q->jVgQ2tF = Lbhxq57T3r;
        scanf ("%s", QVEJ0vou39q->GwMSAqrL);
    }
    if (Lbhxq57T3r->jVgQ2tF != NULL) {
        for (RVy4nFY07 = Lbhxq57T3r; RVy4nFY07->jVgQ2tF != NULL; RVy4nFY07 = RVy4nFY07->jVgQ2tF) {
            printf ("%s %s %s %d %g %s\n", RVy4nFY07->GwMSAqrL, RVy4nFY07->jh7FA4, RVy4nFY07->eVY5gGeZU3, RVy4nFY07->K6zJ3AUXg, RVy4nFY07->jBQOj3EmGdk7, RVy4nFY07->cR3aY4LB);
        }
        printf ("%s %s %s %d %g %s\n", RVy4nFY07->GwMSAqrL, RVy4nFY07->jh7FA4, RVy4nFY07->eVY5gGeZU3, RVy4nFY07->K6zJ3AUXg, RVy4nFY07->jBQOj3EmGdk7, RVy4nFY07->cR3aY4LB);
    }
    if (Lbhxq57T3r->jVgQ2tF = NULL)
        printf ("%s %s %s %d %g %s\n", Lbhxq57T3r->GwMSAqrL, Lbhxq57T3r->jh7FA4, Lbhxq57T3r->eVY5gGeZU3, Lbhxq57T3r->K6zJ3AUXg, Lbhxq57T3r->jBQOj3EmGdk7, Lbhxq57T3r->cR3aY4LB);
}

