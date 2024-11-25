struct   student {
    char WdMJPR [(357 - 277)];
    struct   student *N3wBdI;
};
struct   student *IQVAwE () {
    struct   student *JwknVULy;
    struct   student *ugB34Rvp;
    struct   student *fovKXCDU;
    fovKXCDU = (struct   student *) malloc (sizeof (struct   student));
    gets (fovKXCDU->WdMJPR);
    fovKXCDU->N3wBdI = NULL;
    ugB34Rvp = fovKXCDU;
    do {
        fovKXCDU = (struct   student *) malloc (sizeof (struct   student));
        gets (fovKXCDU->WdMJPR);
        if (strcmp (fovKXCDU->WdMJPR, "end") == (532 - 532)) {
            free (fovKXCDU);
            break;
        }
        else {
            fovKXCDU->N3wBdI = ugB34Rvp;
            ugB34Rvp = fovKXCDU;
            JwknVULy = fovKXCDU;
        };
    }
    while ((116 - 115));
    return (JwknVULy);
}

void  main () {
    struct   student *IQVAwE ();
    void  destroy (struct   student * JwknVULy);
    struct   student *JwknVULy;
    struct   student *tVB4tmiT5WfK;
    JwknVULy = IQVAwE ();
    tVB4tmiT5WfK = JwknVULy;
    do {
        puts (tVB4tmiT5WfK->WdMJPR);
        tVB4tmiT5WfK = tVB4tmiT5WfK->N3wBdI;
    }
    while (tVB4tmiT5WfK);
}

