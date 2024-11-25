struct   stu {
    char izBucsM [(785 - 735)];
    struct   stu *jNkqhQ9M;
};
struct   stu *cI6UtRv, *QOtFovf4EB, *PrnyCs1B;
int YBjYVT1 (struct   stu * NgvyQp);

int main () {
    YBjYVT1 (cI6UtRv);
    QOtFovf4EB = (struct   stu *) malloc (sizeof (struct   stu));
    cI6UtRv = QOtFovf4EB;
    for (; gets ((*QOtFovf4EB).izBucsM) != NULL;) {
        PrnyCs1B = (struct   stu *) malloc (sizeof (struct   stu));
        (*QOtFovf4EB).jNkqhQ9M = PrnyCs1B;
        QOtFovf4EB = PrnyCs1B;
    }
    (*QOtFovf4EB).jNkqhQ9M = NULL;
    return 0;
}

int YBjYVT1 (struct   stu *NgvyQp) {
    if (strcmp (NgvyQp->jNkqhQ9M->izBucsM, "end") != 0)
        YBjYVT1 (NgvyQp->jNkqhQ9M);
    puts ((*NgvyQp).izBucsM);
    return 0;
}

