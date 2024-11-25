struct   student {
    char l7GKQbXmI [20];
    int N2U0mgB4EXDq;
    int clas;
    char g;
    char vlCQ2AY7ap8n;
    int Ul2rCwiEW;
    int total;
}
duxH6TA15ksd [100];

void  main () {
    int glk7GeQwR;
    int RK2MC63;
    int Ux3uR6;
    int mhZcbA;
    int Wlmn6M2;
    glk7GeQwR = 0;
    scanf ("%d\n", &Ux3uR6);
    for (mhZcbA = 0; mhZcbA < Ux3uR6; mhZcbA++) {
        scanf ("%s %d %d %c %c %d\n", duxH6TA15ksd[mhZcbA].l7GKQbXmI, &duxH6TA15ksd[mhZcbA].N2U0mgB4EXDq, &duxH6TA15ksd[mhZcbA].clas, &duxH6TA15ksd[mhZcbA].g, &duxH6TA15ksd[mhZcbA].vlCQ2AY7ap8n, &duxH6TA15ksd[mhZcbA].Ul2rCwiEW);
        duxH6TA15ksd[mhZcbA].total = 0;
        if (duxH6TA15ksd[mhZcbA].N2U0mgB4EXDq > 80 && duxH6TA15ksd[mhZcbA].Ul2rCwiEW >= 1)
            duxH6TA15ksd[mhZcbA].total = duxH6TA15ksd[mhZcbA].total + 8000;
        if (85 < duxH6TA15ksd[mhZcbA].N2U0mgB4EXDq && 80 < duxH6TA15ksd[mhZcbA].clas)
            duxH6TA15ksd[mhZcbA].total = duxH6TA15ksd[mhZcbA].total + 4000;
        if (90 < duxH6TA15ksd[mhZcbA].N2U0mgB4EXDq)
            duxH6TA15ksd[mhZcbA].total = duxH6TA15ksd[mhZcbA].total + 2000;
        if (85 < duxH6TA15ksd[mhZcbA].N2U0mgB4EXDq && duxH6TA15ksd[mhZcbA].vlCQ2AY7ap8n == 'Y')
            duxH6TA15ksd[mhZcbA].total = duxH6TA15ksd[mhZcbA].total + 1000;
        if (duxH6TA15ksd[mhZcbA].clas > 80 && duxH6TA15ksd[mhZcbA].g == 'Y')
            duxH6TA15ksd[mhZcbA].total = duxH6TA15ksd[mhZcbA].total + 850;
    }
    Wlmn6M2 = 0;
    for (mhZcbA = 0; mhZcbA < Ux3uR6; mhZcbA++) {
        glk7GeQwR = glk7GeQwR + duxH6TA15ksd[mhZcbA].total;
        if (duxH6TA15ksd[mhZcbA].total > Wlmn6M2) {
            Wlmn6M2 = duxH6TA15ksd[mhZcbA].total;
            RK2MC63 = mhZcbA;
        }
    }
    printf ("%s\n%d\n%d", duxH6TA15ksd[RK2MC63].l7GKQbXmI, Wlmn6M2, glk7GeQwR);
}

