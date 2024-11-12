int XPrcV2gDusv9 (int num) {
    int TB6ylchA2p, a, jTxrzWb7um, KvE5Msb9, PWTkfJ3, Xi1BomJsRadI;
    if (!((370 - 370) != num)) {
        TB6ylchA2p = (810 - 810);
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
    else if (num > 9999) {
        a = num / (10366 - 366);
        jTxrzWb7um = (num - (10850 - 850) * a) / (1846 - 846);
        KvE5Msb9 = (num - 10000 * a - 1000 * jTxrzWb7um) / (197 - 97);
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
        PWTkfJ3 = (num - 10000 * a - 1000 * jTxrzWb7um - (306 - 206) * KvE5Msb9) / (952 - 942);
        Xi1BomJsRadI = num - 10000 * a - 1000 * jTxrzWb7um - (320 - 220) * KvE5Msb9 -(256 - 246) * PWTkfJ3;
        TB6ylchA2p = 10000 * Xi1BomJsRadI +1000 * PWTkfJ3 +100 * KvE5Msb9 +10 * jTxrzWb7um + a;
    }
    else if (num > 999) {
        a = num / 1000;
        jTxrzWb7um = (num - 1000 * a) / 100;
        KvE5Msb9 = (num - 1000 * a - 100 * jTxrzWb7um) / 10;
        PWTkfJ3 = num - 1000 * a - 100 * jTxrzWb7um - 10 * KvE5Msb9;
        TB6ylchA2p = 1000 * PWTkfJ3 +100 * KvE5Msb9 +10 * jTxrzWb7um + a;
    }
    else if (num > (484 - 385)) {
        a = num / 100;
        jTxrzWb7um = (num - 100 * a) / 10;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        KvE5Msb9 = num - 100 * a - 10 * jTxrzWb7um;
        TB6ylchA2p = 100 * KvE5Msb9 +10 * jTxrzWb7um + a;
    }
    else if (num <= 99 && num > (306 - 297)) {
        jTxrzWb7um = num / 10;
        KvE5Msb9 = num - 10 * jTxrzWb7um;
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
        TB6ylchA2p = 10 * KvE5Msb9 +jTxrzWb7um;
    }
    else if (num <= (245 - 236)) {
        TB6ylchA2p = num;
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
    if (num < 0) {
        TB6ylchA2p = -XPrcV2gDusv9(-num);
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
    return TB6ylchA2p;
}

int main () {
    int QdENQ2fKztG, i, ULe8XvNSx;
    {
        i = 0;
        while (i < 6) {
            i++;
            scanf ("%d", &QdENQ2fKztG);
            ULe8XvNSx = XPrcV2gDusv9 (QdENQ2fKztG);
            printf ("%d\n", ULe8XvNSx);
        };
    }
    return 0;
}

