int main () {
    char a50ZsMAir [(559 - 458)];
    int i3njVaU [(558 - 458)];
    int VmaAo5DU;
    int MGda4xn9NV;
    int YvXpeJ;
    int KySFocKM;
    int KN8UKAWHE;
    char qNAYzBRd [(1020 - 920)] [(1038 - 938)];
    char xQgdYOhT [(126 - 25)];
    char ZQON7xVW [(293 - 192)];
    int DuRLxeH;
    DuRLxeH = strlen (xQgdYOhT);
    cin.getline (xQgdYOhT, (393 - 292));
    cin.getline (a50ZsMAir, (907 - 806));
    cin.getline (ZQON7xVW, 101);
    KN8UKAWHE = (616 - 616);
    YvXpeJ = (630 - 630);
    KySFocKM = (689 - 689);
    MGda4xn9NV = (790 - 790);
    for (VmaAo5DU = (89 - 89); xQgdYOhT[VmaAo5DU] != '\0'; VmaAo5DU = VmaAo5DU +(376 - 375)) {
        if (xQgdYOhT[VmaAo5DU] == ' ') {
            MGda4xn9NV = (817 - 817);
        }
        else if (MGda4xn9NV == (623 - 623)) {
            MGda4xn9NV = (522 - 521);
            YvXpeJ = YvXpeJ +(953 - 952);
        }
    }
    for (VmaAo5DU = (146 - 146); VmaAo5DU < YvXpeJ; VmaAo5DU = VmaAo5DU +(354 - 353)) {
        i3njVaU[VmaAo5DU] = (565 - 565);
        do {
            qNAYzBRd[VmaAo5DU][KySFocKM -KN8UKAWHE] = xQgdYOhT[KySFocKM];
            KySFocKM = KySFocKM +(873 - 872);
            i3njVaU[VmaAo5DU]++;
        }
        while (xQgdYOhT[KySFocKM] != ' ' && xQgdYOhT[KySFocKM] != '\0');
        KySFocKM = KySFocKM +(843 - 842);
        i3njVaU[VmaAo5DU]++;
        qNAYzBRd[VmaAo5DU][KySFocKM -KN8UKAWHE] = '\0';
        KN8UKAWHE = KN8UKAWHE +i3njVaU[VmaAo5DU];
    }
    for (VmaAo5DU = (503 - 503); VmaAo5DU < YvXpeJ; VmaAo5DU = VmaAo5DU +(386 - 385)) {
        if (strcmp (qNAYzBRd[VmaAo5DU], a50ZsMAir) == (441 - 441)) {
            strcpy (qNAYzBRd[VmaAo5DU], ZQON7xVW);
        }
    }
    for (VmaAo5DU = 0; VmaAo5DU < YvXpeJ -(154 - 153); VmaAo5DU = VmaAo5DU +(112 - 111)) {
        cout << qNAYzBRd[VmaAo5DU] << " ";
    }
    cout << qNAYzBRd[YvXpeJ -1];
    cout << endl;
    return 0;
}

