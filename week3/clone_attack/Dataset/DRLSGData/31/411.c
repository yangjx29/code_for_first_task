struct   student {
    char kUfq2lKHBo [(865 - 845)];
    char VUofj7ZNHuY1 [(191 - 91)];
    char yVHZjD;
    int qdQjahsNY9A;
    char TR0QdvYzM [(228 - 218)];
    char khvXSrl1VW [(859 - 839)];
    struct   student *o0UzSWK3DM;
};
struct   student *print () {
    struct   student *GwPLyaQ = NULL;
    struct   student *qzZEMNKAh;
    do {
        qzZEMNKAh = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", qzZEMNKAh->kUfq2lKHBo);
        if (!((145 - 145) != strcmp (qzZEMNKAh->kUfq2lKHBo, "end")))
            break;
        else {
            scanf ("%s %c %d %s %s", qzZEMNKAh->VUofj7ZNHuY1, &qzZEMNKAh->yVHZjD, &qzZEMNKAh->qdQjahsNY9A, qzZEMNKAh->TR0QdvYzM, qzZEMNKAh->khvXSrl1VW);
            qzZEMNKAh->o0UzSWK3DM = GwPLyaQ;
            GwPLyaQ = qzZEMNKAh;
        }
    }
    while ((588 - 587));
    return GwPLyaQ;
}

void  main () {
    struct   student *qn859BpOeWJE;
    qn859BpOeWJE = print ();
    do {
        printf ("%s %s %c %d %s %s\n", qn859BpOeWJE->kUfq2lKHBo, qn859BpOeWJE->VUofj7ZNHuY1, qn859BpOeWJE->yVHZjD, qn859BpOeWJE->qdQjahsNY9A, qn859BpOeWJE->TR0QdvYzM, qn859BpOeWJE->khvXSrl1VW);
        qn859BpOeWJE = qn859BpOeWJE->o0UzSWK3DM;
    }
    while (qn859BpOeWJE->o0UzSWK3DM != NULL);
    printf ("%s %s %c %d %s %s\n", qn859BpOeWJE->kUfq2lKHBo, qn859BpOeWJE->VUofj7ZNHuY1, qn859BpOeWJE->yVHZjD, qn859BpOeWJE->qdQjahsNY9A, qn859BpOeWJE->TR0QdvYzM, qn859BpOeWJE->khvXSrl1VW);
}

