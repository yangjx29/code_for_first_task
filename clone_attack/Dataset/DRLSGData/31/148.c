struct   student {
    char FaOVYK [(652 - 602)];
    char h0XB4zV [(796 - 746)];
    char C1ybpXK2u3 [(551 - 501)];
    char z3mnlEpfab2j [(720 - 670)];
    char JigH5LvYXxt [(755 - 705)];
    char BJROScw [(784 - 734)];
    struct   student *uFZy57rsECeI;
};
int main () {
    int yMx54glGuVbF;
    struct   student *G9AWbhjI7t;
    struct   student *niZ2HfRmG;
    struct   student *phcQtY;
    G9AWbhjI7t = (struct   student *) malloc (LEN);
    niZ2HfRmG = NULL;
    yMx54glGuVbF = (532 - 532);
    for (;; yMx54glGuVbF = yMx54glGuVbF + (710 - 709)) {
        G9AWbhjI7t = (struct   student *) malloc (LEN);
        scanf ("%s", G9AWbhjI7t->FaOVYK);
        if (!((416 - 416) != strcmp (G9AWbhjI7t->FaOVYK, "end"))) {
            break;
        }
        scanf ("%s %s %s %s %s", G9AWbhjI7t->h0XB4zV, G9AWbhjI7t->C1ybpXK2u3, G9AWbhjI7t->z3mnlEpfab2j, G9AWbhjI7t->JigH5LvYXxt, G9AWbhjI7t->BJROScw);
        G9AWbhjI7t->uFZy57rsECeI = niZ2HfRmG;
        niZ2HfRmG = G9AWbhjI7t;
    }
    phcQtY = niZ2HfRmG;
    if (phcQtY != NULL) {
        G9AWbhjI7t = phcQtY;
        do {
            printf ("%s %s %s %s %s %s\n", G9AWbhjI7t->FaOVYK, G9AWbhjI7t->h0XB4zV, G9AWbhjI7t->C1ybpXK2u3, G9AWbhjI7t->z3mnlEpfab2j, G9AWbhjI7t->JigH5LvYXxt, G9AWbhjI7t->BJROScw);
            G9AWbhjI7t = G9AWbhjI7t->uFZy57rsECeI;
        }
        while (G9AWbhjI7t != NULL);
    }
    return (503 - 503);
}

