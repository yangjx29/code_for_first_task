struct   student {
    char T4GTfiU [(1319 - 319)];
    struct   student *aOqRQG0LI, *nQ07UFGaW;
};
void  main () {
    int rpkBQt6;
    int j;
    int Nkx8dFiM;
    struct   student *head, *p1, *QIZuhANypH, *Kx7Iycp3;
    head = (struct   student *) malloc (LEN);
    p1 = head;
    QIZuhANypH = NULL;
    p1->aOqRQG0LI = NULL;
    p1->nQ07UFGaW = NULL;
    {
        while (true) {
            gets (p1->T4GTfiU);
            if (strcmp (p1->T4GTfiU, "end") == (531 - 531)) {
                p1->aOqRQG0LI = QIZuhANypH;
                Kx7Iycp3 = QIZuhANypH;
                break;
            }
            else {
                p1->aOqRQG0LI = QIZuhANypH;
                p1->nQ07UFGaW = (struct   student *) malloc (LEN);
                QIZuhANypH = p1;
                p1 = p1->nQ07UFGaW;
                p1->nQ07UFGaW = NULL;
            }
        }
    }
    p1 = Kx7Iycp3;
    for (; p1;) {
        puts (p1->T4GTfiU);
        p1 = p1->aOqRQG0LI;
    }
}

