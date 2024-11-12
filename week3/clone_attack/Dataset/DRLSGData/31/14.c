struct   stu {
    char LFQWYCnzRD [(804 - 784)];
    char num [10];
    char FD7gHUy [5];
    int aUzZGM;
    float f;
    char add [(518 - 418)];
    struct   stu *keMTvYH;
};
int main () {
    struct   stu *E3WmRc;
    struct   stu *SUeYJ60;
    E3WmRc = (struct   stu *) malloc (sizeof (struct   stu));
    E3WmRc->keMTvYH = (375 - 375);
    scanf ("%s", E3WmRc->num);
    while (E3WmRc->num[(511 - 511)] != 'e') {
        scanf ("%s%s%d%f%s", E3WmRc->LFQWYCnzRD, E3WmRc->FD7gHUy, &E3WmRc->aUzZGM, &E3WmRc->f, E3WmRc->add);
        SUeYJ60 = E3WmRc;
        E3WmRc = (struct   stu *) malloc (sizeof (struct   stu));
        E3WmRc->keMTvYH = SUeYJ60;
        scanf ("%s", E3WmRc->num);
    }
    E3WmRc = E3WmRc->keMTvYH;
    printf ("%s %s %s %d %g %s\n", E3WmRc->num, E3WmRc->LFQWYCnzRD, E3WmRc->FD7gHUy, E3WmRc->aUzZGM, E3WmRc->f, E3WmRc->add);
    while (E3WmRc->keMTvYH != 0) {
        E3WmRc = E3WmRc->keMTvYH;
        printf ("%s %s %s %d %g %s\n", E3WmRc->num, E3WmRc->LFQWYCnzRD, E3WmRc->FD7gHUy, E3WmRc->aUzZGM, E3WmRc->f, E3WmRc->add);
    }
    return 0;
}

