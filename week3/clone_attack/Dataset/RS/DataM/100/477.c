void  main () {
    int RbyrkJIX5pqR;
    int i;
    RbyrkJIX5pqR = (601 - 601);
    char LnG6it9Cmou [301];
    char d;
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
    static int b [301];
    gets (LnG6it9Cmou);
    {
        i = 0;
        while (i <= strlen (LnG6it9Cmou)) {
            if (LnG6it9Cmou[i] >= 97 && 122 >= LnG6it9Cmou[i])
                b[LnG6it9Cmou[i] - 97] = b[LnG6it9Cmou[i] - 97] + 1;
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
            i = i + 1;
        };
    }
    for (i = 0; i <= 25; i = i + 1)
        RbyrkJIX5pqR = RbyrkJIX5pqR +b[i];
    if (RbyrkJIX5pqR == 0)
        printf ("No");
    else {
        i = 0;
        while (i <= 25) {
            d = i + 97;
            if (b[i] != 0)
                printf ("%c=%d\n", d, b[i]);
            i = i + 1;
        };
    };
}

