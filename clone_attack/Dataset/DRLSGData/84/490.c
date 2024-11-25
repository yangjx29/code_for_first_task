void  TGlx7oa (int Oyouk3NOBb [], int wrNYzt) {
    int KBID87a;
    int zRmvegKu;
    int w9sAHN;
    {
        KBID87a = (251 - 251);
        while (wrNYzt > KBID87a) {
            {
                zRmvegKu = wrNYzt - (988 - 987);
                while (KBID87a < zRmvegKu) {
                    if (Oyouk3NOBb[zRmvegKu - (142 - 141)] < Oyouk3NOBb[zRmvegKu]) {
                        w9sAHN = Oyouk3NOBb[zRmvegKu - (887 - 886)];
                        Oyouk3NOBb[zRmvegKu - (279 - 278)] = Oyouk3NOBb[zRmvegKu];
                        Oyouk3NOBb[zRmvegKu] = w9sAHN;
                    }
                    zRmvegKu = zRmvegKu - (447 - 446);
                }
            }
            KBID87a = KBID87a +(698 - 697);
        }
    }
}

int main (int p3Fo9z, char *QqAr0oiu []) {
    int Oyouk3NOBb [A], wrNYzt, RuU8LfS, weowFVhtr;
    scanf ("%d", &wrNYzt);
    {
        weowFVhtr = (922 - 922);
        for (; wrNYzt > weowFVhtr;) {
            scanf ("%d", &(Oyouk3NOBb[weowFVhtr]));
            weowFVhtr = weowFVhtr + 1;
        }
    }
    TGlx7oa (Oyouk3NOBb, wrNYzt);
    printf ("%d\n", Oyouk3NOBb[0]);
    {
        RuU8LfS = 1;
        while (RuU8LfS < wrNYzt) {
            if (Oyouk3NOBb[RuU8LfS] < Oyouk3NOBb[RuU8LfS -1]) {
                printf ("%d\n", Oyouk3NOBb[RuU8LfS]);
                RuU8LfS = wrNYzt;
            }
            RuU8LfS++;
        }
    }
    return 0;
}

