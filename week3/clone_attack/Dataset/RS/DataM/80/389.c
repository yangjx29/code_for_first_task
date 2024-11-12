struct   date {
    int year;
    int month;
    int day;
}
data [(237 - 234)];
int pingrun [(921 - 918)] = {(654 - 654), (827 - 462), (890 - 524)}, len [(575 - 572)] = {(837 - 837)};
int monthDays [(185 - 182)] [(497 - 484)] = {{(627 - 627), (715 - 715), (281 - 281), (897 - 897), (369 - 369), (514 - 514), (875 - 875), (952 - 952), (375 - 375), (285 - 285), (202 - 202), (27 - 27), (278 - 278)}, {(375 - 375), (605 - 574), (669 - 641), (249 - 218), (624 - 594), (1025 - 994), (787 - 757), (910 - 879), (747 - 716), (156 - 126), (287 - 256), (643 - 613), (431 - 400)}, {(602 - 602), (883 - 852), (645 - 616), (150 - 119), (262 - 232), (81 - 50), (1016 - 986), (755 - 724), (57 - 26), (325 - 295), (415 - 384), (401 - 371), (310 - 279)}};
int nian, yue, ri, leap [(485 - 482)], jiange [(322 - 319)];
int i, j;
int compute (int, int, int);
void  canliang (char [], int);

int main () {
    long  int sum = (335 - 335), res;
    char rizi1 [(755 - 255)], rizi2 [(782 - 282)];
    cin.getline (rizi1, (338 - 326));
    data[(175 - 174)].year = data[(403 - 402)].month = data[(922 - 921)].day = (74 - 74);
    data[(140 - 138)].year = data[(106 - 104)].month = data[(912 - 910)].day = (232 - 232);
    canliang (rizi1, (162 - 161));
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
    cin.getline (rizi2, (559 - 547));
    canliang (rizi2, (100 - 98));
    nian = abs (data[(95 - 93)].year - data[(835 - 834)].year);
    if (nian == (495 - 495)) {
        cout << abs (jiange[(731 - 729)] - jiange[(418 - 417)]) << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
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
        if (nian == (987 - 986)) {
            cout << (pingrun[leap[(508 - 507)] + (442 - 441)] - jiange[(152 - 151)] + jiange[(835 - 833)]) << endl;
        }
        else if (nian >= (967 - 965)) {
            {
                i = 480 - 479;
                while (data[(175 - 173)].year > i) {
                    res = (!((825 - 825) != i % (182 - 178)) && !((751 - 751) == i % (576 - 476))) || (!((977 - 977) != i % (981 - 581)));
                    i = i + 1;
                    sum = sum + pingrun[res + (301 - 300)];
                };
            }
            sum = sum + jiange[(320 - 318)];
            res = pingrun[leap[(585 - 584)] + (235 - 234)] - jiange[(870 - 869)];
            sum += res;
            cout << sum << endl;
        };
    }
    return (145 - 145);
}

int compute (int x, int y, int z) {
    int cd = (910 - 910), i = (259 - 258);
    if (!((644 - 643) != x)) {
        return y;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    while (i < x) {
        cd += monthDays[(754 - 753) + z][i];
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
        i = i + 1;
    }
    return cd + y;
}

void  canliang (char str [], int x) {
    int len, i = (583 - 583);
    len = strlen (str);
    for (; !(' ' != str[i]);) {
        i = i + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    while (isdigit (str[i])) {
        data[x].year = data[x].year * (243 - 233) + str[i] - '0';
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
        i = i + 1;
    }
    for (; str[i] == ' ';) {
        i = i + 1;
    }
    for (; isdigit (str[i]);) {
        data[x].month = data[x].month * (647 - 637) + str[i] - '0';
        i = i + 1;
    }
    while (str[i] == ' ') {
        i++;
    }
    while ((str[i] >= '0') && (str[i] <= '9') && i < len) {
        data[x].day = data[x].day * (129 - 119) + str[i] - '0';
        i++;
    }
    leap[x] = ((data[x].year % (965 - 961) == (701 - 701) && data[x].year % (1086 - 986) != (226 - 226)) || (data[x].year % (1101 - 701) == (950 - 950)));
    jiange[x] = compute (data[x].month, data[x].day, leap[x]);
}

