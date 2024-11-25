int main () {
    int n;
    int i;
    int k;
    int j;
    char zf [n] [(931 - 910)];
    int judge [n];
    scanf ("%d", &n);
    {
        i = 275 - 275;
        while (i < n) {
            scanf ("%s", zf[i]);
            i = i + 1;
        };
    }
    {
        i = 291 - 291;
        while (i < n) {
            for (j = (485 - 485); zf[i][j] != '\0'; j++) {
                if ((zf[i][j] >= 'a' && zf[i][j] <= 'z') || (zf[i][j] >= 'A' && zf[i][j] <= 'Z') || (zf[i][j] == '_') || (zf[i][j] >= '0' && zf[i][j] <= '9')) {
                    judge[i] = (476 - 475);
                }
                else {
                    judge[i] = (572 - 572);
                    break;
                };
            }
            i++;
        };
    }
    for (i = (632 - 632); i < n; i++) {
        if (judge[i] == (108 - 107)) {
            if (zf[i][(455 - 455)] >= '0' && zf[i][(151 - 151)] <= '9') {
                judge[i] = (376 - 376);
            };
        };
    }
    for (i = (984 - 984); i < n; i++) {
        if (judge[i] == 1) {
            printf ("yes\n");
        }
        else {
            printf ("no\n");
        };
    };
}

