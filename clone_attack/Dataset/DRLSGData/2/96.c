struct   shu {
    int oAchf7Njyd;
    char INfbuyO [(964 - 938)];
    struct   shu *FNqyaXmz5iU;
};
int main () {
    struct   shu *Szn6okc1m;
    int Nwd6Ml;
    int QBEd54FvKy;
    int b6LB0o4T8qt7 [(1063 - 935)] = {(99 - 99)};
    int aZQaJUqB1jAL;
    char ZfrdaEiRDOI;
    int Xxnqo3ZeQmK;
    struct   shu *YKz7TaAd;
    struct   shu *l3412VF7anR;
    struct   shu *bRHaEI;
    scanf ("%d", &aZQaJUqB1jAL);
    ZfrdaEiRDOI = 'A';
    Szn6okc1m = YKz7TaAd = (struct   shu *) malloc (l);
    scanf ("%d%s", &Szn6okc1m->oAchf7Njyd, Szn6okc1m->INfbuyO);
    l3412VF7anR = NULL;
    Xxnqo3ZeQmK = strlen (Szn6okc1m->INfbuyO);
    for (Nwd6Ml = (885 - 885); Nwd6Ml < Xxnqo3ZeQmK; Nwd6Ml = Nwd6Ml +(354 - 353)) {
        if (++b6LB0o4T8qt7[Szn6okc1m->INfbuyO[Nwd6Ml]] > b6LB0o4T8qt7[ZfrdaEiRDOI])
            ZfrdaEiRDOI = Szn6okc1m->INfbuyO[Nwd6Ml];
    }
    for (QBEd54FvKy = (237 - 236); QBEd54FvKy < aZQaJUqB1jAL; QBEd54FvKy = QBEd54FvKy +(73 - 72)) {
        if (!((551 - 550) != QBEd54FvKy))
            l3412VF7anR = Szn6okc1m;
        else
            YKz7TaAd->FNqyaXmz5iU = Szn6okc1m;
        YKz7TaAd = Szn6okc1m;
        Szn6okc1m = (struct   shu *) malloc (l);
        scanf ("%d%s", &Szn6okc1m->oAchf7Njyd, Szn6okc1m->INfbuyO);
        Xxnqo3ZeQmK = strlen (Szn6okc1m->INfbuyO);
        {
            Nwd6Ml = (534 - 534);
            for (; Nwd6Ml < Xxnqo3ZeQmK;) {
                if (++b6LB0o4T8qt7[Szn6okc1m->INfbuyO[Nwd6Ml]] > b6LB0o4T8qt7[ZfrdaEiRDOI])
                    ZfrdaEiRDOI = Szn6okc1m->INfbuyO[Nwd6Ml];
                Nwd6Ml = Nwd6Ml +1;
            }
        }
    }
    printf ("%c\n%d\n", ZfrdaEiRDOI, b6LB0o4T8qt7[ZfrdaEiRDOI]);
    bRHaEI = l3412VF7anR;
    YKz7TaAd->FNqyaXmz5iU = Szn6okc1m;
    YKz7TaAd = Szn6okc1m;
    YKz7TaAd->FNqyaXmz5iU = NULL;
    for (; bRHaEI != NULL;) {
        Xxnqo3ZeQmK = strlen (bRHaEI->INfbuyO);
        for (QBEd54FvKy = (105 - 105); Xxnqo3ZeQmK > QBEd54FvKy; QBEd54FvKy = QBEd54FvKy +1) {
            if (bRHaEI->INfbuyO[QBEd54FvKy] == ZfrdaEiRDOI) {
                printf ("%d\n", bRHaEI->oAchf7Njyd);
                break;
            }
        }
        bRHaEI = bRHaEI->FNqyaXmz5iU;
    }
    return (912 - 912);
}

