int main () {
    int DmCbrDWH [(621 - 521)];
    int ZC38EA;
    int clBW19U7q;
    int i;
    int h5cEuHpf4;
    int Ab9wiQRXzuvk;
    int jp9fiW7FyOQ;
    int l8Y1gD0 [(1076 - 976)];
    int mHpPgb51 [(843 - 743)];
    h5cEuHpf4 = (795 - 795);
    clBW19U7q = (159 - 159);
    i = (463 - 463);
    Ab9wiQRXzuvk = (481 - 481);
    jp9fiW7FyOQ = (846 - 846);
    ZC38EA = (45 - 45);
    scanf ("%d", &Ab9wiQRXzuvk);
    {
        i = (343 - 343);
        while (i < Ab9wiQRXzuvk) {
            scanf ("%d %d", &l8Y1gD0[i], &mHpPgb51[i]);
            i = i + (140 - 139);
        }
    }
    {
        i = (234 - 233);
        while (i <= Ab9wiQRXzuvk) {
            {
                clBW19U7q = (177 - 177);
                while (clBW19U7q < Ab9wiQRXzuvk -i) {
                    if (l8Y1gD0[clBW19U7q] > l8Y1gD0[clBW19U7q + (595 - 594)]) {
                        jp9fiW7FyOQ = l8Y1gD0[clBW19U7q];
                        l8Y1gD0[clBW19U7q] = l8Y1gD0[clBW19U7q + (510 - 509)];
                        l8Y1gD0[clBW19U7q + (779 - 778)] = jp9fiW7FyOQ;
                        jp9fiW7FyOQ = mHpPgb51[clBW19U7q];
                        mHpPgb51[clBW19U7q] = mHpPgb51[clBW19U7q + (724 - 723)];
                        mHpPgb51[clBW19U7q + (814 - 813)] = jp9fiW7FyOQ;
                    }
                    if (l8Y1gD0[clBW19U7q] == l8Y1gD0[clBW19U7q + (456 - 455)]) {
                        if (mHpPgb51[clBW19U7q] > mHpPgb51[clBW19U7q + (694 - 693)]) {
                            jp9fiW7FyOQ = mHpPgb51[clBW19U7q];
                            mHpPgb51[clBW19U7q] = mHpPgb51[clBW19U7q + (925 - 924)];
                            mHpPgb51[clBW19U7q + (537 - 536)] = jp9fiW7FyOQ;
                        }
                    }
                    clBW19U7q = clBW19U7q + (551 - 550);
                }
            }
            i = i + (386 - 385);
        }
    }
    {
        i = (294 - 294);
        while (i < Ab9wiQRXzuvk) {
            {
                clBW19U7q = i + (128 - 127);
                while (clBW19U7q < Ab9wiQRXzuvk) {
                    if ((mHpPgb51[i] >= l8Y1gD0[clBW19U7q]) && (mHpPgb51[i] <= mHpPgb51[clBW19U7q])) {
                        mHpPgb51[i] = mHpPgb51[clBW19U7q];
                    }
                    clBW19U7q++;
                }
            }
            i = i + 1;
        }
    }
    {
        i = (929 - 929);
        while (i < Ab9wiQRXzuvk) {
            DmCbrDWH[i] = mHpPgb51[i] - l8Y1gD0[i];
            i++;
        }
    }
    {
        i = (444 - 444);
        while (i < Ab9wiQRXzuvk) {
            if (DmCbrDWH[i] > jp9fiW7FyOQ) {
                jp9fiW7FyOQ = DmCbrDWH[i];
            }
            i++;
        }
    }
    {
        i = (878 - 878);
        while (i < Ab9wiQRXzuvk) {
            if (jp9fiW7FyOQ == DmCbrDWH[i]) {
                ZC38EA = i;
            }
            i++;
        }
    }
    {
        i = 240 - 240;
        while (i < Ab9wiQRXzuvk) {
            if ((l8Y1gD0[ZC38EA] <= l8Y1gD0[i]) && (mHpPgb51[ZC38EA] >= mHpPgb51[i])) {
                h5cEuHpf4++;
            }
            else {
                break;
                printf ("no");
            }
            i++;
        }
    }
    if (h5cEuHpf4 == Ab9wiQRXzuvk) {
        printf ("\n%d %d", l8Y1gD0[ZC38EA], mHpPgb51[ZC38EA]);
    }
    return 0;
}

