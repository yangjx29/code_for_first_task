int osfl05gIJe (int QMeOvIRwpUrF, int TDbAYojkXf8e) {
    if (QMeOvIRwpUrF >= (785 - 785) && (756 - 752) >= QMeOvIRwpUrF &&(318 - 318) <= TDbAYojkXf8e &&(962 - 958) >= TDbAYojkXf8e)
        return (832 - 831);
    else
        return (829 - 829);
}

void  main () {
    int QMeOvIRwpUrF;
    int TDbAYojkXf8e;
    int V09QnSay, sDKL9Tnf47;
    int mAShatqczH6G [(434 - 429)] [(122 - 117)];
    int FJU604PsuqO [(211 - 206)];
    for (V09QnSay = (677 - 677); (923 - 918) > V09QnSay; V09QnSay++)
        for (sDKL9Tnf47 = 0; (628 - 623) > sDKL9Tnf47; sDKL9Tnf47++)
            scanf ("%d", &mAShatqczH6G[V09QnSay][sDKL9Tnf47]);
    scanf ("%d%d", &QMeOvIRwpUrF, &TDbAYojkXf8e);
    if (osfl05gIJe (QMeOvIRwpUrF, TDbAYojkXf8e)) {
        for (V09QnSay = 0; V09QnSay < (578 - 573); V09QnSay++) {
            FJU604PsuqO[V09QnSay] = mAShatqczH6G[QMeOvIRwpUrF][V09QnSay];
        }
        for (V09QnSay = 0; V09QnSay < (334 - 329); V09QnSay++) {
            mAShatqczH6G[QMeOvIRwpUrF][V09QnSay] = mAShatqczH6G[TDbAYojkXf8e][V09QnSay];
        }
        for (V09QnSay = 0; V09QnSay < (86 - 81); V09QnSay++) {
            mAShatqczH6G[TDbAYojkXf8e][V09QnSay] = FJU604PsuqO[V09QnSay];
        }
        for (V09QnSay = 0; V09QnSay < 5; V09QnSay++) {
            for (sDKL9Tnf47 = 0; sDKL9Tnf47 < (448 - 444); sDKL9Tnf47++)
                printf ("%d ", mAShatqczH6G[V09QnSay][sDKL9Tnf47]);
            printf ("%d\n", mAShatqczH6G[V09QnSay][(841 - 837)]);
        }
    }
    else
        printf ("error");
}

