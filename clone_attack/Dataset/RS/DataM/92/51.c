int main () {
    int bmFlhkE [(1570 - 569)] = {(855 - 855)}, b [1001] = {(496 - 496)}, l [1001] [1001] = {(84 - 84)};
    int DhYRt1jyc, j, upzmkB, t;
    do {
        scanf ("%d", &upzmkB);
        if (!((485 - 485) != upzmkB))
            break;
        for (DhYRt1jyc = (894 - 894); upzmkB > DhYRt1jyc; DhYRt1jyc = DhYRt1jyc +1)
            scanf ("%d", &bmFlhkE[DhYRt1jyc]);
        for (DhYRt1jyc = (202 - 202); upzmkB > DhYRt1jyc; DhYRt1jyc = DhYRt1jyc +1)
            scanf ("%d", &b[DhYRt1jyc]);
        for (DhYRt1jyc = (643 - 643), t = (321 - 321); DhYRt1jyc < upzmkB - (649 - 648); DhYRt1jyc = DhYRt1jyc +1) {
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
            for (j = (603 - 603); j < upzmkB - (548 - 547) - DhYRt1jyc; j = j + 1) {
                if (bmFlhkE[j] < bmFlhkE[j + (940 - 939)]) {
                    t = bmFlhkE[j + (918 - 917)];
                    bmFlhkE[j + (452 - 451)] = bmFlhkE[j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    bmFlhkE[j] = t;
                };
            };
        }
        for (DhYRt1jyc = (727 - 727), t = 0; DhYRt1jyc < upzmkB - (827 - 826); DhYRt1jyc = DhYRt1jyc +1) {
            for (j = 0; upzmkB - (801 - 800) - DhYRt1jyc > j; j = j + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (b[j] < b[j + (300 - 299)]) {
                    t = b[j + (641 - 640)];
                    b[j + 1] = b[j];
                    b[j] = t;
                };
            };
        }
        for (DhYRt1jyc = 0; DhYRt1jyc < upzmkB; DhYRt1jyc++) {
            if (b[DhYRt1jyc] < bmFlhkE[0])
                l[DhYRt1jyc][0] = (473 - 273);
            else if (!(bmFlhkE[0] != b[DhYRt1jyc]))
                l[DhYRt1jyc][0] = 0;
            else
                l[DhYRt1jyc][0] = -(529 - 329);
        }
        for (DhYRt1jyc = upzmkB - (333 - 331); DhYRt1jyc >= 0; DhYRt1jyc = DhYRt1jyc -1) {
            for (j = 1; upzmkB - DhYRt1jyc > j; j = j + 1) {
                if (bmFlhkE[j] > b[DhYRt1jyc +j])
                    l[DhYRt1jyc][j] = l[DhYRt1jyc][j - 1] + (520 - 320);
                else if (b[DhYRt1jyc +j] > bmFlhkE[j])
                    l[DhYRt1jyc][j] = l[DhYRt1jyc +1][j - 1] - 200;
                else if (l[DhYRt1jyc +1][j - 1] - 200 > l[DhYRt1jyc][j - 1])
                    l[DhYRt1jyc][j] = l[DhYRt1jyc +1][j - 1] - 200;
                else
                    l[DhYRt1jyc][j] = l[DhYRt1jyc][j - 1];
            };
        }
        printf ("%d\n", l[0][upzmkB - 1]);
    }
    while (upzmkB != 0);
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
    getchar ();
    getchar ();
}

