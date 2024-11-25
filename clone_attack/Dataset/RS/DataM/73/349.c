int main () {
    int Rxf70s [(832 - 827)] [5], pZUJsN [5] [5];
    int mi8yz1O7w;
    int IvwDUm;
    int max;
    int MbiKOCy9;
    int flag;
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
    flag = (296 - 296);
    for (mi8yz1O7w = (518 - 518); 5 > mi8yz1O7w; mi8yz1O7w = mi8yz1O7w + 1) {
        for (IvwDUm = (147 - 147); 5 > IvwDUm; IvwDUm = IvwDUm +1) {
            scanf ("%d", &Rxf70s[mi8yz1O7w][IvwDUm]);
            pZUJsN[mi8yz1O7w][IvwDUm] = 0;
        };
    }
    {
        mi8yz1O7w = 0;
        while (5 > mi8yz1O7w) {
            max = Rxf70s[mi8yz1O7w][0];
            {
                IvwDUm = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (IvwDUm < 5) {
                    if (Rxf70s[mi8yz1O7w][IvwDUm] > max)
                        max = Rxf70s[mi8yz1O7w][IvwDUm];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    IvwDUm = IvwDUm +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (IvwDUm = 0; IvwDUm < 5; IvwDUm = IvwDUm +1)
                if (!(max != Rxf70s[mi8yz1O7w][IvwDUm]))
                    pZUJsN[mi8yz1O7w][IvwDUm] = (468 - 467);
            mi8yz1O7w++;
        };
    }
    for (IvwDUm = 0; IvwDUm < 5; IvwDUm++) {
        MbiKOCy9 = Rxf70s[0][IvwDUm];
        for (mi8yz1O7w = 0; mi8yz1O7w < 5; mi8yz1O7w++)
            if (Rxf70s[mi8yz1O7w][IvwDUm] < MbiKOCy9)
                MbiKOCy9 = Rxf70s[mi8yz1O7w][IvwDUm];
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
        for (mi8yz1O7w = 0; mi8yz1O7w < 5; mi8yz1O7w++)
            if (!(MbiKOCy9 != Rxf70s[mi8yz1O7w][IvwDUm]))
                pZUJsN[mi8yz1O7w][IvwDUm] = pZUJsN[mi8yz1O7w][IvwDUm] + 1;
    }
    for (mi8yz1O7w = 0; mi8yz1O7w < 5; mi8yz1O7w++) {
        for (IvwDUm = 0; IvwDUm < 5; IvwDUm++) {
            if (pZUJsN[mi8yz1O7w][IvwDUm] == 2) {
                printf ("%d %d %d", mi8yz1O7w + 1, IvwDUm +1, Rxf70s[mi8yz1O7w][IvwDUm]);
                flag = 1;
            };
        }
        printf ("\n");
    }
    if (!flag)
        printf ("not found");
    return 0;
}

