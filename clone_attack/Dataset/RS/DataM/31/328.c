struct   student {
    char OA4f6pW [20];
    char nUkjXf48s [20];
    char WBicmjfV;
    int age;
    char R3K7qdMeB9 [20];
    char u5oEkKcqdu [20];
    struct   student *uJEciG;
};
struct   student YUgEfq2l [200];

struct   student *ioZnRxFf () {
    struct   student *GkQJd73, *WcVPWwz;
    GkQJd73 = NULL;
    WcVPWwz = (struct   student *) malloc (LEN);
    scanf ("%s", WcVPWwz->OA4f6pW);
    while (!(0 == strcmp (WcVPWwz->OA4f6pW, "end"))) {
        scanf ("%s %c %d %s %s", WcVPWwz->nUkjXf48s, &WcVPWwz->WBicmjfV, &WcVPWwz->age, WcVPWwz->R3K7qdMeB9, WcVPWwz->u5oEkKcqdu);
        WcVPWwz->uJEciG = GkQJd73;
        GkQJd73 = WcVPWwz;
        WcVPWwz = (struct   student *) malloc (LEN);
        scanf ("%s", WcVPWwz->OA4f6pW);
    }
    return (GkQJd73);
}

void  vHei0P (struct   student *GkQJd73) {
    struct   student *WcVPWwz;
    WcVPWwz = GkQJd73;
    while (WcVPWwz != NULL) {
        printf ("%s %s %c %d %s %s\n", WcVPWwz->OA4f6pW, WcVPWwz->nUkjXf48s, WcVPWwz->WBicmjfV, WcVPWwz->age, WcVPWwz->R3K7qdMeB9, WcVPWwz->u5oEkKcqdu);
        WcVPWwz = WcVPWwz->uJEciG;
    };
}

main () {
    struct   student *GkQJd73;
    vHei0P (GkQJd73);
    GkQJd73 = ioZnRxFf ();
    return 0;
}

