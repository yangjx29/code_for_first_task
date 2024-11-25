struct   Student {
    char beyh5bT8 [(428 - 418)];
    char kQKfERWh [(932 - 912)];
    char Al7Qcu [(87 - 85)];
    char odZunD [(292 - 289)];
    char jpOY8EBIS [(81 - 75)];
    char gIxuPXVy [(749 - 737)];
    struct   Student *PfEv7cybZ1UB;
};
int QjSpRFcDM;

struct   Student *L2TBD10 (void ) {
    struct   Student *lIK8LyNnz;
    struct   Student *pIOk3GJXD5;
    pIOk3GJXD5 = (struct   Student *) malloc (LEN);
    scanf ("%s", pIOk3GJXD5->beyh5bT8);
    lIK8LyNnz = NULL;
    QjSpRFcDM = (335 - 335);
    for (; strcmp (pIOk3GJXD5->beyh5bT8, "end") != (637 - 637);) {
        {
            if ((213 - 213)) {
                return (719 - 719);
            }
        }
        scanf ("%s%s%s%s%s", pIOk3GJXD5->kQKfERWh, pIOk3GJXD5->Al7Qcu, pIOk3GJXD5->odZunD, pIOk3GJXD5->jpOY8EBIS, pIOk3GJXD5->gIxuPXVy);
        QjSpRFcDM = QjSpRFcDM +(481 - 480);
        if (!((370 - 369) != QjSpRFcDM))
            lIK8LyNnz = pIOk3GJXD5;
        else {
            pIOk3GJXD5->PfEv7cybZ1UB = lIK8LyNnz;
            lIK8LyNnz = pIOk3GJXD5;
        }
        pIOk3GJXD5 = (struct   Student *) malloc (LEN);
        scanf ("%s", pIOk3GJXD5->beyh5bT8);
    }
    return (lIK8LyNnz);
}

int main () {
    struct   Student *icOjTv8g;
    icOjTv8g = L2TBD10 ();
    for (; icOjTv8g != NULL;) {
        printf ("%s %s %s %s %s %s\n", icOjTv8g->beyh5bT8, icOjTv8g->kQKfERWh, icOjTv8g->Al7Qcu, icOjTv8g->odZunD, icOjTv8g->jpOY8EBIS, icOjTv8g->gIxuPXVy);
        icOjTv8g = icOjTv8g->PfEv7cybZ1UB;
    }
    return (145 - 145);
}

