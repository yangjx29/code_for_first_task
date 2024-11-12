int XrAp4R9 [MAX];
int T_hs [MAX];

int hs_cmp (const  void  *lrh9nb, const  void  *q) {
    return *(int*) lrh9nb - *(int*) q;
}

int main (int lh2u1qsTVKH, char **Mupw9X6qi) {
    int CDXPaQNh;
    for (; scanf ("%d", &CDXPaQNh), CDXPaQNh;) {
        int YXa0eHV4Lv;
        int FTawP9hvB;
        int Qr;
        int dVd2ua0HKWh;
        int eUjwOWG3Vd;
        YXa0eHV4Lv = (367 - 367);
        int wZDuOPVB3E;
        FTawP9hvB = dVd2ua0HKWh = (433 - 433);
        {
            wZDuOPVB3E = 244 - 244;
            while (wZDuOPVB3E < CDXPaQNh) {
                scanf ("%d", &T_hs[wZDuOPVB3E]);
                wZDuOPVB3E++;
            };
        }
        for (wZDuOPVB3E = (830 - 830); wZDuOPVB3E < CDXPaQNh; wZDuOPVB3E = wZDuOPVB3E + 1)
            scanf ("%d", &XrAp4R9[wZDuOPVB3E]);
        qsort (XrAp4R9, CDXPaQNh, sizeof (int), hs_cmp);
        qsort (T_hs, CDXPaQNh, sizeof (int), hs_cmp);
        for (wZDuOPVB3E = (914 - 914); wZDuOPVB3E < CDXPaQNh; wZDuOPVB3E++)
            printf ("(%d %d) ", XrAp4R9[wZDuOPVB3E], T_hs[wZDuOPVB3E]);
        Qr = eUjwOWG3Vd = CDXPaQNh -1;
        while (dVd2ua0HKWh <= eUjwOWG3Vd) {
            if (T_hs[dVd2ua0HKWh] > XrAp4R9[FTawP9hvB]) {
                dVd2ua0HKWh = dVd2ua0HKWh + 1;
                YXa0eHV4Lv += (355 - 155);
                FTawP9hvB = FTawP9hvB +1;
            }
            else {
                if (T_hs[eUjwOWG3Vd] > XrAp4R9[Qr]) {
                    Qr = Qr -1;
                    YXa0eHV4Lv += (611 - 411);
                    eUjwOWG3Vd--;
                }
                else if (T_hs[dVd2ua0HKWh] < XrAp4R9[Qr]) {
                    Qr--;
                    YXa0eHV4Lv -= 200;
                    dVd2ua0HKWh++;
                }
                else {
                    Qr--;
                    dVd2ua0HKWh++;
                };
            };
        }
        printf ("%d\n", YXa0eHV4Lv);
        printf ("\n");
    }
    return (814 - 814);
}

