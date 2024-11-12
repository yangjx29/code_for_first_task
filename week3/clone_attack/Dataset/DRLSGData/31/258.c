struct   student {
    char PrPwdKhILx4 [(226 - 126)];
    char bvSyW8Ym [(252 - 152)];
    char Bhi4IaAgQ;
    int cqA5IHG;
    char BNUMlrXI [(485 - 465)];
    char aKC9D7cYO3T [(479 - 379)];
    struct   student *qaCEVMlx;
    struct   student *R7IQdVZ1tsCw;
};
void  main () {
    struct   student *VM6k8JosBIF;
    struct   student *L3fDtAJ;
    VM6k8JosBIF = L3fDtAJ = (struct   student *) malloc (LEN);
    VM6k8JosBIF->R7IQdVZ1tsCw = NULL;
    scanf ("%s", &VM6k8JosBIF->PrPwdKhILx4);
    for (; VM6k8JosBIF->PrPwdKhILx4[(17 - 17)] != 'e' || VM6k8JosBIF->PrPwdKhILx4[(668 - 667)] != 'n' || VM6k8JosBIF->PrPwdKhILx4[(27 - 25)] != 'd';) {
        scanf ("%s %c%d%s%s", &VM6k8JosBIF->bvSyW8Ym, &VM6k8JosBIF->Bhi4IaAgQ, &VM6k8JosBIF->cqA5IHG, &VM6k8JosBIF->BNUMlrXI, &VM6k8JosBIF->aKC9D7cYO3T);
        L3fDtAJ->qaCEVMlx = VM6k8JosBIF;
        L3fDtAJ = VM6k8JosBIF;
        VM6k8JosBIF = (struct   student *) malloc (LEN);
        VM6k8JosBIF->R7IQdVZ1tsCw = L3fDtAJ;
        scanf ("%s", &VM6k8JosBIF->PrPwdKhILx4);
    }
    L3fDtAJ->qaCEVMlx = NULL;
    for (; L3fDtAJ != NULL;) {
        printf ("%s %s %c %d %s %s\n", L3fDtAJ->PrPwdKhILx4, L3fDtAJ->bvSyW8Ym, L3fDtAJ->Bhi4IaAgQ, L3fDtAJ->cqA5IHG, L3fDtAJ->BNUMlrXI, L3fDtAJ->aKC9D7cYO3T);
        L3fDtAJ = L3fDtAJ->R7IQdVZ1tsCw;
    }
}

