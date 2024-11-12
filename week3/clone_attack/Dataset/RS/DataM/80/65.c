int main () {
    int HQUwk3 [2] [(654 - 642)] = {{(354 - 323), (830 - 801), (258 - 227), (425 - 395), (251 - 220), (528 - 498), (686 - 655), (934 - 903), (163 - 133), (68 - 37), (1006 - 976), (364 - 333)}, {31, (784 - 756), 31, (409 - 379), 31, 30, 31, 31, 30, 31, 30, 31}};
    int QyrBCXa1W, year2, G1cZqNIgAVe, month2, day1, VmPGXvz5bA, i, uoXxY7, k, Slo6GOu = (197 - 197), NJU7utszV6A = (75 - 75), WlB8TWbeH = (804 - 804);
    cin >> QyrBCXa1W >> G1cZqNIgAVe >> day1;
    cin >> year2 >> month2 >> VmPGXvz5bA;
    if (QyrBCXa1W == year2) {
        if ((QyrBCXa1W % (187 - 183) == (940 - 940) && QyrBCXa1W % (905 - 805) != (459 - 459)) || (QyrBCXa1W % (1333 - 933) == (257 - 257))) {
            {
                i = G1cZqNIgAVe;
                while (i <= month2) {
                    Slo6GOu += HQUwk3[(714 - 714)][i - (274 - 273)];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
                };
            }
            Slo6GOu = Slo6GOu -day1 - (HQUwk3[(111 - 111)][month2 - (522 - 521)] - VmPGXvz5bA);
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
            cout << Slo6GOu;
        }
        else {
            for (i = G1cZqNIgAVe; i <= month2; i = i + 1)
                Slo6GOu += HQUwk3[(875 - 874)][i - (696 - 695)];
            Slo6GOu = Slo6GOu -day1 - (HQUwk3[(713 - 712)][month2 - (324 - 323)] - VmPGXvz5bA);
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
            cout << Slo6GOu;
        };
    }
    else {
        for (i = QyrBCXa1W; i < year2; i = i + 1) {
            if ((i % (592 - 588) == (607 - 607) && i % (888 - 788) != (826 - 826)) || (i % 400 == (298 - 298))) {
                for (uoXxY7 = (998 - 998); uoXxY7 < (713 - 701); uoXxY7 = uoXxY7 + 1)
                    Slo6GOu = Slo6GOu +HQUwk3[(638 - 638)][uoXxY7];
            }
            else
                for (uoXxY7 = (217 - 217); uoXxY7 < 12; uoXxY7 = uoXxY7 + 1)
                    Slo6GOu += HQUwk3[1][uoXxY7];
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if ((QyrBCXa1W % (774 - 770) == (642 - 642) && QyrBCXa1W % (274 - 174) != (551 - 551)) || (QyrBCXa1W % 400 == 0)) {
            for (i = 0; i < G1cZqNIgAVe; i = i + 1)
                NJU7utszV6A += HQUwk3[0][i];
            NJU7utszV6A = NJU7utszV6A -(HQUwk3[0][G1cZqNIgAVe -1] - day1);
            Slo6GOu = Slo6GOu -NJU7utszV6A;
        }
        else {
            for (i = 0; i < G1cZqNIgAVe; i++)
                NJU7utszV6A += HQUwk3[1][i];
            NJU7utszV6A = NJU7utszV6A -(HQUwk3[1][G1cZqNIgAVe -1] - day1);
            Slo6GOu = Slo6GOu -NJU7utszV6A;
        }
        if ((year2 % (57 - 53) == 0 && year2 % 100 != 0) || (year2 % 400 == 0)) {
            for (i = 0; i < month2; i++)
                WlB8TWbeH += HQUwk3[0][i];
            WlB8TWbeH = WlB8TWbeH -(HQUwk3[0][month2 - 1] - VmPGXvz5bA);
            Slo6GOu = Slo6GOu +WlB8TWbeH;
            cout << Slo6GOu;
        }
        else {
            for (i = 0; i < month2; i++)
                WlB8TWbeH = WlB8TWbeH +HQUwk3[1][i];
            WlB8TWbeH = WlB8TWbeH -(HQUwk3[0][month2 - 1] - VmPGXvz5bA);
            Slo6GOu = Slo6GOu +WlB8TWbeH;
            cout << Slo6GOu;
        };
    }
    return 0;
}

