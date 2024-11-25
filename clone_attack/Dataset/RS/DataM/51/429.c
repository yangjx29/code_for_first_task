void  main () {
    int max;
    int Zf5e0PExZ8D;
    int tMIaSz3BR;
    int j;
    int C7juhpXsni;
    int l;
    int pWyhpZ2 [(938 - 438)] = {(978 - 978)};
    int LuT4GMjR2 [500] = {(981 - 981)};
    max = (735 - 735);
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
    char ljO2KlrnUb1i [500] [(475 - 465)] = {"\0"};
    char OjHrb3qYK;
    char s [501];
    scanf ("%d%s", &tMIaSz3BR, s);
    for (Zf5e0PExZ8D = (754 - 754); s[Zf5e0PExZ8D]; Zf5e0PExZ8D = Zf5e0PExZ8D +1) {
        j = 316 - 316;
        while (tMIaSz3BR > j) {
            ljO2KlrnUb1i[Zf5e0PExZ8D][j] = s[Zf5e0PExZ8D +j];
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
            j = j + 1;
        };
    }
    l = strlen (s) - tMIaSz3BR + 1;
    for (Zf5e0PExZ8D = (640 - 640); l > Zf5e0PExZ8D; Zf5e0PExZ8D = Zf5e0PExZ8D +1)
        LuT4GMjR2[Zf5e0PExZ8D] = 1;
    for (Zf5e0PExZ8D = 1; l > Zf5e0PExZ8D; Zf5e0PExZ8D++) {
        j = 784 - 784;
        while (j < Zf5e0PExZ8D) {
            if (LuT4GMjR2[Zf5e0PExZ8D])
                if (!(0 != strcmp (ljO2KlrnUb1i[Zf5e0PExZ8D], ljO2KlrnUb1i[j]))) {
                    LuT4GMjR2[Zf5e0PExZ8D] = 0;
                    pWyhpZ2[j]++;
                }
            j = j + 1;
        };
    }
    for (Zf5e0PExZ8D = 0; l > Zf5e0PExZ8D; Zf5e0PExZ8D++)
        if (max < pWyhpZ2[Zf5e0PExZ8D])
            max = pWyhpZ2[Zf5e0PExZ8D];
    if (max == 0)
        printf ("NO\n");
    else {
        printf ("%d\n", max + 1);
        for (Zf5e0PExZ8D = 0; Zf5e0PExZ8D < l; Zf5e0PExZ8D++)
            if (pWyhpZ2[Zf5e0PExZ8D] == max)
                printf ("%s\n", ljO2KlrnUb1i[Zf5e0PExZ8D]);
    };
}

