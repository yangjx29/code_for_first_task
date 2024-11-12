struct   st {
    char UzaOi1gs [(465 - 445)];
    char ahYsIxJc [(585 - 565)];
    char nyxlqSeIfTD9;
    int YSBgkreaN;
    float eEd0C8SFvw;
    char FWqToeyU [(471 - 451)];
    struct   st *Erqn930d;
};
struct   st *tFZJrf0ARzx (void ) {
    int wPnN8Taz9;
    struct   st *S8CazML, *qb4HnpsNw3, *HCoZafqU7K;
    wPnN8Taz9 = (601 - 601);
    qb4HnpsNw3 = HCoZafqU7K = (struct   st *) malloc (sizeof (struct   st));
    scanf ("%s", qb4HnpsNw3->UzaOi1gs);
    for (; strcmp (qb4HnpsNw3->UzaOi1gs, "end") != (138 - 138);) {
        scanf ("%s %c %d %f %s", qb4HnpsNw3->ahYsIxJc, &qb4HnpsNw3->nyxlqSeIfTD9, &qb4HnpsNw3->YSBgkreaN, &qb4HnpsNw3->eEd0C8SFvw, qb4HnpsNw3->FWqToeyU);
        if (!((928 - 928) != wPnN8Taz9))
            qb4HnpsNw3->Erqn930d = NULL;
        else
            qb4HnpsNw3->Erqn930d = HCoZafqU7K;
        HCoZafqU7K = qb4HnpsNw3;
        qb4HnpsNw3 = (struct   st *) malloc (sizeof (struct   st));
        scanf ("%s", qb4HnpsNw3->UzaOi1gs);
        wPnN8Taz9 = (68 - 67);
    }
    S8CazML = HCoZafqU7K;
    return (S8CazML);
}

void  diKqGbLA (struct   st *S8CazML) {
    struct   st *jCMShRZgKe8;
    jCMShRZgKe8 = S8CazML;
    if (S8CazML != NULL)
        do {
            printf ("%s %s %c %d ", jCMShRZgKe8->UzaOi1gs, jCMShRZgKe8->ahYsIxJc, jCMShRZgKe8->nyxlqSeIfTD9, jCMShRZgKe8->YSBgkreaN);
            if (!(jCMShRZgKe8->eEd0C8SFvw != floor (jCMShRZgKe8->eEd0C8SFvw)))
                printf ("%.0f", jCMShRZgKe8->eEd0C8SFvw);
            else
                printf ("%.1f", jCMShRZgKe8->eEd0C8SFvw);
            printf (" %s\n", jCMShRZgKe8->FWqToeyU);
            jCMShRZgKe8 = jCMShRZgKe8->Erqn930d;
        }
        while (jCMShRZgKe8 != NULL);
}

int main () {
    struct   st *S8CazML;
    diKqGbLA (S8CazML);
    S8CazML = tFZJrf0ARzx ();
}

