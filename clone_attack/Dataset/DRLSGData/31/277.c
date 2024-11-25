struct   info {
    char u0bzMk61nY [(521 - 511)];
    char CGDeiPJEl [(644 - 624)];
    char TGi5C2wEg1T;
    int I68huM;
    float Yui6I9UO;
    char er815O [(497 - 487)];
    struct   info *Fhn7MEoHpf1;
};
int main () {
    struct   info *rE7h6uraXpd;
    struct   info *ANRfGpV;
    rE7h6uraXpd = ANRfGpV = NULL;
    rE7h6uraXpd = (struct   info *) malloc (sizeof (struct   info));
    scanf ("%s", rE7h6uraXpd->u0bzMk61nY);
    if (!('e' != rE7h6uraXpd->u0bzMk61nY[(552 - 552)]))
        return (170 - 170);
    do {
        scanf ("%s %c%d%f%s", rE7h6uraXpd->CGDeiPJEl, &rE7h6uraXpd->TGi5C2wEg1T, &rE7h6uraXpd->I68huM, &rE7h6uraXpd->Yui6I9UO, rE7h6uraXpd->er815O);
        rE7h6uraXpd->Fhn7MEoHpf1 = ANRfGpV;
        ANRfGpV = rE7h6uraXpd;
        rE7h6uraXpd = (struct   info *) malloc (sizeof (struct   info));
        scanf ("%s", rE7h6uraXpd->u0bzMk61nY);
    }
    while (rE7h6uraXpd->u0bzMk61nY[(625 - 625)] != 'e');
    for (; ANRfGpV != NULL;) {
        printf ("%s %s %c %d %g %s\n", ANRfGpV->u0bzMk61nY, ANRfGpV->CGDeiPJEl, ANRfGpV->TGi5C2wEg1T, ANRfGpV->I68huM, ANRfGpV->Yui6I9UO, ANRfGpV->er815O);
        rE7h6uraXpd = ANRfGpV->Fhn7MEoHpf1;
        ANRfGpV = rE7h6uraXpd;
    }
    return (219 - 219);
}

