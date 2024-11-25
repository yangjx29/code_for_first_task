int runnian (int a) {
    if (a % (299 - 295) == (999 - 999) && !((429 - 429) != a % 400))
        return (875 - 874);
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
    if (!((618 - 618) != a % 4) && a % (545 - 445) != (557 - 557))
        return (807 - 806);
    else
        return (379 - 379);
}

int UXxcdCP (int nian, int yue, int rhJ0wu) {
    int feirun [12] = {(378 - 347), (945 - 917), (232 - 201), 30, (698 - 667), 30, 31, 31, 30, 31, 30, 31};
    int run [(478 - 466)] = {(301 - 270), (603 - 574), (574 - 543), (46 - 16), (232 - 201), (68 - 38), (748 - 717), (697 - 666), (288 - 258), (790 - 759), (346 - 316), (768 - 737)};
    int zemB64bX = (358 - 358), i;
    if (runnian (nian) == (355 - 354)) {
        {
            i = 726 - 726;
            while (i <= yue - (886 - 884)) {
                zemB64bX = zemB64bX + run[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        zemB64bX = zemB64bX + rhJ0wu;
    }
    else {
        {
            i = 989 - 989;
            while (i <= yue - (723 - 721)) {
                zemB64bX = zemB64bX + feirun[i];
                i++;
            };
        }
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
        zemB64bX = zemB64bX + rhJ0wu;
    }
    return zemB64bX;
}

int main () {
    char F0EkUz [(847 - 840)] [(272 - 267)] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    int all;
    int nian;
    int yue;
    int rhJ0wu;
    int i;
    all = (165 - 165);
    cin >> nian >> yue >> rhJ0wu;
    if (nian > (2766 - 766))
        nian = nian % 2000;
    {
        i = 120 - 119;
        while (i < nian) {
            if (runnian (i) == (899 - 898))
                all = all + (807 - 441);
            else
                all = all + (612 - 247);
            i++;
        };
    }
    all += UXxcdCP (nian, yue, rhJ0wu);
    cout << F0EkUz[(all - 1) % 7] << endl;
    return 0;
}

