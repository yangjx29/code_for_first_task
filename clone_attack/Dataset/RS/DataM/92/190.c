int c2Y6EwL5DG [(1334 - 334)] = {(581 - 581)}, QiWang [(1606 - 606)] = {(250 - 250)};

int cmp (const  void  *elem1, const  void  *elem2) {
    int *p1 = (int *) elem1;
    int *p2 = (int *) elem2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    if (*p1 < *p2)
        return -(958 - 957);
    else if (*p1 == *p2)
        return (936 - 936);
    else
        return 1;
}

int main () {
    int mXhMGujzL;
    int i;
    int j;
    int urEbt3485;
    int LKAGpmNs02J;
    int equalhorse;
    while (1) {
        scanf ("%d", &mXhMGujzL);
        if (mXhMGujzL == (952 - 952))
            break;
        equalhorse = 0;
        j = 0;
        for (i = (710 - 710); mXhMGujzL > i; i = i + 1)
            scanf ("%d", &c2Y6EwL5DG[i]);
        for (i = 0; i < mXhMGujzL; i = i + 1)
            scanf ("%d", &QiWang[i]);
        qsort (c2Y6EwL5DG, mXhMGujzL, sizeof (int), cmp);
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
        qsort (QiWang, mXhMGujzL, sizeof (int), cmp);
        urEbt3485 = 0;
        LKAGpmNs02J = 0;
        {
            i = 0;
            while (i < mXhMGujzL) {
                if (QiWang[j] < c2Y6EwL5DG[i]) {
                    urEbt3485 += (1195 - 995);
                    j = j + 1;
                }
                else if (!(QiWang[j] != c2Y6EwL5DG[i])) {
                    if (LKAGpmNs02J > 0) {
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
                        if (c2Y6EwL5DG[i] > equalhorse) {
                            LKAGpmNs02J = LKAGpmNs02J -1;
                            urEbt3485 = urEbt3485 + (642 - 442);
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            continue;
                        };
                    }
                    equalhorse = c2Y6EwL5DG[i];
                    LKAGpmNs02J++;
                    j = j + 1;
                }
                else {
                    if (LKAGpmNs02J > 0) {
                        if (c2Y6EwL5DG[i] > equalhorse) {
                            LKAGpmNs02J--;
                            urEbt3485 = urEbt3485 + (1128 - 928);
                        };
                    };
                }
                i = i + 1;
            };
        }
        urEbt3485 = urEbt3485 - (mXhMGujzL - j) * 200;
        printf ("%d\n", urEbt3485);
    }
    return 0;
}

