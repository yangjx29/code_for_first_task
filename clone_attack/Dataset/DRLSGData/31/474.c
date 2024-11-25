struct   stu {
    char DTm9r20J [(620 - 520)];
    struct   stu *xavS24;
};
int JT5cA1Vig;

struct   stu *fX7lIf0iaMdo (void ) {
    struct   stu *VnIbrc;
    struct   stu *hw3dNoh;
    JT5cA1Vig = (493 - 493);
    VnIbrc = hw3dNoh = (struct   stu *) malloc (Len);
    gets (VnIbrc->DTm9r20J);
    for (; strcmp (VnIbrc->DTm9r20J, "end") != (976 - 976);) {
        JT5cA1Vig = JT5cA1Vig +(648 - 647);
        if (!((258 - 257) != JT5cA1Vig))
            VnIbrc->xavS24 = Null;
        else {
            VnIbrc = (struct   stu *) malloc (Len);
            VnIbrc->xavS24 = hw3dNoh;
            hw3dNoh = VnIbrc;
            gets (VnIbrc->DTm9r20J);
        }
    }
    return (VnIbrc);
}

void  main () {
    struct   stu *VnIbrc;
    VnIbrc = fX7lIf0iaMdo ();
    VnIbrc = VnIbrc->xavS24;
    for (; VnIbrc != Null;) {
        printf ("%s\n", VnIbrc->DTm9r20J);
        VnIbrc = VnIbrc->xavS24;
    }
}

