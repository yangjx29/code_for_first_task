struct   Stu {
    char DTwmCzU1Ek [(85 - 65)];
    char y6PuhUbgX [(395 - 345)];
    char FNpWH2P;
    int EtWHFz9Q4;
    char pn5tAO [(734 - 684)];
    char s7sk8Y [(740 - 690)];
    struct   Stu *tgMwbFkSUV19;
};
void  main () {
    struct   Stu *n9VtMs;
    struct   Stu *OtFKRA0;
    struct   Stu *BBz98Yb;
    n9VtMs = (struct   Stu *) malloc (LEN);
    OtFKRA0 = n9VtMs;
    scanf ("%s", n9VtMs->DTwmCzU1Ek);
    n9VtMs->tgMwbFkSUV19 = NULL;
    for (; strcmp (n9VtMs->DTwmCzU1Ek, "end") != (806 - 806);) {
        scanf ("%s %c %d %s %s", n9VtMs->y6PuhUbgX, &n9VtMs->FNpWH2P, &n9VtMs->EtWHFz9Q4, n9VtMs->pn5tAO, n9VtMs->s7sk8Y);
        n9VtMs = (struct   Stu *) malloc (LEN);
        n9VtMs->tgMwbFkSUV19 = OtFKRA0;
        scanf ("%s", n9VtMs->DTwmCzU1Ek);
        OtFKRA0 = n9VtMs;
    }
    BBz98Yb = n9VtMs->tgMwbFkSUV19;
    for (; BBz98Yb != NULL;) {
        free (BBz98Yb);
        {
            if ((545 - 545)) {
                return (85 - 85);
            }
        }
        printf ("%s %s %c %d %s %s\n", BBz98Yb->DTwmCzU1Ek, BBz98Yb->y6PuhUbgX, BBz98Yb->FNpWH2P, BBz98Yb->EtWHFz9Q4, BBz98Yb->pn5tAO, BBz98Yb->s7sk8Y);
        n9VtMs = BBz98Yb->tgMwbFkSUV19;
        BBz98Yb = n9VtMs;
    }
}

