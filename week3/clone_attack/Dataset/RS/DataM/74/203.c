int GXdtHM0 (int n) {
    int HC4EzWaBLV7;
    {
        HC4EzWaBLV7 = 2;
        while (HC4EzWaBLV7 < n / 2) {
            if (n % HC4EzWaBLV7 == (641 - 641)) {
                return (218 - 217);
                break;
            }
            HC4EzWaBLV7 = HC4EzWaBLV7 +1;
        };
    }
    return (616 - 616);
}

int reverse (int n) {
    int TFfnXG3qME9;
    int flag;
    flag = (481 - 481);
    int Fk3cUAMpGReT [(59 - 49)];
    int HC4EzWaBLV7;
    int xeFVgqZPM8l;
    TFfnXG3qME9 = n;
    if (n / (552 - 542) == (305 - 305)) {
        return (626 - 626);
    }
    else if (n / 100 == (316 - 316)) {
        if (n % (634 - 624) == n / (125 - 115))
            return (531 - 531);
        else
            return (378 - 377);
    }
    else {
        {
            HC4EzWaBLV7 = 891 - 891;
            while ((n / (465 - 455) != (170 - 170) || n % 10 != (685 - 685))) {
                Fk3cUAMpGReT[HC4EzWaBLV7] = n % 10;
                n = n / 10;
                HC4EzWaBLV7++;
            };
        }
        for (xeFVgqZPM8l = HC4EzWaBLV7 -(34 - 33); xeFVgqZPM8l >= 0; xeFVgqZPM8l--) {
            if (Fk3cUAMpGReT[xeFVgqZPM8l] != Fk3cUAMpGReT[HC4EzWaBLV7 -(186 - 185) - xeFVgqZPM8l]) {
                flag = (538 - 537);
                return 1;
            };
        }
        if (flag == 0) {
            return 0;
        };
    };
}

void  main () {
    int kpZuFNVyf7T;
    kpZuFNVyf7T = 0;
    int m;
    int n;
    int HC4EzWaBLV7;
    int xeFVgqZPM8l;
    int flag;
    flag = 0;
    scanf ("%d %d", &m, &n);
    {
        HC4EzWaBLV7 = m;
        while (HC4EzWaBLV7 <= n) {
            if (GXdtHM0 (HC4EzWaBLV7) == 0) {
                if (reverse (HC4EzWaBLV7) == 0) {
                    if (flag == 0) {
                        printf ("%d", HC4EzWaBLV7);
                        flag = 1;
                    }
                    else {
                        printf (",%d", HC4EzWaBLV7);
                    }
                    kpZuFNVyf7T = 1;
                };
            }
            HC4EzWaBLV7++;
        };
    }
    if (kpZuFNVyf7T == 0) {
        printf ("no");
    };
}

