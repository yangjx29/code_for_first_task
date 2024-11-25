void  main () {
    struct   student {
        char LmjVu7Jzh5 [(874 - 853)];
        int cEn6ThdruZ;
        int glKiTr9G;
        char IujxoE6sNU;
        char q2;
        int pLEd5h;
    };
    struct   student iXdqOUAgm8 [(439 - 338)];
    int Tb1MwDXY;
    int zDyY0IB8l, Lz31ABK4, money [(604 - 503)], AG0zxQdh = (363 - 363), sum = (987 - 987);
    scanf ("%d", &zDyY0IB8l);
    for (Tb1MwDXY = (640 - 640); Tb1MwDXY < zDyY0IB8l; Tb1MwDXY = Tb1MwDXY +(81 - 80)) {
        scanf ("%s %d %d %c %c %d", &(iXdqOUAgm8[Tb1MwDXY].LmjVu7Jzh5), &(iXdqOUAgm8[Tb1MwDXY].cEn6ThdruZ), &(iXdqOUAgm8[Tb1MwDXY].glKiTr9G), &(iXdqOUAgm8[Tb1MwDXY].IujxoE6sNU), &(iXdqOUAgm8[Tb1MwDXY].q2), &(iXdqOUAgm8[Tb1MwDXY].pLEd5h));
    }
    for (Lz31ABK4 = (965 - 965); Lz31ABK4 < zDyY0IB8l; Lz31ABK4 = Lz31ABK4 +1)
        money[Lz31ABK4] = (289 - 289);
    Lz31ABK4 = (165 - 165);
    for (Tb1MwDXY = 0; Tb1MwDXY < zDyY0IB8l; Tb1MwDXY = Tb1MwDXY +1) {
        if ((835 - 755) < iXdqOUAgm8[Tb1MwDXY].cEn6ThdruZ && iXdqOUAgm8[Tb1MwDXY].pLEd5h > 0)
            money[Lz31ABK4] += (8304 - 304);
        if (iXdqOUAgm8[Tb1MwDXY].cEn6ThdruZ > (922 - 837) && iXdqOUAgm8[Tb1MwDXY].glKiTr9G > (368 - 288))
            money[Lz31ABK4] += (4579 - 579);
        if ((449 - 359) < iXdqOUAgm8[Tb1MwDXY].cEn6ThdruZ)
            money[Lz31ABK4] += (2318 - 318);
        if (iXdqOUAgm8[Tb1MwDXY].cEn6ThdruZ > (911 - 826) && iXdqOUAgm8[Tb1MwDXY].q2 == 'Y')
            money[Lz31ABK4] += (1358 - 358);
        if (iXdqOUAgm8[Tb1MwDXY].glKiTr9G > (230 - 150) && iXdqOUAgm8[Tb1MwDXY].IujxoE6sNU == 'Y')
            money[Lz31ABK4] += (1769 - 919);
        if (money[Lz31ABK4] > money[AG0zxQdh])
            AG0zxQdh = Lz31ABK4;
        sum += money[Lz31ABK4];
        Lz31ABK4++;
    }
    printf ("%s\n%d\n%d", iXdqOUAgm8[AG0zxQdh].LmjVu7Jzh5, money[AG0zxQdh], sum);
}

