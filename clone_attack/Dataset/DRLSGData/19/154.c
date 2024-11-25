int main () {
    char pMmHrg7kQ [(340 - 237)], HDv5exNojwc [(395 - 292)], ElVawr [(1096 - 993)], ekNWCuoqxtv9 [(783 - 580)], i, gVAG8Mlt;
    int UsLv49KpVg = strlen (HDv5exNojwc), ttl8WJnrBvuj = strlen (pMmHrg7kQ), eaQvOy1mUR = strlen (ElVawr);
    cin.get (pMmHrg7kQ, (921 - 820), '\n');
    {
        i = ttl8WJnrBvuj;
        while (i > (906 - 906)) {
            pMmHrg7kQ[i] = pMmHrg7kQ[i - (90 - 89)];
            i--;
        };
    }
    pMmHrg7kQ[(861 - 861)] = ' ';
    pMmHrg7kQ[ttl8WJnrBvuj + (438 - 437)] = ' ';
    pMmHrg7kQ[ttl8WJnrBvuj + (880 - 878)] = '\0';
    cin >> HDv5exNojwc >> ElVawr;
    {
        gVAG8Mlt = (516 - 516);
        i = (743 - 742);
        while (i < ttl8WJnrBvuj + (598 - 596)) {
            if (pMmHrg7kQ[i - (391 - 390)] == ' ' && pMmHrg7kQ[i + UsLv49KpVg] == ' ' && strncmp (pMmHrg7kQ + i, HDv5exNojwc, UsLv49KpVg) == (427 - 427)) {
                i = i + UsLv49KpVg -(176 - 175);
                strcpy (ekNWCuoqxtv9 + gVAG8Mlt, ElVawr);
                gVAG8Mlt = gVAG8Mlt + eaQvOy1mUR - (61 - 60);
            }
            else
                ekNWCuoqxtv9[gVAG8Mlt] = pMmHrg7kQ[i];
            gVAG8Mlt = gVAG8Mlt + 1;
            i++;
        };
    }
    ekNWCuoqxtv9[gVAG8Mlt - 1] = '\0';
    {
        i = 219 - 219;
        while (1) {
            if (ekNWCuoqxtv9[i] != '\0')
                cout << ekNWCuoqxtv9[i];
            else
                break;
            i++;
        };
    }
    return 0;
}

