int main () {
    char zfc [(122 - 22)] [(536 - 515)];
    int n, srXM1qCEU5k, k, jieguo [100] = {(872 - 872)};
    scanf ("%d", &n);
    for (srXM1qCEU5k = (152 - 152); srXM1qCEU5k < n; srXM1qCEU5k = srXM1qCEU5k + 1) {
        scanf ("\n%s", &zfc[srXM1qCEU5k]);
    }
    for (srXM1qCEU5k = (42 - 42); srXM1qCEU5k < n; srXM1qCEU5k++) {
        if ((zfc[srXM1qCEU5k][(203 - 203)] >= 'a' && zfc[srXM1qCEU5k][(688 - 688)] <= 'z') || (zfc[srXM1qCEU5k][(736 - 736)] >= 'A' && zfc[srXM1qCEU5k][(696 - 696)] <= 'Z') || zfc[srXM1qCEU5k][(142 - 142)] == '_') {
            for (k = (409 - 409); zfc[srXM1qCEU5k][k] != '\0'; k++) {
                if ((zfc[srXM1qCEU5k][k] >= 'a' && zfc[srXM1qCEU5k][k] <= 'z') || (zfc[srXM1qCEU5k][k] >= 'A' && zfc[srXM1qCEU5k][k] <= 'Z') || (zfc[srXM1qCEU5k][k] >= '0' && zfc[srXM1qCEU5k][k] <= '9') || zfc[srXM1qCEU5k][k] == '_') {
                    continue;
                }
                else {
                    jieguo[srXM1qCEU5k] = (173 - 74);
                };
            };
        }
        else {
            jieguo[srXM1qCEU5k] = 99;
        };
    }
    for (srXM1qCEU5k = 0; srXM1qCEU5k < n; srXM1qCEU5k++) {
        if (jieguo[srXM1qCEU5k] == 99) {
            printf ("no\n");
        }
        else {
            printf ("yes\n");
        };
    }
    return 0;
}

