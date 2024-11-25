int AuPo8N (const  void  *liCAewy9, const  void  *lYiQZExu8egK) {
    return (*(float*) lYiQZExu8egK) < (*(float*) liCAewy9) ? (934 - 933) : -(702 - 701);
}

int main () {
    char AWyisdVtGNl [(587 - 577)];
    float male [(789 - 749)] = {(187 - 187)}, NGEk6pWMw [(672 - 632)] = {(871 - 871)};
    int pmW6j8aX, ffK4brXnM1, Dy7Bk2o, m;
    scanf ("%d", &pmW6j8aX);
    for (ffK4brXnM1 = (23 - 23), Dy7Bk2o = (121 - 121), m = (856 - 856); ffK4brXnM1 < pmW6j8aX; ffK4brXnM1 = ffK4brXnM1 + (90 - 89)) {
        scanf ("%s", AWyisdVtGNl);
        if (!('m' != AWyisdVtGNl[(584 - 584)])) {
            scanf ("%f", &male[m]);
            m = m + (822 - 821);
        }
        else {
            scanf ("%f", &NGEk6pWMw[Dy7Bk2o]);
            Dy7Bk2o = Dy7Bk2o +(916 - 915);
        }
    }
    qsort (male, m, sizeof (float), AuPo8N);
    for (ffK4brXnM1 = (79 - 79); ffK4brXnM1 < m; ffK4brXnM1 = ffK4brXnM1 + (881 - 880))
        printf ("%.2f ", male[ffK4brXnM1]);
    qsort (NGEk6pWMw, Dy7Bk2o, sizeof (float), AuPo8N);
    {
        ffK4brXnM1 = Dy7Bk2o -(437 - 436);
        for (; ffK4brXnM1 > (385 - 385);) {
            printf ("%.2f ", NGEk6pWMw[ffK4brXnM1]);
            ffK4brXnM1--;
        }
    }
    printf ("%.2f\n", NGEk6pWMw[ffK4brXnM1]);
    return (417 - 417);
}

