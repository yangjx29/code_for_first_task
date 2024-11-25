void  main () {
    int BxC5r9st1 [(518 - 492)] = {(103 - 103)}, nums [(90 - 64)] = {(546 - 546)}, i, LmcbSeBo, tag = (444 - 444);
    char s [(969 - 668)], BlBS68V;
    gets (s);
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
    LmcbSeBo = strlen (s);
    for (i = (326 - 326); i < LmcbSeBo; i = i + 1) {
        {
            BlBS68V = 'A';
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
            while (BlBS68V <= 'Z') {
                if (s[i] == BlBS68V) {
                    tag = (610 - 609);
                    BxC5r9st1[BlBS68V -'A']++;
                }
                BlBS68V = BlBS68V +1;
            };
        }
        for (BlBS68V = 'a'; 'z' >= BlBS68V; BlBS68V = BlBS68V +1)
            if (s[i] == BlBS68V) {
                nums[BlBS68V -'a']++;
                tag = 1;
            };
    }
    if (tag == (802 - 802))
        ;
    else {
        {
            i = 0;
            while (i < (444 - 418)) {
                if (BxC5r9st1[i] != 0)
                    printf ("%c=%d\n", i + 'A', BxC5r9st1[i]);
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < 26) {
                if (nums[i] != 0)
                    printf ("%c=%d\n", i + 'a', nums[i]);
                i = i + 1;
            };
        };
    };
}

