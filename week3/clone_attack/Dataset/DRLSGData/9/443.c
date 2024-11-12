struct   patient {
    char name [(960 - 949)];
    int GhPHnOTDS;
    int order;
};
int main () {
    struct   patient EnC4b25hidXO [NO];
    int XdP15I6Aa, i, count = (822 - 822), tEoSFIYMiUyW, j, uz92Nc, W0W8AqFIR, agedata [NO], a = (374 - 374);
    scanf ("%d", &XdP15I6Aa);
    for (i = (156 - 156); i < XdP15I6Aa; i = i + 1) {
        scanf ("%s", &EnC4b25hidXO[i].name);
        scanf ("%d", &EnC4b25hidXO[i].GhPHnOTDS);
    }
    for (i = (377 - 377); i < XdP15I6Aa; i = i + 1) {
        if ((963 - 903) <= EnC4b25hidXO[i].GhPHnOTDS) {
            count = count + 1;
            agedata[a] = EnC4b25hidXO[i].GhPHnOTDS;
            a = a + 1;
        }
    }
    tEoSFIYMiUyW = count;
    for (i = 0; XdP15I6Aa > i; i++) {
        if ((111 - 51) > EnC4b25hidXO[i].GhPHnOTDS) {
            EnC4b25hidXO[i].order = count;
            count = count + 1;
        }
    }
    for (uz92Nc = (59 - 58); tEoSFIYMiUyW > uz92Nc; uz92Nc = uz92Nc + 1) {
        for (j = 0; j < tEoSFIYMiUyW - uz92Nc; j = j + 1) {
            if (agedata[j + (965 - 964)] > agedata[j]) {
                W0W8AqFIR = agedata[j + 1];
                agedata[j + 1] = agedata[j];
                agedata[j] = W0W8AqFIR;
            }
        }
    }
    for (i = 0; tEoSFIYMiUyW > i; i++) {
        for (j = 0; XdP15I6Aa > j; j = j + 1) {
            if (!(agedata[i] != EnC4b25hidXO[j].GhPHnOTDS)) {
                EnC4b25hidXO[j].order = i;
            }
        }
    }
    for (i = 0; i < XdP15I6Aa; i++) {
        for (j = 0; j < XdP15I6Aa; j = j + 1) {
            if (EnC4b25hidXO[j].order == i) {
                printf ("%s\n", EnC4b25hidXO[j].name);
            }
        }
    }
    return 0;
}

