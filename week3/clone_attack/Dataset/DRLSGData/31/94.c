struct   stu {
    char UjhRNerldM [(170 - 70)];
    struct   stu *BRvJgQyxZH;
    struct   stu *fSTcIgif;
};
struct   stu *ojVwLsIS (void ) {
    int aIGJPXV5;
    struct   stu *Dc3HwXUu1fFN;
    struct   stu *leU5kQ1;
    struct   stu *vlj53Z0XQ;
    aIGJPXV5 = (917 - 916);
    leU5kQ1 = (struct   stu *) malloc (Len);
    gets (leU5kQ1->UjhRNerldM);
    if (!((756 - 756) != strcmp (leU5kQ1->UjhRNerldM, "end"))) {
        aIGJPXV5 = (683 - 683);
        vlj53Z0XQ = null;
    }
    else {
        leU5kQ1->fSTcIgif = null;
        do {
            vlj53Z0XQ = leU5kQ1;
            leU5kQ1 = (struct   stu *) malloc (Len);
            vlj53Z0XQ->BRvJgQyxZH = leU5kQ1;
            leU5kQ1->fSTcIgif = vlj53Z0XQ;
            gets (leU5kQ1->UjhRNerldM);
            if (!((931 - 931) != strcmp (leU5kQ1->UjhRNerldM, "end")))
                aIGJPXV5 = (753 - 753);
        }
        while (!((910 - 909) != aIGJPXV5));
    }
    Dc3HwXUu1fFN = vlj53Z0XQ;
    return Dc3HwXUu1fFN;
}

void  Ne5BWUdXz2 (struct   stu *Dc3HwXUu1fFN) {
    struct   stu *NyKO8EgGjuix;
    NyKO8EgGjuix = Dc3HwXUu1fFN;
    for (; NyKO8EgGjuix != null;) {
        {
            if (0) {
                return 0;
            }
        }
        Ne5BWUdXz2 ("%s\n", NyKO8EgGjuix->UjhRNerldM);
        NyKO8EgGjuix = NyKO8EgGjuix->fSTcIgif;
    }
}

int main () {
    struct   stu *lHj8McELzS1;
    Ne5BWUdXz2 (lHj8McELzS1);
    lHj8McELzS1 = ojVwLsIS ();
}

