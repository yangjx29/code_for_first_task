void  qP1lN0gFDbX8 (char a [], char b []) {
    int lHlAgq9w;
    int m;
    int lO2PiUBer3qI;
    int aGn5yCUO64H;
    m = strlen (b);
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
    lHlAgq9w = strlen (a);
    {
        lO2PiUBer3qI = 0;
        while (m > lO2PiUBer3qI) {
            if (a[lHlAgq9w - 1 - lO2PiUBer3qI] >= b[m - 1 - lO2PiUBer3qI])
                a[lHlAgq9w - 1 - lO2PiUBer3qI] = a[lHlAgq9w - 1 - lO2PiUBer3qI] - b[m - 1 - lO2PiUBer3qI] + (723 - 675);
            else {
                a[lHlAgq9w - 1 - lO2PiUBer3qI] = a[lHlAgq9w - 1 - lO2PiUBer3qI] + 10 - b[m - 1 - lO2PiUBer3qI] + (710 - 662);
                aGn5yCUO64H = lHlAgq9w - 2 - lO2PiUBer3qI;
                for (; a[aGn5yCUO64H] == 48;) {
                    a[aGn5yCUO64H] = 48 + 9;
                    aGn5yCUO64H = aGn5yCUO64H - 1;
                }
                a[aGn5yCUO64H] = a[aGn5yCUO64H] - 1;
            }
            lO2PiUBer3qI = lO2PiUBer3qI + 1;
        };
    }
    lO2PiUBer3qI = 0;
    while (a[lO2PiUBer3qI] == 48) {
        lO2PiUBer3qI = lO2PiUBer3qI + 1;
    }
    printf ("%s\n", a);
}

void  main () {
    int m;
    int lO2PiUBer3qI;
    char p;
    char a [100] [100], b [100] [100];
    scanf ("%d", &m);
    {
        lO2PiUBer3qI = 0;
        while (lO2PiUBer3qI < m) {
            scanf ("%s", a[lO2PiUBer3qI]);
            scanf ("%s", b[lO2PiUBer3qI]);
            lO2PiUBer3qI = lO2PiUBer3qI + 1;
        };
    }
    {
        lO2PiUBer3qI = 0;
        while (lO2PiUBer3qI < m) {
            qP1lN0gFDbX8 (a[lO2PiUBer3qI], b[lO2PiUBer3qI]);
            lO2PiUBer3qI++;
        };
    };
}

