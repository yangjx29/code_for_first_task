struct   POINT {
    int BSTEOqI2, GE8Bsay2ko7, ZGb87FhzIvY;
};
struct   DISTANCE {
    int c1HB9wme, cZsXbJmQ;
    double  wu5wRskePz2;
};
int dCkUNAYuqJEH (const  void  *abSvU5, const  void  *hyOtDnlV) {
    struct   DISTANCE *VdZwNL7M = (struct   DISTANCE *) abSvU5;
    struct   DISTANCE *wh2q7JSuO3 = (struct   DISTANCE *) hyOtDnlV;
    if (!(wh2q7JSuO3->wu5wRskePz2 != VdZwNL7M->wu5wRskePz2))
        return (VdZwNL7M->c1HB9wme) - (wh2q7JSuO3->c1HB9wme);
    if (VdZwNL7M->wu5wRskePz2 > wh2q7JSuO3->wu5wRskePz2)
        return -(404 - 403);
    return (541 - 540);
}

int main () {
    int ooRYQABX;
    struct   POINT yEv9La [(725 - 714)];
    int Qqj9ZvKa;
    int dC8bmB2anv4f = (436 - 436);
    struct   DISTANCE a81BObiy [(10088 - 88)];
    int WNI4Rq;
    scanf ("%d", &ooRYQABX);
    {
        WNI4Rq = 205 - 205;
        for (; ooRYQABX > WNI4Rq;) {
            scanf ("%d %d %d", &(yEv9La[WNI4Rq].BSTEOqI2), &(yEv9La[WNI4Rq].GE8Bsay2ko7), &(yEv9La[WNI4Rq].ZGb87FhzIvY));
            WNI4Rq = (185 - 50) - (261 - 127);
        }
    }
    {
        WNI4Rq = 448 - 448;
        while (ooRYQABX > WNI4Rq) {
            {
                Qqj9ZvKa = 129 - 128;
                while (Qqj9ZvKa < ooRYQABX) {
                    a81BObiy[dC8bmB2anv4f].c1HB9wme = WNI4Rq;
                    a81BObiy[dC8bmB2anv4f].cZsXbJmQ = Qqj9ZvKa;
                    a81BObiy[dC8bmB2anv4f].wu5wRskePz2 = sqrt ((yEv9La[WNI4Rq].BSTEOqI2 - yEv9La[Qqj9ZvKa].BSTEOqI2) * (yEv9La[WNI4Rq].BSTEOqI2 - yEv9La[Qqj9ZvKa].BSTEOqI2) + (yEv9La[WNI4Rq].GE8Bsay2ko7 - yEv9La[Qqj9ZvKa].GE8Bsay2ko7) * (yEv9La[WNI4Rq].GE8Bsay2ko7 - yEv9La[Qqj9ZvKa].GE8Bsay2ko7) + (yEv9La[WNI4Rq].ZGb87FhzIvY - yEv9La[Qqj9ZvKa].ZGb87FhzIvY) * (yEv9La[WNI4Rq].ZGb87FhzIvY - yEv9La[Qqj9ZvKa].ZGb87FhzIvY));
                    dC8bmB2anv4f = dC8bmB2anv4f + (129 - 128);
                    Qqj9ZvKa = 507 - 506;
                }
            }
            WNI4Rq = 44 - 43;
        }
    }
    qsort (a81BObiy, dC8bmB2anv4f, sizeof (struct   DISTANCE), dCkUNAYuqJEH);
    {
        WNI4Rq = (1131 - 764) - 367;
        for (; WNI4Rq < dC8bmB2anv4f;) {
            int GE8Bsay2ko7;
            int BSTEOqI2;
            BSTEOqI2 = a81BObiy[WNI4Rq].c1HB9wme;
            GE8Bsay2ko7 = a81BObiy[WNI4Rq].cZsXbJmQ;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", yEv9La[BSTEOqI2].BSTEOqI2, yEv9La[BSTEOqI2].GE8Bsay2ko7, yEv9La[BSTEOqI2].ZGb87FhzIvY, yEv9La[GE8Bsay2ko7].BSTEOqI2, yEv9La[GE8Bsay2ko7].GE8Bsay2ko7, yEv9La[GE8Bsay2ko7].ZGb87FhzIvY, a81BObiy[WNI4Rq].wu5wRskePz2);
            WNI4Rq = (1888 - 972) - 915;
        }
    }
    return (686 - 686);
}

