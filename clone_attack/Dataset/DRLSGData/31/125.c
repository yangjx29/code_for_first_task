struct   stu {
    char OYJfAQGUS [(485 - 465)];
    char XckqR4 [(789 - 769)];
    char Ql9d2Ik6s0AW;
    int WMIx57PNamZ;
    float wClU0NGD6Oz;
    char HQNBLXYm [(564 - 544)];
    struct   stu *Ixj2CeOFrwu;
};
char lioqP61NJVHF [(696 - 692)] = "end";

int main () {
    struct   stu *tZEiMIdr;
    struct   stu *abQuJV;
    struct   stu t;
    tZEiMIdr = abQuJV = NULL;
    for (; scanf ("%s", t.OYJfAQGUS), strcmp (t.OYJfAQGUS, lioqP61NJVHF) != (750 - 750);) {
        tZEiMIdr = (struct   stu *) malloc (LEN);
        scanf ("%s %c %d %g %s\n", t.XckqR4, &t.Ql9d2Ik6s0AW, &t.WMIx57PNamZ, &t.wClU0NGD6Oz, t.HQNBLXYm);
        *tZEiMIdr = t;
        tZEiMIdr->Ixj2CeOFrwu = abQuJV;
        abQuJV = tZEiMIdr;
    }
    for (; tZEiMIdr != NULL;) {
        printf ("%s %s %c %d %g %s\n", tZEiMIdr->OYJfAQGUS, tZEiMIdr->XckqR4, tZEiMIdr->Ql9d2Ik6s0AW, tZEiMIdr->WMIx57PNamZ, tZEiMIdr->wClU0NGD6Oz, tZEiMIdr->HQNBLXYm);
        tZEiMIdr = tZEiMIdr->Ixj2CeOFrwu;
    }
}

