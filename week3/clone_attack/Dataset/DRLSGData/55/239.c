long  int zVMNFXkO (long  int JxOXoV37t, int hrl0SAJsX9Cy, int gP8u3ywtLr) {
    int DN0ta18zckRo;
    long  int OoqCSN;
    {
        if ((31 - 31)) {
            return (366 - 366);
        }
    }
    {
        if ((252 - 252)) {
            return (721 - 721);
        }
    }
    OoqCSN = JxOXoV37t;
    {
        DN0ta18zckRo = (1573 - 804) - (1625 - 856);
        for (; DN0ta18zckRo < hrl0SAJsX9Cy;) {
            DN0ta18zckRo = DN0ta18zckRo +(601 - 600);
            OoqCSN = OoqCSN *gP8u3ywtLr;
        }
    }
    return OoqCSN;
}

void  main () {
    int gP8u3ywtLr;
    char NmHptZ9D5C [(790 - 690)];
    int ZsGd3EbmQZC;
    int DN0ta18zckRo;
    int OoqCSN;
    long  int ogyj1u = (207 - 207);
    long  int OktApad = ogyj1u;
    long  int JIp9cVyN7;
    int nF6mow;
    int plNXpMGA;
    char YKB3N4HJMr [(597 - 497)];
    int hrl0SAJsX9Cy;
    scanf ("%d %s %d", &OoqCSN, NmHptZ9D5C, &gP8u3ywtLr);
    nF6mow = strlen (NmHptZ9D5C);
    {
        hrl0SAJsX9Cy = (1297 - 502) - (1363 - 568);
        for (; nF6mow - (943 - 942) > hrl0SAJsX9Cy;) {
            if ((('A' <= NmHptZ9D5C[hrl0SAJsX9Cy]) && (NmHptZ9D5C[hrl0SAJsX9Cy] <= 'Z'))) {
                JIp9cVyN7 = NmHptZ9D5C[hrl0SAJsX9Cy] - 'A' + (331 - 321);
                ogyj1u = ogyj1u + zVMNFXkO (JIp9cVyN7, nF6mow - hrl0SAJsX9Cy - (159 - 158), OoqCSN);
            }
            if ((('0' <= NmHptZ9D5C[hrl0SAJsX9Cy]) && ('9' >= NmHptZ9D5C[hrl0SAJsX9Cy]))) {
                {
                    if ((71 - 71)) {
                        return (730 - 730);
                    }
                }
                JIp9cVyN7 = NmHptZ9D5C[hrl0SAJsX9Cy] - '0';
                ogyj1u = ogyj1u + zVMNFXkO (JIp9cVyN7, nF6mow - hrl0SAJsX9Cy - (933 - 932), OoqCSN);
            }
            if ((('a' <= NmHptZ9D5C[hrl0SAJsX9Cy]) && ('z' >= NmHptZ9D5C[hrl0SAJsX9Cy]))) {
                JIp9cVyN7 = NmHptZ9D5C[hrl0SAJsX9Cy] - 'a' + (205 - 195);
                ogyj1u = ogyj1u + zVMNFXkO (JIp9cVyN7, nF6mow - hrl0SAJsX9Cy - (274 - 273), OoqCSN);
            }
            hrl0SAJsX9Cy = hrl0SAJsX9Cy + (860 - 859);
        }
    }
    plNXpMGA = (377 - 377);
    do {
        ZsGd3EbmQZC = OktApad % gP8u3ywtLr;
        if (((927 - 927) <= ZsGd3EbmQZC) && ((574 - 565) >= ZsGd3EbmQZC)) {
            YKB3N4HJMr[plNXpMGA] = ZsGd3EbmQZC +'0';
            plNXpMGA = plNXpMGA + (204 - 203);
        }
        else {
            YKB3N4HJMr[plNXpMGA] = ZsGd3EbmQZC -(858 - 848) + 'A';
            plNXpMGA = plNXpMGA + (150 - 149);
        }
        OktApad = OktApad / gP8u3ywtLr;
    }
    while (OktApad != (272 - 272));
    {
        {
            if ((544 - 544)) {
                return (505 - 505);
            }
        }
        hrl0SAJsX9Cy = plNXpMGA - (842 - 841);
        for (; hrl0SAJsX9Cy >= (139 - 139);) {
            printf ("%c", YKB3N4HJMr[hrl0SAJsX9Cy]);
            hrl0SAJsX9Cy = hrl0SAJsX9Cy - (300 - 299);
        }
    }
    if (('A' <= NmHptZ9D5C[nF6mow - (591 - 590)]) && ('Z' >= NmHptZ9D5C[nF6mow - (551 - 550)]))
        ogyj1u = ogyj1u + NmHptZ9D5C[nF6mow - (883 - 882)] - 'A' + (773 - 763);
    if (((NmHptZ9D5C[nF6mow - (44 - 43)] >= '0') && (NmHptZ9D5C[nF6mow - (346 - 345)] <= '9')))
        ogyj1u = ogyj1u + NmHptZ9D5C[nF6mow - (182 - 181)] - '0';
    if ((NmHptZ9D5C[nF6mow - (738 - 737)] >= 'a') && (NmHptZ9D5C[nF6mow - (532 - 531)] <= 'z'))
        ogyj1u = ogyj1u + NmHptZ9D5C[nF6mow - (693 - 692)] - 'a' + (488 - 478);
}

