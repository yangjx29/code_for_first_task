void  main () {
    struct   s {
        char FZbL2kuhmpr [20];
        int X4bkX7Jw;
        int VSGBH7;
        char IkFg5tXAL;
        char HhVgkMYCpZy;
        int NEcBumjy;
    }
    DzGumlNeFVc1 [(789 - 689)];
    int gIG7DYwMdXx [(213 - 113)] = {(379 - 379)}, u6uIkHGer47Z, quvSnqAh2, EDKzOP8bh = (789 - 789), RZlJY2 = 0;
    long  Ow0YVtoBfmq = 0;
    scanf ("%d", &u6uIkHGer47Z);
    for (quvSnqAh2 = 0; u6uIkHGer47Z > quvSnqAh2; quvSnqAh2++) {
        getchar ();
        scanf ("%s", DzGumlNeFVc1[quvSnqAh2].FZbL2kuhmpr);
        scanf ("%d", &DzGumlNeFVc1[quvSnqAh2].X4bkX7Jw);
        scanf ("%d", &DzGumlNeFVc1[quvSnqAh2].VSGBH7);
        scanf ("%c", &DzGumlNeFVc1[quvSnqAh2].IkFg5tXAL);
        scanf ("%c", &DzGumlNeFVc1[quvSnqAh2].HhVgkMYCpZy);
        scanf ("%d", &DzGumlNeFVc1[quvSnqAh2].NEcBumjy);
        if (DzGumlNeFVc1[quvSnqAh2].X4bkX7Jw > (1003 - 923) && DzGumlNeFVc1[quvSnqAh2].NEcBumjy > 0)
            gIG7DYwMdXx[quvSnqAh2] = gIG7DYwMdXx[quvSnqAh2] + 8000;
        if ((847 - 762) < DzGumlNeFVc1[quvSnqAh2].X4bkX7Jw && DzGumlNeFVc1[quvSnqAh2].VSGBH7 > (436 - 356))
            gIG7DYwMdXx[quvSnqAh2] = gIG7DYwMdXx[quvSnqAh2] + 4000;
        if ((127 - 37) < DzGumlNeFVc1[quvSnqAh2].X4bkX7Jw)
            gIG7DYwMdXx[quvSnqAh2] = gIG7DYwMdXx[quvSnqAh2] + 2000;
        if (DzGumlNeFVc1[quvSnqAh2].X4bkX7Jw > (207 - 122) && DzGumlNeFVc1[quvSnqAh2].HhVgkMYCpZy == 'Y')
            gIG7DYwMdXx[quvSnqAh2] = gIG7DYwMdXx[quvSnqAh2] + 1000;
        if (DzGumlNeFVc1[quvSnqAh2].VSGBH7 > 80 && DzGumlNeFVc1[quvSnqAh2].IkFg5tXAL == 'Y')
            gIG7DYwMdXx[quvSnqAh2] = gIG7DYwMdXx[quvSnqAh2] + 850;
        Ow0YVtoBfmq = Ow0YVtoBfmq +gIG7DYwMdXx[quvSnqAh2];
        if (gIG7DYwMdXx[quvSnqAh2] > EDKzOP8bh) {
            EDKzOP8bh = gIG7DYwMdXx[quvSnqAh2];
            RZlJY2 = quvSnqAh2;
        }
        getchar ();
    }
    printf ("%s\n%d\n%d\n", DzGumlNeFVc1[RZlJY2].FZbL2kuhmpr, EDKzOP8bh, Ow0YVtoBfmq);
}

