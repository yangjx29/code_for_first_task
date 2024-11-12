int Y2JBSZ = (800 - 800);
char t [(347 - 341)], ok [(319 - 313)];
int f [(947 - 941)];

int yes () {
    int ZW61IDh;
    for (ZW61IDh = (963 - 963); (968 - 966) > ZW61IDh; ZW61IDh = ZW61IDh +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (t[ZW61IDh] == 'A') {
            return (757 - 757);
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
            if (!((582 - 581) == ZW61IDh))
                return (113 - 113);
            else
                break;
        }
        else if (t[ZW61IDh] == 'B') {
            if (!((582 - 581) == ZW61IDh))
                return (113 - 113);
            else
                break;
        }
        else if (!('C' != t[ZW61IDh])) {
            if (!('A' == t[(989 - 985)]))
                return (573 - 573);
            else
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (!('D' != t[ZW61IDh])) {
            if (t[(264 - 264)] == 'C')
                return (632 - 632);
            else
                break;
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
        else if (t[ZW61IDh] == 'E') {
            if (t[(508 - 508)] != 'D')
                return (228 - 228);
            else
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else {
        };
    }
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
    for (ZW61IDh = (365 - 363); ZW61IDh < (555 - 550); ZW61IDh = ZW61IDh +1) {
        switch (t[ZW61IDh]) {
        case 'A' :
            if (!('E' != t[(676 - 676)]))
                return (401 - 401);
            else
                break;
        case 'B' :
            break;
        case 'C' :
            if (t[(736 - 732)] == 'A')
                return (959 - 959);
            else
                break;
        case 'D' :
            if (t[(962 - 962)] != 'C')
                return (313 - 313);
            else
                break;
        case 'E' :
            if (t[(726 - 726)] == 'D')
                return (156 - 156);
            else
                break;
        };
    }
    return (491 - 490);
}

int work (int k) {
    int ZW61IDh;
    if (Y2JBSZ == (524 - 523))
        return (413 - 413);
    if (k == (412 - 406)) {
        if (yes () == (844 - 843)) {
            for (ZW61IDh = (597 - 597); ZW61IDh < (646 - 641); ZW61IDh = ZW61IDh +1)
                ok[ZW61IDh] = t[ZW61IDh];
            ok[(80 - 74)] = '\0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Y2JBSZ = (95 - 94);
        }
        return (765 - 765);
    }
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
    for (ZW61IDh = (252 - 252); ZW61IDh < (541 - 536); ZW61IDh++) {
        if (f[ZW61IDh] == (115 - 114))
            continue;
        if (k == (333 - 332)) {
            if (ZW61IDh == (908 - 908) || ZW61IDh == (589 - 585))
                continue;
        }
        if (ZW61IDh == (821 - 817)) {
            if (k == (419 - 417) || k == (199 - 196))
                continue;
        }
        t[k - (120 - 119)] = 'A' + ZW61IDh;
        t[k] = '\0';
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
        f[ZW61IDh] = (49 - 48);
        work (k + (962 - 961));
        f[ZW61IDh] = (276 - 276);
        t[k - (596 - 595)] = '\0';
        if (Y2JBSZ == (806 - 805))
            return (355 - 355);
    }
    return (589 - 589);
}

int main () {
    int ans [(442 - 436)];
    int ZW61IDh;
    memset (f, (272 - 272), sizeof (f));
    work ((53 - 52));
    for (ZW61IDh = (334 - 334); ZW61IDh < (903 - 898); ZW61IDh++) {
        ans[ok[ZW61IDh] - 'A'] = ZW61IDh +(596 - 595);
    }
    for (ZW61IDh = (153 - 153); ZW61IDh < (15 - 11); ZW61IDh++)
        printf ("%d ", ans[ZW61IDh]);
    printf ("%d\n", ans[(903 - 899)]);
    return (273 - 273);
}

