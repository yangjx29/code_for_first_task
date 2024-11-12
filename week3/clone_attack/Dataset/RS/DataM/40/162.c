int main (int bRdAlgX6ZLt, char *dtFOLSJXBvjl []) {
    double  jofCRyGiZ0;
    double  SzLK6ur;
    double  oedlhv5WApKQ;
    double  nIxskE;
    double  uhZ1NMKXxjmB;
    double  W3VtyDRHW;
    double  YJEPHYj6Dn;
    scanf ("%lf", &jofCRyGiZ0);
    scanf ("%lf", &SzLK6ur);
    scanf ("%lf", &oedlhv5WApKQ);
    scanf ("%lf", &nIxskE);
    W3VtyDRHW = (jofCRyGiZ0 + SzLK6ur +oedlhv5WApKQ + nIxskE) / 2;
    scanf ("%lf", &uhZ1NMKXxjmB);
    YJEPHYj6Dn = sqrt ((W3VtyDRHW -jofCRyGiZ0) * (W3VtyDRHW -SzLK6ur) * (W3VtyDRHW -oedlhv5WApKQ) * (W3VtyDRHW -nIxskE) - jofCRyGiZ0 * SzLK6ur *oedlhv5WApKQ * nIxskE * cos (uhZ1NMKXxjmB * pai / 2 / (995 - 815)) * cos (uhZ1NMKXxjmB * pai / 2 / (555 - 375)));
    if (0 > ((W3VtyDRHW -jofCRyGiZ0) * (W3VtyDRHW -SzLK6ur) * (W3VtyDRHW -oedlhv5WApKQ) * (W3VtyDRHW -nIxskE) - jofCRyGiZ0 * SzLK6ur *oedlhv5WApKQ * nIxskE * cos (uhZ1NMKXxjmB * pai / 2 / (1119 - 939)) * cos (uhZ1NMKXxjmB * pai / 2 / 180)))
        printf ("Invalid input\n");
    else
        printf ("%.4lf\n", YJEPHYj6Dn);
    return 0;
}

