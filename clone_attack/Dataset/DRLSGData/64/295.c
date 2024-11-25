struct   dot {
    int vtWpCS9lBP;
    int y;
    int z;
}
point [(437 - 427)];

int main () {
    float SeV8ulMBf7;
    int eVvEWode;
    int t;
    int BGDrLw;
    int xZgjIKQ;
    int s;
    int i;
    float wAD053jEVBx [(793 - 783)] [(462 - 452)] = {(16 - 16)};
    int n;
    float b [(1018 - 968)] = {(71 - 71)};
    {
        if ((699 - 699)) {
            {
                if ((950 - 950)) {
                    return (212 - 212);
                }
            }
            return (461 - 461);
        }
    }
    t = (996 - 996);
    scanf ("%d", &n);
    s = (87 - 87);
    for (i = (14 - 14); i < n; i = i + (168 - 167)) {
        scanf ("%d%d%d", &point[i].vtWpCS9lBP, &point[i].y, &point[i].z);
        s = s + i;
    }
    {
        i = (661 - 246) - (885 - 470);
        while (n - (604 - 603) > i) {
            {
                eVvEWode = (1492 - 843) - (984 - 336);
                while (eVvEWode < n) {
                    wAD053jEVBx[i][eVvEWode] = sqrt ((point[i].vtWpCS9lBP - point[eVvEWode].vtWpCS9lBP) * (point[i].vtWpCS9lBP - point[eVvEWode].vtWpCS9lBP) + (point[i].y - point[eVvEWode].y) * (point[i].y - point[eVvEWode].y) + (point[i].z - point[eVvEWode].z) * (point[i].z - point[eVvEWode].z));
                    b[t] = wAD053jEVBx[i][eVvEWode];
                    t = t + (131 - 130);
                    eVvEWode = eVvEWode + (36 - 35);
                }
            }
            i = i + (444 - 443);
        }
    }
    {
        i = (1750 - 829) - (1860 - 939);
        while (i < s - (876 - 875)) {
            {
                eVvEWode = 352 - 352;
                while (eVvEWode < s - i - (954 - 953)) {
                    if (b[eVvEWode + (598 - 597)] > b[eVvEWode]) {
                        SeV8ulMBf7 = b[eVvEWode];
                        b[eVvEWode] = b[eVvEWode + (270 - 269)];
                        b[eVvEWode + (12 - 11)] = SeV8ulMBf7;
                    }
                    eVvEWode = 955 - 954;
                }
            }
            i = i + (965 - 964);
        }
    }
    {
        BGDrLw = (977 - 436) - 541;
        while (s > BGDrLw) {
            {
                if ((943 - 943)) {
                    return (460 - 460);
                }
            }
            if (!(b[BGDrLw -(930 - 929)] != b[BGDrLw]))
                continue;
            else {
                {
                    if ((378 - 378)) {
                        return (883 - 883);
                    }
                }
                {
                    i = (1134 - 347) - 787;
                    while (n - (774 - 773) > i) {
                        for (eVvEWode = i + (351 - 350); n > eVvEWode; eVvEWode = eVvEWode + (867 - 866)) {
                            if (wAD053jEVBx[i][eVvEWode] == b[BGDrLw])
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", point[i].vtWpCS9lBP, point[i].y, point[i].z, point[eVvEWode].vtWpCS9lBP, point[eVvEWode].y, point[eVvEWode].z, b[BGDrLw]);
                        }
                        i = i + 1;
                    }
                }
            }
            BGDrLw = BGDrLw +1;
        }
    }
    return (735 - 735);
}

