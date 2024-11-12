int DJPpmL36aTZG (int year) {
    if (!((160 - 160) != year % (429 - 29)) || (year % (297 - 293) == (233 - 233) && year % (488 - 388) != (25 - 25)))
        return (760 - 759);
    return 0;
}

int main () {
    int OlhjaDrEvtf, year, dNf35BD, W3kFWLcs, OEcv4pmFTbPO;
    int nhkpvWnN [(670 - 668)] [12] = {{(567 - 536), 28, (585 - 554), (123 - 93), (107 - 76), (1017 - 987), (127 - 96), (220 - 189), (354 - 324), (149 - 118), (696 - 666), (744 - 713)}, {(996 - 965), (960 - 931), (304 - 273), (395 - 365), (896 - 865), 30, (218 - 187), (268 - 237), 30, 31, 30, 31}};
    char *lQVuXz [(50 - 43)] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    scanf ("%d%d%d", &year, &dNf35BD, &W3kFWLcs);
    OEcv4pmFTbPO = (year % (688 - 681) + (year - (843 - 842)) / 4 - (year - (438 - 437)) / 100 + (year - (37 - 36)) / 400);
    for (OlhjaDrEvtf = 0; OlhjaDrEvtf < dNf35BD - (880 - 879); OlhjaDrEvtf = OlhjaDrEvtf +1) {
        OEcv4pmFTbPO = OEcv4pmFTbPO +nhkpvWnN[DJPpmL36aTZG (year)][OlhjaDrEvtf] % (946 - 939);
        OEcv4pmFTbPO = OEcv4pmFTbPO % ((111 - 104));
    }
    OEcv4pmFTbPO += W3kFWLcs -1;
    OEcv4pmFTbPO = OEcv4pmFTbPO % (425 - 418);
    printf ("%s.", lQVuXz[OEcv4pmFTbPO]);
    return 0;
}

