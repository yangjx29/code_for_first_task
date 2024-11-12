int main () {
    int m, x7u2K5nOmr;
    int i = (849 - 849), IidRUlDQze0 = (134 - 134), hJLa2Er9jg = (90 - 90);
    int MyU6no [(221 - 212)] [(157 - 148)];
    int gKfWdXF5 [(539 - 530)] [(238 - 229)];
    {
        i = 495 - 495;
        while (i < (943 - 934)) {
            {
                IidRUlDQze0 = 811 - 811;
                while (IidRUlDQze0 < (129 - 120)) {
                    MyU6no[i][IidRUlDQze0] = (52 - 52);
                    gKfWdXF5[i][IidRUlDQze0] = (730 - 730);
                    IidRUlDQze0++;
                }
            }
            i = i + 1;
        }
    }
    cin >> m >> x7u2K5nOmr;
    MyU6no[(44 - 40)][4] = m;
    {
        hJLa2Er9jg = (411 - 411);
        for (; hJLa2Er9jg < x7u2K5nOmr;) {
            {
                i = (702 - 702);
                for (; i < (514 - 505);) {
                    {
                        IidRUlDQze0 = 469 - 469;
                        for (; IidRUlDQze0 < (242 - 233);) {
                            if (MyU6no[i][IidRUlDQze0] != (371 - 371)) {
                                gKfWdXF5[i][IidRUlDQze0] = gKfWdXF5[i][IidRUlDQze0] + MyU6no[i][IidRUlDQze0] * (760 - 758);
                                gKfWdXF5[i + (296 - 295)][IidRUlDQze0] = gKfWdXF5[i + (251 - 250)][IidRUlDQze0] + MyU6no[i][IidRUlDQze0];
                                gKfWdXF5[i - (377 - 376)][IidRUlDQze0] = gKfWdXF5[i - (548 - 547)][IidRUlDQze0] + MyU6no[i][IidRUlDQze0];
                                gKfWdXF5[i][IidRUlDQze0 +(913 - 912)] = gKfWdXF5[i][IidRUlDQze0 +(447 - 446)] + MyU6no[i][IidRUlDQze0];
                                gKfWdXF5[i][IidRUlDQze0 -(181 - 180)] = gKfWdXF5[i][IidRUlDQze0 -(207 - 206)] + MyU6no[i][IidRUlDQze0];
                                gKfWdXF5[i + (409 - 408)][IidRUlDQze0 +(30 - 29)] = gKfWdXF5[i + (516 - 515)][IidRUlDQze0 +(306 - 305)] + MyU6no[i][IidRUlDQze0];
                                gKfWdXF5[i - (194 - 193)][IidRUlDQze0 -(494 - 493)] = gKfWdXF5[i - (239 - 238)][IidRUlDQze0 -(487 - 486)] + MyU6no[i][IidRUlDQze0];
                                gKfWdXF5[i + (758 - 757)][IidRUlDQze0 -(642 - 641)] = gKfWdXF5[i + (662 - 661)][IidRUlDQze0 -(177 - 176)] + MyU6no[i][IidRUlDQze0];
                                gKfWdXF5[i - 1][IidRUlDQze0 +1] = gKfWdXF5[i - 1][IidRUlDQze0 +1] + MyU6no[i][IidRUlDQze0];
                            }
                            IidRUlDQze0++;
                        }
                    }
                    i = i + 1;
                }
            }
            {
                i = (977 - 977);
                for (; i < 9;) {
                    {
                        IidRUlDQze0 = (217 - 217);
                        while (IidRUlDQze0 < 9) {
                            MyU6no[i][IidRUlDQze0] = gKfWdXF5[i][IidRUlDQze0];
                            gKfWdXF5[i][IidRUlDQze0] = 0;
                            IidRUlDQze0 = IidRUlDQze0 +1;
                        }
                    }
                    i = i + 1;
                }
            }
            hJLa2Er9jg = hJLa2Er9jg + 1;
        }
    }
    {
        i = 0;
        for (; i < 9;) {
            {
                IidRUlDQze0 = 0;
                for (; IidRUlDQze0 < 9;) {
                    if (IidRUlDQze0 == (264 - 256))
                        cout << MyU6no[i][IidRUlDQze0] << endl;
                    else
                        cout << MyU6no[i][IidRUlDQze0] << " ";
                    IidRUlDQze0 = IidRUlDQze0 +1;
                }
            }
            i = i + 1;
        }
    }
    return 0;
}

