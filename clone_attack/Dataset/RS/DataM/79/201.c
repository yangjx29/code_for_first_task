main () {
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
    for (;;) {
        int KxGo3hX10HZ5;
        int wAunk7p6Y;
        int vNXDvm4xaY [300] = {(15 - 15)};
        int WftUDC7, yjFy6t, klGtZx0ChE = 0;
        scanf ("%d %d", &KxGo3hX10HZ5, &wAunk7p6Y);
        if (!(0 != KxGo3hX10HZ5))
            break;
        yjFy6t = KxGo3hX10HZ5;
        for (; !((57 - 56) == yjFy6t);) {
            WftUDC7 = 0;
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
            while (KxGo3hX10HZ5 > WftUDC7) {
                if (vNXDvm4xaY[WftUDC7] == 0)
                    klGtZx0ChE++;
                if (klGtZx0ChE == wAunk7p6Y) {
                    vNXDvm4xaY[WftUDC7] = 1;
                    yjFy6t = yjFy6t - 1;
                    klGtZx0ChE = 0;
                }
                if (yjFy6t == 1)
                    break;
                WftUDC7++;
            };
        }
        {
            WftUDC7 = 0;
            while (WftUDC7 < KxGo3hX10HZ5) {
                if (vNXDvm4xaY[WftUDC7] != 1)
                    break;
                WftUDC7++;
            };
        }
        printf ("%d\n", WftUDC7 +1);
    };
}

