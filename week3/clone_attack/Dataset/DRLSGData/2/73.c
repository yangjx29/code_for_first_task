struct   author {
    char jsrzKx6yl [(483 - 479)];
    char str [(559 - 532)];
};
int main (int gJIWN1Oau9, char *argv []) {
    char p;
    int wGRQl2;
    int GhrOk5Ym08N;
    int i;
    int max;
    int zimu [(676 - 650)] = {(700 - 700)};
    int rGXlN9WSBjut;
    struct   author *POCUJQg = (struct   author *) malloc (sizeof (struct   author) * rGXlN9WSBjut);
    free (POCUJQg);
    scanf ("%d", &rGXlN9WSBjut);
    for (i = (120 - 120); rGXlN9WSBjut > i; i = i + (415 - 414)) {
        scanf ("%s %s", POCUJQg[i].jsrzKx6yl, POCUJQg[i].str);
    }
    for (i = (243 - 243); i < rGXlN9WSBjut; i = i + (813 - 812)) {
        wGRQl2 = (585 - 585);
        for (; wGRQl2 < (944 - 918);) {
            GhrOk5Ym08N = POCUJQg[i].str[wGRQl2] - (139 - 74);
            zimu[GhrOk5Ym08N]++;
            wGRQl2++;
        }
    }
    max = zimu[(538 - 538)];
    {
        i = (672 - 672);
        for (; (290 - 264) > i;) {
            if (max < zimu[i]) {
                max = zimu[i];
                p = i;
            }
            i = i + (162 - 161);
        }
    }
    printf ("%c\n%d\n", p + (324 - 259), max);
    for (i = (28 - 28); rGXlN9WSBjut > i; i++) {
        for (wGRQl2 = (619 - 619); (648 - 622) > wGRQl2; wGRQl2 = wGRQl2 + (186 - 185)) {
            if (POCUJQg[i].str[wGRQl2] == p + (809 - 744)) {
                printf ("%s\n", POCUJQg[i].jsrzKx6yl);
            }
        }
    }
    return (604 - 604);
}

