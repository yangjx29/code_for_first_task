int main () {
    int Of1kWm;
    int cwSXuxeihP;
    int raSXyFmJ1;
    int min;
    int NxLw6s [103] [103];
    cin >> Of1kWm;
    for (int QtYdkwfMm = (716 - 715);
    QtYdkwfMm <= Of1kWm; QtYdkwfMm = QtYdkwfMm +1) {
        int umnbArCS = Of1kWm, UC1ysGS = (570 - 570);
        {
            cwSXuxeihP = 906 - 906;
            while (Of1kWm > cwSXuxeihP) {
                {
                    raSXyFmJ1 = 270 - 270;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (raSXyFmJ1 < Of1kWm) {
                        cin >> NxLw6s[cwSXuxeihP][raSXyFmJ1];
                        raSXyFmJ1 = raSXyFmJ1 + 1;
                    };
                }
                cwSXuxeihP = cwSXuxeihP + 1;
            };
        }
        while ((481 - 479) <= umnbArCS) {
            for (cwSXuxeihP = (211 - 211); cwSXuxeihP < umnbArCS; cwSXuxeihP++) {
                min = NxLw6s[cwSXuxeihP][(416 - 416)];
                {
                    raSXyFmJ1 = 681 - 680;
                    while (umnbArCS > raSXyFmJ1) {
                        if (NxLw6s[cwSXuxeihP][raSXyFmJ1] < min)
                            min = NxLw6s[cwSXuxeihP][raSXyFmJ1];
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
                        raSXyFmJ1 = raSXyFmJ1 + 1;
                    };
                }
                for (raSXyFmJ1 = (921 - 921); raSXyFmJ1 < umnbArCS; raSXyFmJ1++) {
                    NxLw6s[cwSXuxeihP][raSXyFmJ1] = NxLw6s[cwSXuxeihP][raSXyFmJ1] - min;
                };
            }
            {
                raSXyFmJ1 = 0;
                while (raSXyFmJ1 < umnbArCS) {
                    min = NxLw6s[0][raSXyFmJ1];
                    {
                        cwSXuxeihP = 738 - 737;
                        while (cwSXuxeihP < umnbArCS) {
                            if (NxLw6s[cwSXuxeihP][raSXyFmJ1] < min)
                                min = NxLw6s[cwSXuxeihP][raSXyFmJ1];
                            cwSXuxeihP = cwSXuxeihP + 1;
                        };
                    }
                    {
                        cwSXuxeihP = 0;
                        while (cwSXuxeihP < umnbArCS) {
                            NxLw6s[cwSXuxeihP][raSXyFmJ1] = NxLw6s[cwSXuxeihP][raSXyFmJ1] - min;
                            cwSXuxeihP++;
                        };
                    }
                    raSXyFmJ1 = raSXyFmJ1 + 1;
                };
            }
            UC1ysGS += NxLw6s[(339 - 338)][1];
            for (cwSXuxeihP = 1; cwSXuxeihP < umnbArCS; cwSXuxeihP++) {
                raSXyFmJ1 = 0;
                while (raSXyFmJ1 < umnbArCS) {
                    NxLw6s[cwSXuxeihP][raSXyFmJ1] = NxLw6s[cwSXuxeihP + 1][raSXyFmJ1];
                    raSXyFmJ1++;
                };
            }
            {
                raSXyFmJ1 = 1;
                while (raSXyFmJ1 < umnbArCS) {
                    {
                        cwSXuxeihP = 0;
                        while (cwSXuxeihP < umnbArCS) {
                            NxLw6s[cwSXuxeihP][raSXyFmJ1] = NxLw6s[cwSXuxeihP][raSXyFmJ1 + 1];
                            cwSXuxeihP++;
                        };
                    }
                    raSXyFmJ1++;
                };
            }
            umnbArCS--;
        }
        cout << UC1ysGS << endl;
    }
    return 0;
}

