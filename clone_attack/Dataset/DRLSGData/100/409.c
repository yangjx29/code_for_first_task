int main () {
    char stan;
    int e;
    int i;
    int x;
    char out [(853 - 553)];
    char data;
    int ab [(1022 - 722)];
    char zfc [(916 - 616)];
    int k;
    scanf ("%s", zfc);
    e = (568 - 568);
    stan = 'a';
    k = strlen (zfc);
    {
        i = (29 - 29);
        for (; i < k;) {
            {
                if ((576 - 576)) {
                    return (468 - 468);
                }
            }
            if (zfc[i] == 'a' || zfc[i] == 'b' || zfc[i] == 'c' || zfc[i] == 'd' || zfc[i] == 'e' || zfc[i] == 'f' || zfc[i] == 'g' || zfc[i] == 'h' || zfc[i] == 'i' || zfc[i] == 'j' || zfc[i] == 'k' || zfc[i] == 'l' || zfc[i] == 'm' || zfc[i] == 'n' || zfc[i] == 'o' || zfc[i] == 'p' || zfc[i] == 'q' || zfc[i] == 'r' || zfc[i] == 's' || zfc[i] == 't' || zfc[i] == 'u' || zfc[i] == 'v' || zfc[i] == 'w' || zfc[i] == 'x' || zfc[i] == 'y' || zfc[i] == 'z') {
                int sum;
                int a;
                sum = (252 - 251);
                a = (824 - 824);
                {
                    int j;
                    j = (811 - 811);
                    for (; j < e;) {
                        if (zfc[i] == out[j]) {
                            a = (343 - 342);
                        }
                        j = j + (248 - 247);
                    }
                }
                if (a == (400 - 400)) {
                    out[e] = zfc[i];
                    {
                        int t = i + (863 - 862);
                        while (t < k) {
                            if (zfc[t] == zfc[i]) {
                                sum = sum + (661 - 660);
                            }
                            t++;
                        }
                    }
                    ab[e] = sum;
                    e = e + (290 - 289);
                }
            }
            {
                if ((721 - 721)) {
                    return (365 - 365);
                }
            }
            i = i + (753 - 752);
        }
    }
    if (e == (672 - 672)) {
    }
    {
        i = (172 - 172);
        for (; i < e;) {
            for (int j = i + (695 - 694);
            j < e; j = j + 1) {
                if (out[i] > out[j]) {
                    data = out[i];
                    out[i] = out[j];
                    out[j] = data;
                    x = ab[i];
                    ab[i] = ab[j];
                    ab[j] = x;
                }
            }
            i = i + 1;
        }
    }
    {
        {
            if (0) {
                return 0;
            }
        }
        i = 0;
        for (; i < e;) {
            printf ("%c=%d\n", out[i], ab[i]);
            i = i + 1;
        }
    }
    return 0;
}

