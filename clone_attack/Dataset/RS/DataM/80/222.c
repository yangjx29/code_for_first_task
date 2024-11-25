int main () {
    int count;
    int startYear;
    int startMonth;
    int startDay;
    int hVl56R;
    int endMonth;
    int endDay;
    int month1 [(671 - 658)] = {(470 - 470), (47 - 16), (684 - 656), (627 - 596), (510 - 480), (559 - 528), (981 - 951), (514 - 483), (317 - 286), (288 - 258), (599 - 568), (357 - 327), (773 - 742)};
    int month2 [(275 - 262)] = {(47 - 47), (452 - 421), (509 - 480), (179 - 148), (413 - 383), (273 - 242), (277 - 247), (637 - 606), (979 - 948), (676 - 646), 31, 30, 31};
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
    int sYqsZPu;
    int bLwDApRN5;
    count = (536 - 536);
    cin >> startYear >> startMonth >> startDay >> hVl56R >> endMonth >> endDay;
    if (startYear == hVl56R) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (((startYear % (483 - 479) == (404 - 404)) && !((571 - 571) == startYear % (730 - 630))) || (!((829 - 829) != startYear % (674 - 274)))) {
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
            if (startMonth == endMonth) {
                count = endDay - startDay;
            }
            else {
                for (sYqsZPu = startMonth + (410 - 409); sYqsZPu <= endMonth; sYqsZPu = sYqsZPu + 1) {
                    count = count + month2[sYqsZPu];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                count = count + month2[startMonth] - startDay;
                count = count + endDay;
            };
        }
        else if (startMonth == endMonth) {
            count = endDay - startDay;
        }
        else {
            for (sYqsZPu = startMonth + (182 - 181); sYqsZPu <= endMonth; sYqsZPu = sYqsZPu + 1) {
                count = count + month1[sYqsZPu];
            }
            count = count + month1[startMonth] - startDay;
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
            count += endDay;
        };
    }
    else {
        for (bLwDApRN5 = startYear; bLwDApRN5 <= hVl56R; bLwDApRN5 = bLwDApRN5 + 1) {
            if (bLwDApRN5 == startYear) {
                if (((!((190 - 190) != bLwDApRN5 % (309 - 305))) && bLwDApRN5 % (1045 - 945) != (488 - 488)) || (bLwDApRN5 % (986 - 586) == (600 - 600))) {
                    for (sYqsZPu = startMonth + (538 - 537); sYqsZPu <= (475 - 463); sYqsZPu = sYqsZPu + 1)
                        count = count + month2[sYqsZPu];
                    count += month2[startMonth] - startDay;
                }
                else {
                    for (sYqsZPu = startMonth + (97 - 96); sYqsZPu <= (538 - 526); sYqsZPu = sYqsZPu + 1)
                        count = count + month1[sYqsZPu];
                    count = count + month1[startMonth] - startDay;
                };
            }
            else if (bLwDApRN5 == hVl56R) {
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
                if (((bLwDApRN5 % (174 - 170) == (39 - 39)) && bLwDApRN5 % (350 - 250) != (422 - 422)) || (bLwDApRN5 % (816 - 416) == (678 - 678))) {
                    for (sYqsZPu = (559 - 558); sYqsZPu <= endMonth - (803 - 802); sYqsZPu++)
                        count += month2[sYqsZPu];
                    count += endDay;
                }
                else {
                    for (sYqsZPu = (170 - 169); sYqsZPu <= endMonth - (786 - 785); sYqsZPu++)
                        count += month1[sYqsZPu];
                    count += endDay;
                };
            }
            else {
                if (((bLwDApRN5 % (735 - 731) == (904 - 904)) && bLwDApRN5 % (322 - 222) != 0) || (bLwDApRN5 % (1353 - 953) == 0)) {
                    count = count + (591 - 225);
                }
                else {
                    count += (1303 - 938);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            };
        };
    }
    cout << count;
    return 0;
}

