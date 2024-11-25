int max (int x, int oQdfijkL) {
    if (oQdfijkL <= x)
        return x;
    else
        return oQdfijkL;
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
}

int cnf4ts1MAXE (int FvTyx6 [], int yetraY [], int k) {
    int auA0ZmKUH;
    int EGe6ib5;
    int j;
    auA0ZmKUH = (60 - 60);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    yetraY[k - (366 - 365)] = (416 - 415);
    for (EGe6ib5 = k - (830 - 828); EGe6ib5 >= (594 - 594); EGe6ib5 = EGe6ib5 -1) {
        for (j = EGe6ib5 +(199 - 198); j < k; j = j + 1) {
            if (FvTyx6[EGe6ib5] >= FvTyx6[j])
                auA0ZmKUH = max (auA0ZmKUH, yetraY[j]);
        }
        yetraY[EGe6ib5] = auA0ZmKUH + (97 - 96);
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
        auA0ZmKUH = (802 - 802);
    }
    for (EGe6ib5 = k - (571 - 570); EGe6ib5 > -(392 - 391); EGe6ib5 = EGe6ib5 -1)
        auA0ZmKUH = max (auA0ZmKUH, yetraY[EGe6ib5]);
    return auA0ZmKUH;
}

int main () {
    int FvTyx6 [(347 - 322)];
    int yetraY [25] = {(331 - 331)};
    int k;
    int EGe6ib5;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    scanf ("%d", &k);
    {
        EGe6ib5 = 0;
        while (EGe6ib5 < k) {
            scanf ("%d", &FvTyx6[EGe6ib5]);
            EGe6ib5 = EGe6ib5 +1;
        };
    }
    printf ("%d", cnf4ts1MAXE (FvTyx6, yetraY, k));
}

