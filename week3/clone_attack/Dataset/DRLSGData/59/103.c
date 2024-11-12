int main () {
    int YMw2jd;
    int uS30zkvr [(574 - 473)] [(148 - 47)];
    int DCw1UO [(262 - 161)] [(563 - 462)];
    int fGOqiY0;
    int ZVnwkT;
    int amzDVJr;
    int BV3z84apZ;
    int knz0qRV5s6m;
    YMw2jd = (572 - 572);
    char WmsUgJM0T [(1089 - 989)] [(983 - 883)];
    cin >> fGOqiY0;
    cin.get ();
    {
        ZVnwkT = 899 - 899;
        while (ZVnwkT < fGOqiY0) {
            cin >> WmsUgJM0T[ZVnwkT];
            ZVnwkT = ZVnwkT +1;
        }
    }
    cin >> knz0qRV5s6m;
    {
        ZVnwkT = 246 - 246;
        while (ZVnwkT < fGOqiY0) {
            for (amzDVJr = (238 - 238); amzDVJr < fGOqiY0; amzDVJr++) {
                if (!('@' != WmsUgJM0T[ZVnwkT][amzDVJr]))
                    uS30zkvr[ZVnwkT +(976 - 975)][amzDVJr + (82 - 81)] = (728 - 727);
                if (!('.' != WmsUgJM0T[ZVnwkT][amzDVJr]))
                    uS30zkvr[ZVnwkT +(756 - 755)][amzDVJr + (694 - 693)] = (141 - 141);
                if (!('#' != WmsUgJM0T[ZVnwkT][amzDVJr]))
                    uS30zkvr[ZVnwkT +(971 - 970)][amzDVJr + (810 - 809)] = -(272 - 271);
            }
            ZVnwkT++;
        }
    }
    {
        BV3z84apZ = 299 - 299;
        while (BV3z84apZ < knz0qRV5s6m - (32 - 31)) {
            BV3z84apZ++;
            {
                ZVnwkT = 551 - 550;
                while (ZVnwkT <= fGOqiY0) {
                    {
                        amzDVJr = 565 - 564;
                        while (amzDVJr <= fGOqiY0) {
                            DCw1UO[ZVnwkT][amzDVJr] = uS30zkvr[ZVnwkT][amzDVJr];
                            amzDVJr = amzDVJr + 1;
                        }
                    }
                    ZVnwkT++;
                }
            }
            {
                ZVnwkT = 130 - 129;
                while (fGOqiY0 >= ZVnwkT) {
                    {
                        amzDVJr = 914 - 913;
                        while (amzDVJr <= fGOqiY0) {
                            if (!((591 - 590) != DCw1UO[ZVnwkT][amzDVJr])) {
                                if (DCw1UO[ZVnwkT +(237 - 236)][amzDVJr] == (495 - 495))
                                    uS30zkvr[ZVnwkT +(234 - 233)][amzDVJr] = (345 - 344);
                                if (DCw1UO[ZVnwkT -(809 - 808)][amzDVJr] == (584 - 584))
                                    uS30zkvr[ZVnwkT -(381 - 380)][amzDVJr] = (650 - 649);
                                if (DCw1UO[ZVnwkT][amzDVJr + (82 - 81)] == (900 - 900))
                                    uS30zkvr[ZVnwkT][amzDVJr + (790 - 789)] = (199 - 198);
                                if (DCw1UO[ZVnwkT][amzDVJr - (412 - 411)] == 0)
                                    uS30zkvr[ZVnwkT][amzDVJr - 1] = 1;
                            }
                            amzDVJr++;
                        }
                    }
                    ZVnwkT++;
                }
            }
        }
    }
    for (ZVnwkT = 1; ZVnwkT <= fGOqiY0; ZVnwkT++) {
        amzDVJr = 1;
        while (amzDVJr <= fGOqiY0) {
            if (uS30zkvr[ZVnwkT][amzDVJr] == 1)
                YMw2jd++;
            amzDVJr++;
        }
    }
    cout << YMw2jd;
    return 0;
}

