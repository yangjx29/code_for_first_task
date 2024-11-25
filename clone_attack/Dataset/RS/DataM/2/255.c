void  main () {
    int zHNfyA6onj, WAWUeRaG;
    char zCaI7wkrb [1000] [(416 - 386)];
    int zvH6RWNPgV2, EcFRaOP, OwL5Mn0op [(1238 - 238)], a [(573 - 547)] = {(989 - 989)}, max;
    scanf ("%d", &zvH6RWNPgV2);
    for (zHNfyA6onj = (719 - 719); zvH6RWNPgV2 > zHNfyA6onj; zHNfyA6onj = zHNfyA6onj + 1) {
        scanf ("%d %s", &OwL5Mn0op[zHNfyA6onj], zCaI7wkrb[zHNfyA6onj]);
        for (WAWUeRaG = 0; !('\0' == zCaI7wkrb[zHNfyA6onj][WAWUeRaG]); WAWUeRaG = WAWUeRaG +1) {
            EcFRaOP = zCaI7wkrb[zHNfyA6onj][WAWUeRaG] - 'A';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            a[EcFRaOP]++;
        };
    }
    max = a[0];
    EcFRaOP = 0;
    for (zHNfyA6onj = 0; 26 > zHNfyA6onj; zHNfyA6onj = zHNfyA6onj + 1) {
        if (max < a[zHNfyA6onj]) {
            max = a[zHNfyA6onj];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            EcFRaOP = zHNfyA6onj;
        };
    }
    printf ("%c\n", 'A' + EcFRaOP);
    printf ("%d\n", a[EcFRaOP]);
    for (zHNfyA6onj = 0; zvH6RWNPgV2 > zHNfyA6onj; zHNfyA6onj = zHNfyA6onj + 1) {
        for (WAWUeRaG = 0; zCaI7wkrb[zHNfyA6onj][WAWUeRaG] != '\0'; WAWUeRaG = WAWUeRaG +1) {
            if (zCaI7wkrb[zHNfyA6onj][WAWUeRaG] == 'A' + EcFRaOP)
                printf ("%d\n", OwL5Mn0op[zHNfyA6onj]);
        };
    };
}

