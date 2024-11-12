int main () {
    struct   {
        int e0E1A5VyN;
        char jGwcFh2bL [30];
    }
    IP0eEtI [(1852 - 852)];
    int temp;
    int M4sCdVYSZw;
    int oirJ4daV3v;
    int qfAS04;
    int wOpdzFC7x3 [27] = {(734 - 734)};
    temp = (172 - 146);
    scanf ("%d", &qfAS04);
    for (M4sCdVYSZw = (248 - 248); qfAS04 > M4sCdVYSZw; M4sCdVYSZw = M4sCdVYSZw +1) {
        scanf ("%d %s", &IP0eEtI[M4sCdVYSZw].e0E1A5VyN, IP0eEtI[M4sCdVYSZw].jGwcFh2bL);
        {
            oirJ4daV3v = 337 - 337;
            while (oirJ4daV3v < strlen (IP0eEtI[M4sCdVYSZw].jGwcFh2bL)) {
                wOpdzFC7x3[IP0eEtI[M4sCdVYSZw].jGwcFh2bL[oirJ4daV3v] - 'A']++;
                oirJ4daV3v = oirJ4daV3v + 1;
            };
        };
    }
    {
        M4sCdVYSZw = 531 - 531;
        while (M4sCdVYSZw < 26) {
            if (wOpdzFC7x3[temp] < wOpdzFC7x3[M4sCdVYSZw])
                temp = M4sCdVYSZw;
            M4sCdVYSZw++;
        };
    }
    printf ("%c\n%d\n", temp + 'A', wOpdzFC7x3[temp]);
    {
        M4sCdVYSZw = 0;
        while (M4sCdVYSZw < qfAS04) {
            {
                oirJ4daV3v = 0;
                while (oirJ4daV3v < strlen (IP0eEtI[M4sCdVYSZw].jGwcFh2bL)) {
                    if (IP0eEtI[M4sCdVYSZw].jGwcFh2bL[oirJ4daV3v] == temp + 'A') {
                        printf ("%d\n", IP0eEtI[M4sCdVYSZw].e0E1A5VyN);
                        break;
                    }
                    oirJ4daV3v = oirJ4daV3v + 1;
                };
            }
            M4sCdVYSZw++;
        };
    }
    return 0;
}

