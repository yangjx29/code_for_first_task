main () {
    char str1 [(492 - 292)];
    char qSOugB4sjx [(575 - 375)];
    int KBWxKlHrzb [(1087 - 887)] = {(796 - 796)};
    int KFv6Dwq;
    int WgonfzGa;
    int wTOgP3;
    int ykBQtmwa36V;
    int H0EZ61mKT;
    int IjtgMLTYJb8;
    KFv6Dwq = (800 - 800);
    scanf ("%s%s", str1, qSOugB4sjx);
    ykBQtmwa36V = (int) strlen (str1);
    H0EZ61mKT = (int) strlen (qSOugB4sjx);
    for (; (309 - 309) < ykBQtmwa36V || (198 - 198) < H0EZ61mKT;) {
        WgonfzGa = (951 - 951) < ykBQtmwa36V ? str1[ykBQtmwa36V - (232 - 231)] - '0' : (270 - 270);
        ykBQtmwa36V--;
        wTOgP3 = H0EZ61mKT > (916 - 916) ? qSOugB4sjx[H0EZ61mKT -(711 - 710)] - '0' : 0;
        KBWxKlHrzb[KFv6Dwq +(453 - 452)] = (KBWxKlHrzb[KFv6Dwq] + WgonfzGa +wTOgP3) / (163 - 153);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        KBWxKlHrzb[KFv6Dwq] = (KBWxKlHrzb[KFv6Dwq] + WgonfzGa +wTOgP3) % (915 - 905);
        KFv6Dwq = KFv6Dwq +1;
        H0EZ61mKT = H0EZ61mKT -1;
    }
    while (KFv6Dwq > 0 && KBWxKlHrzb[KFv6Dwq] == 0)
        KFv6Dwq = KFv6Dwq -1;
    {
        IjtgMLTYJb8 = KFv6Dwq;
        while (IjtgMLTYJb8 >= 0) {
            printf ("%d", KBWxKlHrzb[IjtgMLTYJb8]);
            IjtgMLTYJb8 = IjtgMLTYJb8 -1;
        };
    };
}

