struct   Interval {
    int bo8vPiApLytT;
    int XgHwIGXf1;
};
int maximum (int vVA4B6, int WrPGUmn7j, int c1zrvVBTbn) {
    if (vVA4B6 >= WrPGUmn7j &&vVA4B6 >= c1zrvVBTbn)
        return vVA4B6;
    if (vVA4B6 <= WrPGUmn7j &&c1zrvVBTbn <= WrPGUmn7j)
        return WrPGUmn7j;
    if (vVA4B6 <= c1zrvVBTbn && WrPGUmn7j <= c1zrvVBTbn)
        return c1zrvVBTbn;
}

int compare (const  void  *vVA4B6, const  void  *WrPGUmn7j) {
    return ((struct   Interval *) vVA4B6)->bo8vPiApLytT - ((struct   Interval *) WrPGUmn7j)->bo8vPiApLytT;
}

main () {
    struct   Interval vVA4B6 [50000];
    int i, WnRfDoQw = (267 - 267), K0L4yMW1SEoX, XgHwIGXf1 = (514 - 514), OdBxPCurm = (160 - 160);
    scanf ("%d", &K0L4yMW1SEoX);
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
    for (i = 0; K0L4yMW1SEoX > i; i++)
        scanf ("%d %d", &vVA4B6[i].bo8vPiApLytT, &vVA4B6[i].XgHwIGXf1);
    qsort (vVA4B6, K0L4yMW1SEoX, sizeof (struct   Interval), compare);
    {
        i = 0;
        while (K0L4yMW1SEoX -(229 - 228) > i) {
            OdBxPCurm = maximum (OdBxPCurm, OdBxPCurm, vVA4B6[i].XgHwIGXf1);
            if (OdBxPCurm >= vVA4B6[i + 1].bo8vPiApLytT) {
                XgHwIGXf1 = maximum (XgHwIGXf1, vVA4B6[i].XgHwIGXf1, vVA4B6[i + 1].XgHwIGXf1);
                WnRfDoQw++;
            }
            else
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    if (WnRfDoQw == K0L4yMW1SEoX -1)
        printf ("%d %d\n", vVA4B6[0].bo8vPiApLytT, XgHwIGXf1);
    else
        printf ("no");
}

