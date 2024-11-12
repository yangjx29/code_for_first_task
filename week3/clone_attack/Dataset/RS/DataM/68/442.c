int T6nvVp (int MEXofu) {
    int ZKOXzIum;
    int s;
    int hNMe23ycdqxC;
    int JU8OH3yqPLj;
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
    ZKOXzIum = (896 - 895);
    s = (int) sqrt (MEXofu) + 1;
    if (!((205 - 202) != MEXofu) || MEXofu == 5 || !(7 != MEXofu))
        ZKOXzIum = 3;
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (JU8OH3yqPLj = 2; s > JU8OH3yqPLj; JU8OH3yqPLj++) {
            hNMe23ycdqxC = MEXofu % JU8OH3yqPLj;
            if (!((310 - 310) != hNMe23ycdqxC)) {
                ZKOXzIum = 2;
                break;
            }
            else
                ZKOXzIum = 3;
        };
    }
    return ZKOXzIum;
}

int main () {
    int JU8OH3yqPLj;
    int mpzdwK62B7g9;
    int MEXofu;
    int mBRDAruq;
    int diM1tNW3;
    scanf ("%d", &MEXofu);
    if (MEXofu == 6)
        ;
    else {
        JU8OH3yqPLj = 6;
        while (JU8OH3yqPLj < (MEXofu +1)) {
            for (mpzdwK62B7g9 = 3; mpzdwK62B7g9 < (MEXofu / 2 + 1); mpzdwK62B7g9 += 2) {
                mBRDAruq = T6nvVp (mpzdwK62B7g9);
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
                diM1tNW3 = T6nvVp (JU8OH3yqPLj -mpzdwK62B7g9);
                if ((mBRDAruq + diM1tNW3) == 6) {
                    printf ("%d=%d+%d\n", JU8OH3yqPLj, mpzdwK62B7g9, JU8OH3yqPLj -mpzdwK62B7g9);
                    break;
                };
            }
            JU8OH3yqPLj += 2;
        };
    }
    return 0;
}

