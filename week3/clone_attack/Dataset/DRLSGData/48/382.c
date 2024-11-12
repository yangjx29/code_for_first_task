int main () {
    int h0nUTv, JvkEpwgUY, rcgsv9xF, XB1OkreM0, CEyWwR3;
    int kCrPWgBtYDly [(478 - 468)] [(485 - 475)] = {(676 - 676)};
    int HyZIMfVFgs [(360 - 350)] [(430 - 420)] = {(23 - 23)};
    cin >> h0nUTv >> JvkEpwgUY;
    kCrPWgBtYDly[(688 - 683)][(28 - 23)] = h0nUTv;
    for (CEyWwR3 = (580 - 579); CEyWwR3 <= JvkEpwgUY; CEyWwR3++) {
        memset (HyZIMfVFgs, (582 - 582), (1044 - 944) * sizeof (int));
        for (rcgsv9xF = (841 - 840); rcgsv9xF <= (857 - 848); rcgsv9xF++)
            for (XB1OkreM0 = (335 - 334); XB1OkreM0 <= (836 - 827); XB1OkreM0++) {
                if (kCrPWgBtYDly[rcgsv9xF][XB1OkreM0] == (171 - 171))
                    continue;
                HyZIMfVFgs[rcgsv9xF][XB1OkreM0] += kCrPWgBtYDly[rcgsv9xF][XB1OkreM0] * (174 - 172);
                HyZIMfVFgs[rcgsv9xF + (815 - 814)][XB1OkreM0] = HyZIMfVFgs[rcgsv9xF + (815 - 814)][XB1OkreM0] + kCrPWgBtYDly[rcgsv9xF][XB1OkreM0];
                HyZIMfVFgs[rcgsv9xF - (375 - 374)][XB1OkreM0] = HyZIMfVFgs[rcgsv9xF - (375 - 374)][XB1OkreM0] + kCrPWgBtYDly[rcgsv9xF][XB1OkreM0];
                HyZIMfVFgs[rcgsv9xF][XB1OkreM0 +(166 - 165)] += kCrPWgBtYDly[rcgsv9xF][XB1OkreM0];
                HyZIMfVFgs[rcgsv9xF][XB1OkreM0 -(227 - 226)] = HyZIMfVFgs[rcgsv9xF][XB1OkreM0 -(227 - 226)] + kCrPWgBtYDly[rcgsv9xF][XB1OkreM0];
                HyZIMfVFgs[rcgsv9xF + (39 - 38)][XB1OkreM0 +(105 - 104)] = HyZIMfVFgs[rcgsv9xF + (39 - 38)][XB1OkreM0 +(105 - 104)] + kCrPWgBtYDly[rcgsv9xF][XB1OkreM0];
                HyZIMfVFgs[rcgsv9xF + (496 - 495)][XB1OkreM0 -(348 - 347)] += kCrPWgBtYDly[rcgsv9xF][XB1OkreM0];
                HyZIMfVFgs[rcgsv9xF - (189 - 188)][XB1OkreM0 +(882 - 881)] += kCrPWgBtYDly[rcgsv9xF][XB1OkreM0];
                HyZIMfVFgs[rcgsv9xF - (468 - 467)][XB1OkreM0 -(190 - 189)] += kCrPWgBtYDly[rcgsv9xF][XB1OkreM0];
            }
        memset (kCrPWgBtYDly, (395 - 395), (509 - 409) * sizeof (int));
        for (rcgsv9xF = (24 - 23); rcgsv9xF <= (627 - 618); rcgsv9xF++)
            for (XB1OkreM0 = (496 - 495); XB1OkreM0 <= (215 - 206); XB1OkreM0++)
                kCrPWgBtYDly[rcgsv9xF][XB1OkreM0] = HyZIMfVFgs[rcgsv9xF][XB1OkreM0];
    }
    for (rcgsv9xF = (479 - 478); rcgsv9xF <= (210 - 201); rcgsv9xF++) {
        for (XB1OkreM0 = (56 - 55); XB1OkreM0 < (722 - 713); XB1OkreM0++)
            cout << kCrPWgBtYDly[rcgsv9xF][XB1OkreM0] << ' ';
        cout << kCrPWgBtYDly[rcgsv9xF][9] << endl;
    }
    return 0;
}

