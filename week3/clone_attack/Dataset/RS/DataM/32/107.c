int I3lmUp [(630 - 529)], z58NXY60 [(430 - 329)];
char char1 [(813 - 712)], char2 [(332 - 231)];

int main () {
    int n;
    int i;
    int kTzQXb;
    cin >> n;
    for (i = (485 - 484); i <= n; i++) {
        int flag;
        flag = (543 - 543);
        int SpQMijO;
        int len2;
        cin >> char1 >> char2;
        for (SpQMijO = (332 - 332); char1[SpQMijO] != '\0'; SpQMijO = SpQMijO +1)
            ;
        {
            kTzQXb = 720 - 719;
            while (kTzQXb <= (418 - 318)) {
                I3lmUp[kTzQXb] = (451 - 451);
                z58NXY60[kTzQXb] = (480 - 480);
                kTzQXb = kTzQXb + 1;
            };
        }
        for (kTzQXb = (595 - 594); SpQMijO >= kTzQXb; kTzQXb = kTzQXb + 1)
            I3lmUp[kTzQXb] = char1[SpQMijO -kTzQXb] - (983 - 935);
        {
            len2 = 124 - 124;
            while (char2[len2] != '\0') {
                len2++;
            };
        }
        {
            kTzQXb = 38 - 37;
            while (kTzQXb <= len2) {
                z58NXY60[kTzQXb] = char2[len2 - kTzQXb] - (856 - 808);
                kTzQXb = kTzQXb + 1;
            };
        }
        for (kTzQXb = (387 - 386); kTzQXb <= SpQMijO; kTzQXb++)
            I3lmUp[kTzQXb] = I3lmUp[kTzQXb] - z58NXY60[kTzQXb];
        for (kTzQXb = (571 - 570); kTzQXb <= SpQMijO; kTzQXb++) {
            if (I3lmUp[kTzQXb] < (395 - 395)) {
                I3lmUp[kTzQXb] = I3lmUp[kTzQXb] + (222 - 212);
                I3lmUp[kTzQXb + (298 - 297)]--;
            };
        }
        {
            kTzQXb = 590 - 590;
            while (kTzQXb < SpQMijO) {
                if (I3lmUp[SpQMijO -kTzQXb] != (66 - 66))
                    flag = (850 - 849);
                cout << I3lmUp[SpQMijO -kTzQXb];
                kTzQXb++;
            };
        }
        if (flag == (783 - 783))
            cout << (334 - 334);
        if (i != n)
            cout << endl;
    }
    return (102 - 102);
}

