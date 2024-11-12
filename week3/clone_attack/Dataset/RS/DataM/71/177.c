int main () {
    int b [(220 - 207)] = {(826 - 826), (925 - 894), (449 - 420), (159 - 128), (982 - 952), (956 - 925), (370 - 340), (296 - 265), (127 - 96), (669 - 639), (744 - 713), 30, (592 - 561)};
    int DFy62O48 [(561 - 548)] = {(270 - 270), (911 - 880), (223 - 195), (1013 - 982), (791 - 761), (474 - 443), (177 - 147), (751 - 720), (922 - 891), (769 - 739), (1003 - 972), (817 - 787), (309 - 278)};
    int OpHfAX2, eHtJnTO, rfcMd58yK, elvFTB, UaiJLe, month2, day1 = (674 - 674), day2 = (282 - 282);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> OpHfAX2;
    {
        eHtJnTO = 825 - 825;
        while (OpHfAX2 > eHtJnTO) {
            eHtJnTO = eHtJnTO + 1;
            cin >> elvFTB >> UaiJLe >> month2;
            if (!((505 - 505) == elvFTB % (918 - 914)) || (!((122 - 122) == elvFTB % (885 - 485)) && !((223 - 223) != elvFTB % (752 - 652)))) {
                for (rfcMd58yK = (63 - 62); rfcMd58yK < UaiJLe; rfcMd58yK = rfcMd58yK + 1)
                    day1 = day1 + DFy62O48[rfcMd58yK];
                for (rfcMd58yK = (950 - 949); month2 > rfcMd58yK; rfcMd58yK = rfcMd58yK + 1)
                    day2 = day2 + DFy62O48[rfcMd58yK];
            }
            else {
                {
                    rfcMd58yK = 360 - 359;
                    while (rfcMd58yK < UaiJLe) {
                        day1 = day1 + b[rfcMd58yK];
                        rfcMd58yK = rfcMd58yK + 1;
                    };
                }
                for (rfcMd58yK = 1; rfcMd58yK < month2; rfcMd58yK++)
                    day2 = day2 + b[rfcMd58yK];
            }
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
            if ((day1 - day2) % (838 - 831) == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            day2 = 919 - 919;
            day1 = 156 - 156;
        };
    }
    return 0;
}

