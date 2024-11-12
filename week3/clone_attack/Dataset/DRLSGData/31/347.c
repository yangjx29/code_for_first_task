struct   student {
    struct   student *XnRDvyJ;
    char Zmy6vPjV [(928 - 828)];
    char qTbArmUvS0Kl [(422 - 402)];
    char Aj2YBNJ [(722 - 720)];
    char SKhwPMLb4re2 [(662 - 652)];
    char cGteYQpH2RT [(596 - 586)];
    char IgGwnHOKJ9 [(266 - 166)];
    struct   student *EEfn9Yi;
};
void  main () {
    int uEQKk7V9;
    struct   student *HCjhkF5;
    struct   student *tEQOzM;
    struct   student *lHQCS7di;
    struct   student *K8gpAI;
    tEQOzM = (struct   student *) malloc (LEN);
    scanf ("%s", tEQOzM->Zmy6vPjV);
    uEQKk7V9 = (155 - 155);
    for (; strcmp (tEQOzM->Zmy6vPjV, "end") != (420 - 420);) {
        uEQKk7V9 = uEQKk7V9 + (557 - 556);
        scanf ("%s %s %s %s %s", tEQOzM->qTbArmUvS0Kl, tEQOzM->Aj2YBNJ, tEQOzM->SKhwPMLb4re2, tEQOzM->cGteYQpH2RT, tEQOzM->IgGwnHOKJ9);
        if (!((372 - 371) != uEQKk7V9)) {
            tEQOzM->XnRDvyJ = NULL;
            lHQCS7di = tEQOzM;
        }
        else
            tEQOzM->XnRDvyJ = lHQCS7di;
        lHQCS7di = tEQOzM;
        tEQOzM = (struct   student *) malloc (LEN);
        scanf ("%s", tEQOzM->Zmy6vPjV);
    }
    K8gpAI = lHQCS7di;
    do {
        printf ("%s %s %s %s %s %s\n", K8gpAI->Zmy6vPjV, K8gpAI->qTbArmUvS0Kl, K8gpAI->Aj2YBNJ, K8gpAI->SKhwPMLb4re2, K8gpAI->cGteYQpH2RT, K8gpAI->IgGwnHOKJ9);
        K8gpAI = K8gpAI->XnRDvyJ;
    }
    while (K8gpAI != NULL);
}

