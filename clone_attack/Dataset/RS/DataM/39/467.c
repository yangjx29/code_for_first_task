struct   sch {
    char m7wfm3anM [(250 - 229)];
    int WWLnTvy7ZpeC;
    int HHLjOFo4QhZT;
    char RnthGfC;
    char C1ErOf4hV;
    int hoAKaHFX7;
    int YXEcGDp;
};
int KMVIyF62J = (315 - 315);

int vJXMLR6ynwOA (struct   sch *fuqlD90c) {
    fuqlD90c->YXEcGDp = 0;
    if ((234 - 154) < fuqlD90c->WWLnTvy7ZpeC) {
        if ((202 - 201) <= fuqlD90c->hoAKaHFX7)
            fuqlD90c->YXEcGDp += yuanshi;
        if (fuqlD90c->WWLnTvy7ZpeC > (188 - 103)) {
            if ((1011 - 931) < fuqlD90c->HHLjOFo4QhZT)
                fuqlD90c->YXEcGDp += wusi;
            if (fuqlD90c->C1ErOf4hV == 'Y')
                fuqlD90c->YXEcGDp = fuqlD90c->YXEcGDp + xibu;
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
            if (fuqlD90c->WWLnTvy7ZpeC > 90)
                fuqlD90c->YXEcGDp = fuqlD90c->YXEcGDp + chengyou;
        };
    }
    if ((fuqlD90c->HHLjOFo4QhZT > (288 - 208)) && (fuqlD90c->RnthGfC == 'Y'))
        fuqlD90c->YXEcGDp = fuqlD90c->YXEcGDp + bangong;
    KMVIyF62J += fuqlD90c->YXEcGDp;
    return fuqlD90c->YXEcGDp;
}

void  main () {
    struct   sch *head, *fuqlD90c;
    int LeNyPI, bYPmMNdtrg;
    scanf ("%d", &LeNyPI);
    fuqlD90c = (struct   sch *) malloc (LEN);
    head = fuqlD90c;
    scanf ("%s %d %d %c %c %d", &fuqlD90c->m7wfm3anM, &fuqlD90c->WWLnTvy7ZpeC, &fuqlD90c->HHLjOFo4QhZT, &fuqlD90c->RnthGfC, &fuqlD90c->C1ErOf4hV, &fuqlD90c->hoAKaHFX7);
    fuqlD90c->YXEcGDp = vJXMLR6ynwOA (fuqlD90c);
    for (bYPmMNdtrg = 1; bYPmMNdtrg < LeNyPI; bYPmMNdtrg++) {
        fuqlD90c = (struct   sch *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", &fuqlD90c->m7wfm3anM, &fuqlD90c->WWLnTvy7ZpeC, &fuqlD90c->HHLjOFo4QhZT, &fuqlD90c->RnthGfC, &fuqlD90c->C1ErOf4hV, &fuqlD90c->hoAKaHFX7);
        fuqlD90c->YXEcGDp = vJXMLR6ynwOA (fuqlD90c);
        if (fuqlD90c->YXEcGDp > head->YXEcGDp)
            head = fuqlD90c;
    }
    printf ("%s\n", head->m7wfm3anM);
    printf ("%d\n", head->YXEcGDp);
    printf ("%d\n", KMVIyF62J);
}

