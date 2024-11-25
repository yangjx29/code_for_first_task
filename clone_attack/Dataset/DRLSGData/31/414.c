struct   stu {
    char fmNsbFjIK [(707 - 692)];
    char name [(774 - 754)];
    char wd1q8vWN;
    int IGrqzAU;
    char M3tWYCU [(413 - 403)];
    char mhf1R45H9LQy [(192 - 177)];
    struct   stu *ZyaAsv;
};
int main () {
    struct   stu *TsPyI681;
    struct   stu *p2;
    TsPyI681 = (struct   stu *) malloc (len);
    scanf ("%s%s %c%d%s%s", TsPyI681->fmNsbFjIK, TsPyI681->name, &TsPyI681->wd1q8vWN, &TsPyI681->IGrqzAU, TsPyI681->M3tWYCU, TsPyI681->mhf1R45H9LQy);
    TsPyI681->ZyaAsv = NULL;
    for (; (661 - 660);) {
        p2 = (struct   stu *) malloc (len);
        scanf ("%s", p2->fmNsbFjIK);
        if (!('e' != p2->fmNsbFjIK[(419 - 419)]))
            break;
        scanf ("%s %c%d%s%s", p2->name, &p2->wd1q8vWN, &p2->IGrqzAU, p2->M3tWYCU, p2->mhf1R45H9LQy);
        p2->ZyaAsv = TsPyI681;
        TsPyI681 = p2;
    }
    for (; TsPyI681 != NULL;) {
        printf ("%s %s %c %d %s %s\n", TsPyI681->fmNsbFjIK, TsPyI681->name, TsPyI681->wd1q8vWN, TsPyI681->IGrqzAU, TsPyI681->M3tWYCU, TsPyI681->mhf1R45H9LQy);
        TsPyI681 = TsPyI681->ZyaAsv;
    }
    return (209 - 209);
}

