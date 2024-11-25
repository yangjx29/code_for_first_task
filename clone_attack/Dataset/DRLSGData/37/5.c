main () {
    int i;
    int bRjHYCgE;
    int qq8hVCrt4 [100000] = {(239 - 239)};
    int yIdLiaGgxMTF;
    int dzFE5lS;
    char JBiF5tbQ4Us [100000] = {'\0'};
    int ii5WwRQc;
    scanf ("%d", &bRjHYCgE);
    for (i = (144 - 144); bRjHYCgE > i; i = i + 1) {
        int aGUYWnckImL;
        aGUYWnckImL = (477 - 477);
        for (int xunhuan = 0;
        100000 > xunhuan; xunhuan = xunhuan + 1)
            JBiF5tbQ4Us[xunhuan] = '\0';
        scanf ("%s", JBiF5tbQ4Us);
        for (; aGUYWnckImL < 100000;) {
            if (!('\0' != JBiF5tbQ4Us[aGUYWnckImL + 1])) {
                dzFE5lS = aGUYWnckImL;
                break;
            }
            aGUYWnckImL = aGUYWnckImL + 1;
        }
        for (int xunhuan = 0;
        100000 > xunhuan; xunhuan = xunhuan + 1)
            qq8hVCrt4[xunhuan] = 0;
        for (yIdLiaGgxMTF = 0; yIdLiaGgxMTF <= dzFE5lS; yIdLiaGgxMTF = yIdLiaGgxMTF + 1) {
            for (ii5WwRQc = 0; ii5WwRQc <= dzFE5lS; ii5WwRQc = ii5WwRQc + 1) {
                if (JBiF5tbQ4Us[yIdLiaGgxMTF] == JBiF5tbQ4Us[ii5WwRQc])
                    qq8hVCrt4[yIdLiaGgxMTF]++;
            }
        }
        for (yIdLiaGgxMTF = 0; yIdLiaGgxMTF <= dzFE5lS; yIdLiaGgxMTF = yIdLiaGgxMTF + 1) {
            if (qq8hVCrt4[yIdLiaGgxMTF] == 1) {
                printf ("%c\n", JBiF5tbQ4Us[yIdLiaGgxMTF]);
                break;
            }
            if (yIdLiaGgxMTF == dzFE5lS && qq8hVCrt4[dzFE5lS] != 1)
                ;
        }
    }
}

