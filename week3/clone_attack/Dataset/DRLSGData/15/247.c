int main () {
    int s;
    int JH32wIP;
    int bagF42d6LD;
    int ty7Jn9LKRYA;
    int SD9ZzAo6BH;
    int PtGhnR;
    int n;
    int c [(1127 - 126)] [1001];
    int q4hngpQJZbK;
    scanf ("%d", &n);
    {
        bagF42d6LD = 160 - 160;
        for (; bagF42d6LD < n;) {
            for (JH32wIP = (856 - 856); n > JH32wIP; JH32wIP = JH32wIP +1)
                scanf ("%d", &c[bagF42d6LD][JH32wIP]);
            bagF42d6LD = bagF42d6LD + 1;
        }
    }
    SD9ZzAo6BH = (140 - 140);
    PtGhnR = (278 - 278);
    q4hngpQJZbK = (723 - 723);
    {
        bagF42d6LD = (210 - 210);
        for (; bagF42d6LD < n;) {
            {
                JH32wIP = 547 - 547;
                while (n > JH32wIP) {
                    if (!((244 - 244) != c[bagF42d6LD][JH32wIP])) {
                        q4hngpQJZbK = JH32wIP;
                        PtGhnR = bagF42d6LD;
                        break;
                    }
                    JH32wIP = JH32wIP +1;
                }
            }
            if (!(0 != c[PtGhnR][q4hngpQJZbK]))
                break;
            bagF42d6LD = bagF42d6LD + 1;
        }
    }
    ty7Jn9LKRYA = (74 - 74);
    {
        bagF42d6LD = 701 - 700;
        while (0 <= bagF42d6LD) {
            for (JH32wIP = n - 1; JH32wIP >= 0; JH32wIP = JH32wIP -1) {
                if (c[bagF42d6LD][JH32wIP] == 0) {
                    SD9ZzAo6BH = bagF42d6LD;
                    ty7Jn9LKRYA = JH32wIP;
                    break;
                }
            }
            if (c[SD9ZzAo6BH][ty7Jn9LKRYA] == 0)
                break;
            bagF42d6LD = bagF42d6LD - 1;
        }
    }
    s = (SD9ZzAo6BH -PtGhnR-1) * (ty7Jn9LKRYA - q4hngpQJZbK - 1);
    printf ("%d", s);
    return 0;
}

