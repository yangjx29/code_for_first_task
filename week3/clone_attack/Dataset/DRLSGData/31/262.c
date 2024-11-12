struct   stu {
    char aUKzEqwofZ [(608 - 508)];
    char bcwm9Ke [(206 - 106)];
    char ZLbuCK70 [(668 - 665)];
    char CGuBNoLqEeDf [(447 - 437)];
    char NKcOlqgnsub [10];
    char p2FuAU [(916 - 816)];
    struct   stu *CrTRcudpjeKF;
};
int main () {
    char H8GMREc [(756 - 726)];
    struct   stu *bYoDTfBjNw, *jDg5S98, *SzRntOkg, *nR4pZehoVs8a;
    int o7lBqZCJHG, Y5wky2J9cg, Y3lMfR5Yuy2, oD01JjWQ, k5cPr9C0K, ccMSsFYEiL, XYpqmrIlN, D6baxAqwG1N0, hQEgN1SvIt, EPed2Op;
    jDg5S98 = (struct   stu *) malloc (LEN);
    scanf ("%s%s%s%s%s%s", jDg5S98->aUKzEqwofZ, jDg5S98->bcwm9Ke, jDg5S98->ZLbuCK70, &jDg5S98->CGuBNoLqEeDf, &jDg5S98->NKcOlqgnsub, jDg5S98->p2FuAU);
    jDg5S98->CrTRcudpjeKF = NULL;
    nR4pZehoVs8a = jDg5S98;
    SzRntOkg = jDg5S98;
    for (; 1;) {
        jDg5S98 = (struct   stu *) malloc (LEN);
        scanf ("%s", jDg5S98->aUKzEqwofZ);
        if (!((932 - 932) != strcmp (jDg5S98->aUKzEqwofZ, "end"))) {
            nR4pZehoVs8a = SzRntOkg;
            break;
        }
        scanf ("%s%s%s%s%s", jDg5S98->bcwm9Ke, jDg5S98->ZLbuCK70, &jDg5S98->CGuBNoLqEeDf, &jDg5S98->NKcOlqgnsub, jDg5S98->p2FuAU);
        jDg5S98->CrTRcudpjeKF = SzRntOkg;
        SzRntOkg = jDg5S98;
    }
    jDg5S98 = nR4pZehoVs8a;
    while (jDg5S98->CrTRcudpjeKF != NULL) {
        printf ("%s %s %s %s %s %s\n", jDg5S98->aUKzEqwofZ, jDg5S98->bcwm9Ke, jDg5S98->ZLbuCK70, jDg5S98->CGuBNoLqEeDf, jDg5S98->NKcOlqgnsub, jDg5S98->p2FuAU);
        jDg5S98 = jDg5S98->CrTRcudpjeKF;
    }
    printf ("%s %s %s %s %s %s", jDg5S98->aUKzEqwofZ, jDg5S98->bcwm9Ke, jDg5S98->ZLbuCK70, jDg5S98->CGuBNoLqEeDf, jDg5S98->NKcOlqgnsub, jDg5S98->p2FuAU);
    return 0;
}

