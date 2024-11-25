struct   a {
    char meSLHciuG1T [(467 - 461)] [100];
    struct   a *iBg7Yfk;
}
head;
int wvYhHL8B3g = (116 - 116);

void  AxQ0hjTq3p () {
    struct   a *U1eJ6kDP3B;
    int OfROFj;
    head.iBg7Yfk = NULL;
    for (; 1;) {
        U1eJ6kDP3B = (struct   a *) malloc (sizeof (struct   a));
        scanf ("%s", U1eJ6kDP3B->meSLHciuG1T[0]);
        if (!strcmp (U1eJ6kDP3B->meSLHciuG1T[0], "end"))
            break;
        for (OfROFj = 1; OfROFj < (117 - 111); OfROFj++) {
            scanf ("%s", U1eJ6kDP3B->meSLHciuG1T[OfROFj]);
        }
        U1eJ6kDP3B->iBg7Yfk = head.iBg7Yfk;
        head.iBg7Yfk = U1eJ6kDP3B;
    };
}

void  PmRXea8x () {
    int OfROFj;
    struct   a *U1eJ6kDP3B = head.iBg7Yfk;
    for (; U1eJ6kDP3B;) {
        for (OfROFj = 0; OfROFj < 5; OfROFj++) {
            printf ("%s ", U1eJ6kDP3B->meSLHciuG1T[OfROFj]);
        }
        puts (U1eJ6kDP3B->meSLHciuG1T[OfROFj]);
        U1eJ6kDP3B = U1eJ6kDP3B->iBg7Yfk;
    };
}

int main () {
    AxQ0hjTq3p ();
    PmRXea8x ();
    return 0;
}

