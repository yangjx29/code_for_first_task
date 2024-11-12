main () {
    int s;
    int hygZGo;
    int r7mSB29;
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
    int mb9aPEQ7MJln;
    s = 0;
    for (;;) {
        scanf ("%d %d", &hygZGo, &r7mSB29);
        if (hygZGo == 0 && r7mSB29 == 0)
            break;
        if (hygZGo == 1)
            printf ("%d\n", hygZGo);
        else {
            s = 0;
            {
                mb9aPEQ7MJln = 2;
                while (mb9aPEQ7MJln <= hygZGo) {
                    s = (s + r7mSB29) % mb9aPEQ7MJln;
                    mb9aPEQ7MJln++;
                };
            }
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
            printf ("%d\n", s + 1);
        };
    };
}

