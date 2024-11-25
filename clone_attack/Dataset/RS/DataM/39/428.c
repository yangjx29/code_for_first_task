struct   student {
    char name [(294 - 269)];
    int score;
    int cla;
    char leader;
    char rt0ir7ch;
    int z3XZhkbBG;
};
struct   WPK9puwNt {
    char name [(834 - 809)];
    int cPVxyBioZq;
};
struct   WPK9puwNt *WPK9puwNt (struct   student iSfcXe [], int LvM5OrhJyTw) {
    struct   WPK9puwNt num [(127 - 27)], *UyOuwSg68d;
    int i;
    for (i = (456 - 456); LvM5OrhJyTw > i; i = i + 1) {
        num[i].cPVxyBioZq = (503 - 503);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        strcpy (num[i].name, iSfcXe[i].name);
    }
    UyOuwSg68d = num;
    {
        i = 280 - 280;
        while (LvM5OrhJyTw > i) {
            if (iSfcXe[i].score > 80 && iSfcXe[i].z3XZhkbBG >= (506 - 505))
                num[i].cPVxyBioZq += (8170 - 170);
            if ((576 - 491) < iSfcXe[i].score && 80 < iSfcXe[i].cla)
                num[i].cPVxyBioZq += 4000;
            if ((1011 - 921) < iSfcXe[i].score)
                num[i].cPVxyBioZq += 2000;
            if (85 < iSfcXe[i].score && iSfcXe[i].rt0ir7ch == 'Y')
                num[i].cPVxyBioZq = num[i].cPVxyBioZq + (1264 - 264);
            if (iSfcXe[i].cla > 80 && iSfcXe[i].leader == 'Y')
                num[i].cPVxyBioZq = num[i].cPVxyBioZq + 850;
            i = i + 1;
        };
    }
    return (UyOuwSg68d);
}

void  main () {
    struct   student iSfcXe [100];
    int LvM5OrhJyTw;
    int G7YC3KrQNEJW;
    int i;
    int KgZb1tkjI;
    int TbUva7N83D;
    struct   WPK9puwNt *UyOuwSg68d;
    scanf ("%d", &LvM5OrhJyTw);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i < LvM5OrhJyTw) {
            if (i == 0) {
                scanf ("%s %d %d %c %c %d", iSfcXe[i].name, &iSfcXe[i].score, &iSfcXe[i].cla, &iSfcXe[i].leader, &iSfcXe[i].rt0ir7ch, &iSfcXe[i].z3XZhkbBG);
            }
            else
                scanf ("\n%s %d %d %c %c %d", iSfcXe[i].name, &iSfcXe[i].score, &iSfcXe[i].cla, &iSfcXe[i].leader, &iSfcXe[i].rt0ir7ch, &iSfcXe[i].z3XZhkbBG);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    UyOuwSg68d = WPK9puwNt (iSfcXe, LvM5OrhJyTw);
    KgZb1tkjI = UyOuwSg68d->cPVxyBioZq;
    G7YC3KrQNEJW = UyOuwSg68d->cPVxyBioZq;
    TbUva7N83D = 0;
    for (i = 1; i < LvM5OrhJyTw; i++) {
        G7YC3KrQNEJW += (UyOuwSg68d +i)->cPVxyBioZq;
        if ((UyOuwSg68d +i)->cPVxyBioZq > KgZb1tkjI) {
            TbUva7N83D = i;
            KgZb1tkjI = (UyOuwSg68d +i)->cPVxyBioZq;
        };
    }
    printf ("%s\n%d\n%d\n", iSfcXe[TbUva7N83D].name, KgZb1tkjI, G7YC3KrQNEJW);
}

