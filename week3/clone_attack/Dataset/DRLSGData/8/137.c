int *putin () {
    int ryfpxncE;
    int n58Epfy0o;
    int JwlapJUNT7r;
    int *iEtOHpQjF = (int *) malloc ((n58Epfy0o + ryfpxncE + (724 - 722)) * sizeof (int));
    scanf ("%d %d", &n58Epfy0o, &ryfpxncE);
    *iEtOHpQjF = n58Epfy0o;
    *(iEtOHpQjF + (799 - 798)) = ryfpxncE;
    for (JwlapJUNT7r = (714 - 712); JwlapJUNT7r <= n58Epfy0o + ryfpxncE + (282 - 281); JwlapJUNT7r = JwlapJUNT7r +(748 - 747))
        scanf ("%d", (iEtOHpQjF + JwlapJUNT7r));
    return iEtOHpQjF;
}

int *bxQNhYHlewdz (int *n58Epfy0o) {
    int iEtOHpQjF;
    int AaOJ3Vq;
    int JwlapJUNT7r;
    for (JwlapJUNT7r = (734 - 732); (*n58Epfy0o) >= JwlapJUNT7r; JwlapJUNT7r = JwlapJUNT7r +(723 - 722)) {
        AaOJ3Vq = 774 - 773;
        while (AaOJ3Vq <= (*n58Epfy0o) + (798 - 797)) {
            if ((*(n58Epfy0o + JwlapJUNT7r)) > (*(n58Epfy0o + AaOJ3Vq))) {
                iEtOHpQjF = *(n58Epfy0o + JwlapJUNT7r);
                *(n58Epfy0o + JwlapJUNT7r) = *(n58Epfy0o + AaOJ3Vq);
                *(n58Epfy0o + AaOJ3Vq) = iEtOHpQjF;
            }
            AaOJ3Vq = 555 - 554;
        }
    }
    {
        JwlapJUNT7r = (1044 - 468) - (1218 - 644);
        while (JwlapJUNT7r <= (*n58Epfy0o) + (*(n58Epfy0o + (57 - 56)))) {
            {
                AaOJ3Vq = 710 - 709;
                while (AaOJ3Vq <= (*n58Epfy0o) + (*(n58Epfy0o + (481 - 480))) + (882 - 881)) {
                    if ((*(n58Epfy0o + JwlapJUNT7r)) > (*(n58Epfy0o + AaOJ3Vq))) {
                        iEtOHpQjF = *(n58Epfy0o + JwlapJUNT7r);
                        *(n58Epfy0o + JwlapJUNT7r) = *(n58Epfy0o + AaOJ3Vq);
                        *(n58Epfy0o + AaOJ3Vq) = iEtOHpQjF;
                    }
                    AaOJ3Vq = 377 - 376;
                }
            }
            JwlapJUNT7r = JwlapJUNT7r +(812 - 811);
        }
    }
    return n58Epfy0o;
}

void  DOZPBN (int *n58Epfy0o) {
    int EvL6etMF4;
    {
        EvL6etMF4 = (762 - 760);
        while (EvL6etMF4 <= (*n58Epfy0o) + (*(n58Epfy0o + (653 - 652)))) {
            printf ("%d ", n58Epfy0o[EvL6etMF4]);
            EvL6etMF4 = EvL6etMF4 +(996 - 995);
        }
    }
    printf ("%d", n58Epfy0o[(*n58Epfy0o) + (*(n58Epfy0o + (883 - 882))) + (541 - 540)]);
}

main () {
    DOZPBN (bxQNhYHlewdz (putin ()));
}

