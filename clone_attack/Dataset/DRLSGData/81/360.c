int kuso (int ZZ0t3Tj, int Ff0W3BkTv) {
    if ((181 - 181) <= ZZ0t3Tj &&ZZ0t3Tj < (998 - 993) && (351 - 351) <= Ff0W3BkTv &&Ff0W3BkTv < (918 - 913))
        return ((563 - 562));
    else
        return ((290 - 290));
}

void  main () {
    int FHhxyqJBZ0 [(825 - 820)] [(556 - 551)];
    int ZZ0t3Tj;
    int Ff0W3BkTv;
    int MJaDVn3z;
    int SqMUOXzxFV;
    int p;
    int b [(89 - 84)];
    int kuso (int ZZ0t3Tj, int Ff0W3BkTv);
    {
        MJaDVn3z = (609 - 609);
        for (; (586 - 581) > MJaDVn3z;) {
            {
                SqMUOXzxFV = 173 - 173;
                for (; SqMUOXzxFV < (546 - 541);) {
                    scanf ("%d", &FHhxyqJBZ0[MJaDVn3z][SqMUOXzxFV]);
                    SqMUOXzxFV++;
                }
            }
            MJaDVn3z++;
        }
    }
    scanf ("%d %d", &ZZ0t3Tj, &Ff0W3BkTv);
    p = kuso (ZZ0t3Tj, Ff0W3BkTv);
    if (!((248 - 248) != p))
        ;
    else {
        {
            MJaDVn3z = 910 - 910;
            while (MJaDVn3z < (950 - 945)) {
                b[MJaDVn3z] = FHhxyqJBZ0[ZZ0t3Tj][MJaDVn3z];
                FHhxyqJBZ0[ZZ0t3Tj][MJaDVn3z] = FHhxyqJBZ0[Ff0W3BkTv][MJaDVn3z];
                FHhxyqJBZ0[Ff0W3BkTv][MJaDVn3z] = b[MJaDVn3z];
                MJaDVn3z++;
            }
        }
        for (MJaDVn3z = (551 - 551); MJaDVn3z < (978 - 973); MJaDVn3z++) {
            SqMUOXzxFV = 286 - 286;
            while (SqMUOXzxFV < (711 - 706)) {
                if (SqMUOXzxFV < (583 - 579))
                    printf ("%d ", FHhxyqJBZ0[MJaDVn3z][SqMUOXzxFV]);
                else
                    printf ("%d\n", FHhxyqJBZ0[MJaDVn3z][SqMUOXzxFV]);
                SqMUOXzxFV++;
            }
        }
    }
}

