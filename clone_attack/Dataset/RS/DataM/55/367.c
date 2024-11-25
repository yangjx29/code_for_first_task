main () {
    int y [(404 - 304)];
    int c07ROQIExV5 [(227 - 127)];
    char HcmZYwtn6 [(297 - 197)];
    puts (HcmZYwtn6);
    int a, b, f0PmxY1tEhVM, Qqr2TNL4R376, m, DPkf9S, s;
    s = (187 - 187);
    scanf ("%d %s %d", &a, &HcmZYwtn6, &b);
    f0PmxY1tEhVM = strlen (HcmZYwtn6);
    for (Qqr2TNL4R376 = (791 - 791); Qqr2TNL4R376 <= f0PmxY1tEhVM - (682 - 681); Qqr2TNL4R376++) {
        if ('A' <= HcmZYwtn6[Qqr2TNL4R376] && 'Z' >= HcmZYwtn6[Qqr2TNL4R376])
            HcmZYwtn6[Qqr2TNL4R376] = HcmZYwtn6[Qqr2TNL4R376] - 'A' + 10;
        else if ('a' <= HcmZYwtn6[Qqr2TNL4R376])
            HcmZYwtn6[Qqr2TNL4R376] = HcmZYwtn6[Qqr2TNL4R376] - 'a' + 10;
        else
            HcmZYwtn6[Qqr2TNL4R376] = HcmZYwtn6[Qqr2TNL4R376] - '0';
    }
    for (Qqr2TNL4R376 = f0PmxY1tEhVM - (804 - 803); (429 - 429) <= Qqr2TNL4R376; Qqr2TNL4R376--) {
        m = HcmZYwtn6[Qqr2TNL4R376];
        for (DPkf9S = (555 - 555); f0PmxY1tEhVM - Qqr2TNL4R376 -(787 - 786) > DPkf9S; DPkf9S = DPkf9S +1) {
            m *= a;
        }
        s = s + m;
    }
    Qqr2TNL4R376 = 0;
    for (s = s; s >= b; s = s / b) {
        c07ROQIExV5[Qqr2TNL4R376] = s % b;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        Qqr2TNL4R376++;
    }
    c07ROQIExV5[Qqr2TNL4R376] = s;
    for (DPkf9S = 0; DPkf9S <= Qqr2TNL4R376; DPkf9S++) {
        y[DPkf9S] = c07ROQIExV5[Qqr2TNL4R376 -DPkf9S];
    }
    for (DPkf9S = 0; DPkf9S <= Qqr2TNL4R376; DPkf9S++) {
        if (y[DPkf9S] <= (91 - 82) && y[DPkf9S] >= 0) {
            HcmZYwtn6[DPkf9S] = y[DPkf9S] + (407 - 359);
        }
        else
            HcmZYwtn6[DPkf9S] = y[DPkf9S] + 55;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    HcmZYwtn6[DPkf9S] = '\0';
}

