int main () {
    int lxMSoj [(711 - 709)] [(66 - 54)] = {(116 - 85), (533 - 505), (956 - 925), (245 - 215), (286 - 255), (553 - 523), (61 - 30), (863 - 832), (929 - 899), (113 - 82), (322 - 292), (901 - 870), (1024 - 993), (255 - 226), (746 - 715), (1023 - 993), (509 - 478), (777 - 747), (328 - 297), (164 - 133), (709 - 679), 31, 30, 31};
    int n, JZaFb8EVSGJ, Z9wT3GJRb, temp, xlOtrT7 [(920 - 720)], sjKCBAHxtbyh [(924 - 724)], MNHvyS [(1059 - 859)], FuNKdvYQlZSL;
    scanf ("%d", &n);
    {
        JZaFb8EVSGJ = (674 - 674);
        while (n > JZaFb8EVSGJ) {
            scanf ("%d %d %d", &xlOtrT7[JZaFb8EVSGJ], &sjKCBAHxtbyh[JZaFb8EVSGJ], &MNHvyS[JZaFb8EVSGJ]);
            JZaFb8EVSGJ = JZaFb8EVSGJ +1;
        }
    }
    {
        JZaFb8EVSGJ = (249 - 249);
        while (JZaFb8EVSGJ < n) {
            if ((!((56 - 56) != xlOtrT7[JZaFb8EVSGJ] % (804 - 800)) && xlOtrT7[JZaFb8EVSGJ] % (255 - 155) != (425 - 425)) || (!((833 - 833) != xlOtrT7[JZaFb8EVSGJ] % (986 - 982)) && !((106 - 106) != xlOtrT7[JZaFb8EVSGJ] % (1084 - 684))))
                Z9wT3GJRb = (809 - 808);
            else
                Z9wT3GJRb = (109 - 109);
            if (MNHvyS[JZaFb8EVSGJ] < sjKCBAHxtbyh[JZaFb8EVSGJ]) {
                temp = sjKCBAHxtbyh[JZaFb8EVSGJ];
                sjKCBAHxtbyh[JZaFb8EVSGJ] = MNHvyS[JZaFb8EVSGJ];
                MNHvyS[JZaFb8EVSGJ] = temp;
            }
            {
                FuNKdvYQlZSL = (255 - 255);
                while (MNHvyS[JZaFb8EVSGJ] > sjKCBAHxtbyh[JZaFb8EVSGJ]) {
                    FuNKdvYQlZSL += lxMSoj[Z9wT3GJRb][sjKCBAHxtbyh[JZaFb8EVSGJ] - (627 - 626)];
                    sjKCBAHxtbyh[JZaFb8EVSGJ]++;
                }
            }
            JZaFb8EVSGJ++;
            if (!((922 - 922) != FuNKdvYQlZSL % (779 - 772)))
                printf ("YES\n");
            else
                printf ("NO\n");
        }
    }
    return 0;
}

