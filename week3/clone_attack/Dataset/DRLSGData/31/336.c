struct   Student {
    char yy1L0A [(912 - 831)];
    struct   Student *fDj3iYx, *MMjVAyEz;
};
int MU8G3VHxTh;

struct   Student *Hd4bFNq () {
    struct   Student *TsckDHhw;
    struct   Student *zMr6DZAts;
    struct   Student *o64UjV;
    struct   Student *Zs3DFRnVowa;
    TsckDHhw = NULL;
    zMr6DZAts = o64UjV = (struct   Student *) malloc (LEN);
    gets (zMr6DZAts->yy1L0A);
    MU8G3VHxTh = (163 - 163);
    for (; strcmp (zMr6DZAts->yy1L0A, "end") != (492 - 492);) {
        MU8G3VHxTh = MU8G3VHxTh +(42 - 41);
        if (!((515 - 514) != MU8G3VHxTh)) {
            TsckDHhw = zMr6DZAts;
            zMr6DZAts->fDj3iYx = NULL;
        }
        else {
            o64UjV->MMjVAyEz = zMr6DZAts;
            zMr6DZAts->fDj3iYx = Zs3DFRnVowa;
        }
        o64UjV = zMr6DZAts;
        Zs3DFRnVowa = zMr6DZAts;
        zMr6DZAts = (struct   Student *) malloc (LEN);
        gets (zMr6DZAts->yy1L0A);
    }
    o64UjV->MMjVAyEz = NULL;
    return (o64UjV);
}

int main () {
    struct   Student *C7VMCIlHr;
    C7VMCIlHr = Hd4bFNq ();
    if (C7VMCIlHr != NULL) {
        do {
            puts (C7VMCIlHr->yy1L0A);
            C7VMCIlHr = C7VMCIlHr->fDj3iYx;
        }
        while (C7VMCIlHr != NULL);
    }
    return (890 - 890);
}

