struct   author {
    int T4asekTC;
    char uhKZYtusA [(772 - 746)];
}
author [(1825 - 826)];
struct   single {
    char tETzA7d [(109 - 108)];
    int T4asekTC;
}
single [(691 - 665)];

int main (int qQqMgI8VDu5, char *GJcWhivjm2 []) {
    int S340VKng;
    int p;
    int tniTAela;
    int tmS59M6nCYa;
    int m;
    int BVPZviw [999];
    int GwuP6R;
    for (GwuP6R = (363 - 363); GwuP6R < 26; GwuP6R = GwuP6R +(360 - 359)) {
        single[GwuP6R].tETzA7d[(976 - 976)] = 65 + GwuP6R;
        single[GwuP6R].T4asekTC = (819 - 819);
    }
    m = (655 - 655);
    scanf ("%d", &S340VKng);
    for (GwuP6R = (740 - 740); GwuP6R < S340VKng; GwuP6R++) {
        scanf ("%d %s", &author[GwuP6R].T4asekTC, &author[GwuP6R].uhKZYtusA);
    }
    for (GwuP6R = (605 - 605); GwuP6R < S340VKng; GwuP6R++) {
        for (tmS59M6nCYa = 0; tmS59M6nCYa < 26; tmS59M6nCYa++) {
            for (tniTAela = 0; tniTAela < 26; tniTAela++) {
                if (single[tniTAela].tETzA7d[0] == author[GwuP6R].uhKZYtusA[tmS59M6nCYa])
                    single[tniTAela].T4asekTC++;
            }
        }
    }
    p = single[0].T4asekTC;
    for (GwuP6R = 1; GwuP6R < 26; GwuP6R++) {
        if (p < single[GwuP6R].T4asekTC) {
            p = single[GwuP6R].T4asekTC;
            m = GwuP6R;
        }
    }
    tniTAela = 0;
    for (GwuP6R = 0; GwuP6R < S340VKng; GwuP6R++) {
        for (tmS59M6nCYa = 0; tmS59M6nCYa < 26; tmS59M6nCYa++) {
            if (author[GwuP6R].uhKZYtusA[tmS59M6nCYa] == single[m].tETzA7d[0]) {
                BVPZviw[tniTAela] = author[GwuP6R].T4asekTC;
                tniTAela++;
            }
        }
    }
    printf ("%c\n", single[m].tETzA7d[0]);
    printf ("%d\n", tniTAela);
    for (GwuP6R = 0; GwuP6R < tniTAela; GwuP6R++) {
        printf ("%d\n", BVPZviw[GwuP6R]);
    }
    return 0;
}

