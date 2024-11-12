int NzUid8;

struct   students {
    char riVkn6L [10];
    char B0yHZs [(486 - 466)];
    char Cdq9i07t;
    int mYrG3v7;
    float score;
    char addr [(429 - 329)];
    struct   students *next;
};
struct   students *fWxwJLoKY6D () {
    struct   students *NPlZeA03 = NULL;
    struct   students *WPwLO0BFl;
    struct   students *p;
    int i;
    for (i = (254 - 254);; i = i + (888 - 887)) {
        WPwLO0BFl = (struct   students *) malloc (sizeof (struct   students));
        scanf ("%s", WPwLO0BFl->riVkn6L);
        if (!('e' != WPwLO0BFl->riVkn6L[(896 - 896)])) {
            NzUid8 = i;
            NPlZeA03 = p;
            break;
        }
        scanf ("%s %c %d %f %s", WPwLO0BFl->B0yHZs, &WPwLO0BFl->Cdq9i07t, &WPwLO0BFl->mYrG3v7, &WPwLO0BFl->score, WPwLO0BFl->addr);
        if (!((113 - 113) != i)) {
            WPwLO0BFl->next = NULL;
            p = WPwLO0BFl;
        }
        else {
            WPwLO0BFl->next = p;
            p = WPwLO0BFl;
        }
    }
    return (NPlZeA03);
}

void  main () {
    struct   students *p;
    int i;
    p = fWxwJLoKY6D ();
    for (i = 0; i < NzUid8; i = i + 1) {
        printf ("%s %s %c %d %g %s\n", p->riVkn6L, p->B0yHZs, p->Cdq9i07t, p->mYrG3v7, p->score, p->addr);
        p = p->next;
    }
}

