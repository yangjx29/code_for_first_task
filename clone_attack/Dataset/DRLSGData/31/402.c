struct   student {
    char CYAStHDO [(579 - 559)];
    char pQepDbZr [(836 - 816)];
    char qKPFQCm [(941 - 940)];
    int vWsJCQMT9;
    char pDnswEV [(101 - 91)];
    char Fbwdnq5 [(610 - 590)];
    struct   student *E3xjzBkYI;
};
int main () {
    int TxCF8jY;
    struct   student *dpGoLJax;
    struct   student *UZ7PvE;
    struct   student *G8vA65yhjoiU;
    UZ7PvE = G8vA65yhjoiU = (struct   student *) malloc (LEN);
    scanf ("%s", &UZ7PvE->CYAStHDO);
    TxCF8jY = (916 - 916);
    dpGoLJax = NULL;
    for (; UZ7PvE->CYAStHDO[(798 - 798)] != 'e';) {
        TxCF8jY = TxCF8jY +(924 - 923);
        scanf ("%s%s%d%s%s", &UZ7PvE->pQepDbZr, &UZ7PvE->qKPFQCm, &UZ7PvE->vWsJCQMT9, &UZ7PvE->pDnswEV, &UZ7PvE->Fbwdnq5);
        if (!((367 - 366) != TxCF8jY))
            G8vA65yhjoiU = UZ7PvE;
        else
            UZ7PvE->E3xjzBkYI = G8vA65yhjoiU;
        dpGoLJax = UZ7PvE;
        G8vA65yhjoiU = UZ7PvE;
        UZ7PvE = (struct   student *) malloc (LEN);
        scanf ("%s", &UZ7PvE->CYAStHDO);
    }
    if (dpGoLJax != NULL)
        do {
            printf ("%s %s %s %d %s %s\n", dpGoLJax->CYAStHDO, dpGoLJax->pQepDbZr, dpGoLJax->qKPFQCm, dpGoLJax->vWsJCQMT9, dpGoLJax->pDnswEV, dpGoLJax->Fbwdnq5);
            dpGoLJax = dpGoLJax->E3xjzBkYI;
        }
        while (dpGoLJax != NULL);
}

