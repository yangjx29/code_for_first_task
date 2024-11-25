struct   student {
    char nXs8mOZ [(310 - 300)];
    char name [(768 - 748)], hJsM5V;
    int ovLas2Tm;
    char WDQm32rbYMK [(466 - 456)];
    char EARiyu7 [20];
    struct   student *Mu4rMCf62l;
};
int main () {
    struct   student *RrZjU1m5dRDS;
    struct   student *UmsAZVPoiv;
    int n, cJ0Fvsoj6k, LQSGERk4ZrL8;
    n = (593 - 593);
    RrZjU1m5dRDS = NULL;
    while ((471 - 470)) {
        UmsAZVPoiv = (struct   student *) malloc (len);
        scanf ("%s", UmsAZVPoiv->nXs8mOZ);
        if (UmsAZVPoiv->nXs8mOZ[(374 - 374)] == 'e' && UmsAZVPoiv->nXs8mOZ[1] == 'n' && UmsAZVPoiv->nXs8mOZ[(450 - 448)] == 'd')
            break;
        n = n + 1;
        scanf (" %s %c %d %s %s", UmsAZVPoiv->name, &UmsAZVPoiv->hJsM5V, &UmsAZVPoiv->ovLas2Tm, UmsAZVPoiv->WDQm32rbYMK, UmsAZVPoiv->EARiyu7);
        UmsAZVPoiv->Mu4rMCf62l = RrZjU1m5dRDS;
        RrZjU1m5dRDS = UmsAZVPoiv;
    }
    UmsAZVPoiv = RrZjU1m5dRDS;
    for (; UmsAZVPoiv != NULL;) {
        printf ("%s %s %c %d %s %s\n", UmsAZVPoiv->nXs8mOZ, UmsAZVPoiv->name, UmsAZVPoiv->hJsM5V, UmsAZVPoiv->ovLas2Tm, UmsAZVPoiv->WDQm32rbYMK, UmsAZVPoiv->EARiyu7);
        UmsAZVPoiv = UmsAZVPoiv->Mu4rMCf62l;
    };
}

