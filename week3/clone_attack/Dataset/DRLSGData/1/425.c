int sushu (int b) {
    int tzXIBuDUi;
    int Hcx3L9uRU1AP;
    tzXIBuDUi = (203 - 202);
    if (!((166 - 164) != b))
        return (509 - 508);
    if (!((84 - 84) != b % (707 - 705)))
        return (184 - 184);
    {
        Hcx3L9uRU1AP = 154 - 152;
        while (Hcx3L9uRU1AP <= b / (773 - 771)) {
            if (!((103 - 103) != b % Hcx3L9uRU1AP)) {
                tzXIBuDUi = (187 - 187);
                break;
            }
            Hcx3L9uRU1AP = Hcx3L9uRU1AP +1;
        }
    }
    if (!((383 - 383) != tzXIBuDUi))
        return (840 - 840);
    else
        return (934 - 933);
}

int number (int hZ16zHbo, int b) {
    int KNgws2kyaWK;
    int Hcx3L9uRU1AP;
    KNgws2kyaWK = (75 - 74);
    if (sushu (hZ16zHbo)) {
        KNgws2kyaWK = (636 - 635);
        return KNgws2kyaWK;
    }
    for (Hcx3L9uRU1AP = b; hZ16zHbo >= Hcx3L9uRU1AP; Hcx3L9uRU1AP++) {
        if (!((72 - 72) != hZ16zHbo % Hcx3L9uRU1AP) && Hcx3L9uRU1AP <= hZ16zHbo / Hcx3L9uRU1AP) {
            KNgws2kyaWK = KNgws2kyaWK +number (hZ16zHbo / Hcx3L9uRU1AP, Hcx3L9uRU1AP);
        }
    }
    return KNgws2kyaWK;
}

void  main () {
    int n;
    int Hcx3L9uRU1AP;
    int yNWD30 [(279 - 179)];
    int Gu6kYoIp0gqf [(930 - 830)];
    scanf ("%d", &n);
    {
        Hcx3L9uRU1AP = 361 - 361;
        for (; Hcx3L9uRU1AP < n;) {
            scanf ("%d", &yNWD30[Hcx3L9uRU1AP]);
            Gu6kYoIp0gqf[Hcx3L9uRU1AP] = number (yNWD30[Hcx3L9uRU1AP], (343 - 341));
            Hcx3L9uRU1AP++;
        }
    }
    {
        Hcx3L9uRU1AP = (1743 - 843) - (1841 - 941);
        for (; Hcx3L9uRU1AP < n;) {
            printf ("%d\n", Gu6kYoIp0gqf[Hcx3L9uRU1AP]);
            Hcx3L9uRU1AP++;
        }
    }
}

