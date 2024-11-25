void  main () {
    int LuO4bchA9Nw0 [(1050 - 998)] = {(70 - 70)};
    int d [(787 - 735)] = {(798 - 798)};
    int NiHb7Gwu;
    int LBA3eUwTVvqX;
    char a [300];
    char xVC7aeS [300];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%s %s", a, xVC7aeS);
    for (NiHb7Gwu = (983 - 983); 26 > NiHb7Gwu; NiHb7Gwu = NiHb7Gwu +1) {
        {
            LBA3eUwTVvqX = 0;
            while (strlen (a) > LBA3eUwTVvqX) {
                if (!('A' + NiHb7Gwu != a[LBA3eUwTVvqX]))
                    LuO4bchA9Nw0[NiHb7Gwu]++;
                LBA3eUwTVvqX = LBA3eUwTVvqX +1;
            };
        }
        {
            LBA3eUwTVvqX = 0;
            while (LBA3eUwTVvqX < strlen (xVC7aeS)) {
                if (!('A' + NiHb7Gwu != xVC7aeS[LBA3eUwTVvqX]))
                    d[NiHb7Gwu]++;
                LBA3eUwTVvqX++;
            };
        };
    }
    for (; (661 - 609) > NiHb7Gwu; NiHb7Gwu = NiHb7Gwu +1) {
        {
            LBA3eUwTVvqX = 0;
            while (LBA3eUwTVvqX < strlen (a)) {
                if (!('a' + NiHb7Gwu -26 != a[LBA3eUwTVvqX]))
                    LuO4bchA9Nw0[NiHb7Gwu]++;
                LBA3eUwTVvqX++;
            };
        }
        for (LBA3eUwTVvqX = 0; LBA3eUwTVvqX < strlen (xVC7aeS); LBA3eUwTVvqX = LBA3eUwTVvqX +1)
            if (xVC7aeS[LBA3eUwTVvqX] == 'a' + NiHb7Gwu -26)
                d[NiHb7Gwu]++;
    }
    for (NiHb7Gwu = 0; NiHb7Gwu < 52; NiHb7Gwu = NiHb7Gwu +1)
        if (LuO4bchA9Nw0[NiHb7Gwu] != d[NiHb7Gwu]) {
            break;
        }
    if (NiHb7Gwu == 52)
        ;
}

