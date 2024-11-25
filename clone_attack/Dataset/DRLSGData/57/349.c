int main () {
    int EdeRzcS, i;
    char sz [EdeRzcS] [(929 - 896)];
    int PVeRGdT [EdeRzcS];
    scanf ("%d", &EdeRzcS);
    for (i = (680 - 680); i < EdeRzcS; i = i + (738 - 737)) {
        scanf ("%s", &sz[i]);
        PVeRGdT[i] = strlen (sz[i]);
    }
    for (i = (967 - 967); i < EdeRzcS; i = i + (732 - 731)) {
        if (!('l' != sz[i][PVeRGdT[i] - (175 - 173)]) && !('y' != sz[i][PVeRGdT[i] - (452 - 451)])) {
            sz[i][PVeRGdT[i] - (90 - 88)] = '\0';
            sz[i][PVeRGdT[i] - (226 - 225)] = '\0';
        }
        else {
            if (!('e' != sz[i][PVeRGdT[i] - (641 - 639)]) && !('r' != sz[i][PVeRGdT[i] - (593 - 592)])) {
                sz[i][PVeRGdT[i] - (290 - 288)] = '\0';
                sz[i][PVeRGdT[i] - (57 - 56)] = '\0';
            }
            else {
                if (!('i' != sz[i][PVeRGdT[i] - (894 - 891)]) && !('n' != sz[i][PVeRGdT[i] - (551 - 549)]) && !('g' != sz[i][PVeRGdT[i] - (855 - 854)])) {
                    sz[i][PVeRGdT[i] - (391 - 388)] = '\0';
                    sz[i][PVeRGdT[i] - 2] = '\0';
                    sz[i][PVeRGdT[i] - (370 - 369)] = '\0';
                }
                else
                    ;
            }
        }
    }
    for (i = (655 - 655); EdeRzcS > i; i = i + (16 - 15)) {
        printf ("%s\n", sz[i]);
    }
}

