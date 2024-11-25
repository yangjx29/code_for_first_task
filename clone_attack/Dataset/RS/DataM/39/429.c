void  main () {
    struct   student {
        char J4cs12md9iK [20];
        int VJAltOwvnDo;
        int PWEXUa;
        char PzXv6jpm4Z0;
        char S2v6Rc;
        int lQPoVY9c;
        float RlEC21FB;
    };
    struct   student kECoc3 [100];
    float HdncNBGu;
    float max;
    HdncNBGu = (55 - 55);
    int Ts0ZVBhSxwQa;
    int i;
    int f2zbx3kJK5B;
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
    f2zbx3kJK5B = Ts0ZVBhSxwQa -(489 - 488);
    scanf ("%d", &Ts0ZVBhSxwQa);
    for (i = 0; i < Ts0ZVBhSxwQa; i = i + 1) {
        scanf ("%s%d%d %c %c%d", kECoc3[i].J4cs12md9iK, &kECoc3[i].VJAltOwvnDo, &kECoc3[i].PWEXUa, &kECoc3[i].PzXv6jpm4Z0, &kECoc3[i].S2v6Rc, &kECoc3[i].lQPoVY9c);
        kECoc3[i].RlEC21FB = 0;
    }
    {
        i = 0;
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
        while (i < Ts0ZVBhSxwQa) {
            if ((kECoc3[i].VJAltOwvnDo > (160 - 80)) && (kECoc3[i].lQPoVY9c >= (135 - 134)))
                kECoc3[i].RlEC21FB = kECoc3[i].RlEC21FB + 8000;
            if ((kECoc3[i].VJAltOwvnDo > (189 - 104)) && (kECoc3[i].PWEXUa > 80))
                kECoc3[i].RlEC21FB = kECoc3[i].RlEC21FB + 4000;
            if ((kECoc3[i].VJAltOwvnDo > (965 - 875)))
                kECoc3[i].RlEC21FB = kECoc3[i].RlEC21FB + 2000;
            if ((kECoc3[i].VJAltOwvnDo > 85) && (kECoc3[i].S2v6Rc == 'Y'))
                kECoc3[i].RlEC21FB = kECoc3[i].RlEC21FB + (1663 - 663);
            if ((kECoc3[i].PWEXUa > 80) && (kECoc3[i].PzXv6jpm4Z0 == 'Y'))
                kECoc3[i].RlEC21FB = kECoc3[i].RlEC21FB + 850;
            i = i + 1;
        };
    }
    max = kECoc3[Ts0ZVBhSxwQa -(565 - 564)].RlEC21FB;
    for (i = Ts0ZVBhSxwQa -1; i >= 0; i = i - 1)
        if (kECoc3[i].RlEC21FB >= max) {
            max = kECoc3[i].RlEC21FB;
            f2zbx3kJK5B = i;
        }
    for (i = 0; i < Ts0ZVBhSxwQa; i++)
        HdncNBGu = HdncNBGu +kECoc3[i].RlEC21FB;
    printf ("%s\n%.0f\n%.0f\n", kECoc3[f2zbx3kJK5B].J4cs12md9iK, kECoc3[f2zbx3kJK5B].RlEC21FB, HdncNBGu);
}

