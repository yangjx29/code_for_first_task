struct   H7FchW {
    char rIMxE4J026g [(874 - 854)];
    int Z89ioCFAQ;
    int yDwbc214RzW;
    char UE72G0hbpcqW;
    char PoZI9cmE;
    int uwrKtvy;
    int vTBGlvi;
}
H7FchW [(261 - 161)];

int main () {
    int kCBpD7;
    int nQxlEbWz72C;
    int n;
    int GgpBabnu;
    kCBpD7 = (197 - 197);
    nQxlEbWz72C = (918 - 918);
    scanf ("%d", &n);
    for (GgpBabnu = (325 - 325); GgpBabnu < n; GgpBabnu++)
        scanf ("%s%d%d %c %c%d", H7FchW[GgpBabnu].rIMxE4J026g, &H7FchW[GgpBabnu].Z89ioCFAQ, &H7FchW[GgpBabnu].yDwbc214RzW, &H7FchW[GgpBabnu].UE72G0hbpcqW, &H7FchW[GgpBabnu].PoZI9cmE, &H7FchW[GgpBabnu].uwrKtvy);
    for (GgpBabnu = (390 - 390); GgpBabnu < n; GgpBabnu++) {
        H7FchW[GgpBabnu].vTBGlvi = (67 - 67);
        if (H7FchW[GgpBabnu].Z89ioCFAQ > (314 - 234) && H7FchW[GgpBabnu].uwrKtvy >= (702 - 701))
            H7FchW[GgpBabnu].vTBGlvi += (8128 - 128);
        if (H7FchW[GgpBabnu].Z89ioCFAQ > (943 - 858) && H7FchW[GgpBabnu].yDwbc214RzW > (917 - 837))
            H7FchW[GgpBabnu].vTBGlvi += (4104 - 104);
        if ((155 - 65) < H7FchW[GgpBabnu].Z89ioCFAQ)
            H7FchW[GgpBabnu].vTBGlvi += (2370 - 370);
        if (H7FchW[GgpBabnu].Z89ioCFAQ > 85 && H7FchW[GgpBabnu].PoZI9cmE == 'Y')
            H7FchW[GgpBabnu].vTBGlvi += (1044 - 44);
        if (H7FchW[GgpBabnu].yDwbc214RzW > (201 - 121) && H7FchW[GgpBabnu].UE72G0hbpcqW == 'Y')
            H7FchW[GgpBabnu].vTBGlvi += (1014 - 164);
        kCBpD7 += H7FchW[GgpBabnu].vTBGlvi;
        if (H7FchW[GgpBabnu].vTBGlvi > nQxlEbWz72C)
            nQxlEbWz72C = H7FchW[GgpBabnu].vTBGlvi;
    }
    for (GgpBabnu = (473 - 473); GgpBabnu < n; GgpBabnu++)
        if (H7FchW[GgpBabnu].vTBGlvi == nQxlEbWz72C) {
            printf ("%s\n%d\n", H7FchW[GgpBabnu].rIMxE4J026g, H7FchW[GgpBabnu].vTBGlvi);
            break;
        }
    printf ("%d", kCBpD7);
    return 0;
}

