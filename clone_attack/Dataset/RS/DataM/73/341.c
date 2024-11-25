int main () {
    int i;
    int uCku1L;
    int m;
    int n;
    int lC7J8cMhwx [(908 - 903)] [(799 - 794)];
    int min (int p_1, int p_2, int p_3, int p_4, int EwoSEH82Agv);
    int max (int NOuUKA, int q_2, int q_3, int q_4, int RymVStl);
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
    scanf ("%d %d %d %d %d\n", &lC7J8cMhwx[(326 - 326)][(337 - 337)], &lC7J8cMhwx[0][(559 - 558)], &lC7J8cMhwx[0][(773 - 771)], &lC7J8cMhwx[0][(630 - 627)], &lC7J8cMhwx[0][(906 - 902)]);
    scanf ("%d %d %d %d %d\n", &lC7J8cMhwx[1][0], &lC7J8cMhwx[1][1], &lC7J8cMhwx[1][(775 - 773)], &lC7J8cMhwx[1][(627 - 624)], &lC7J8cMhwx[1][(453 - 449)]);
    scanf ("%d %d %d %d %d\n", &lC7J8cMhwx[(130 - 128)][0], &lC7J8cMhwx[2][1], &lC7J8cMhwx[2][2], &lC7J8cMhwx[2][(632 - 629)], &lC7J8cMhwx[2][(639 - 635)]);
    scanf ("%d %d %d %d %d\n", &lC7J8cMhwx[(306 - 303)][0], &lC7J8cMhwx[(737 - 734)][1], &lC7J8cMhwx[3][2], &lC7J8cMhwx[3][3], &lC7J8cMhwx[3][4]);
    uCku1L = (973 - 973);
    i = (374 - 374);
    scanf ("%d %d %d %d %d\n", &lC7J8cMhwx[4][0], &lC7J8cMhwx[4][1], &lC7J8cMhwx[4][2], &lC7J8cMhwx[4][3], &lC7J8cMhwx[4][4]);
    while (4 >= i) {
        m = max (lC7J8cMhwx[i][0], lC7J8cMhwx[i][1], lC7J8cMhwx[i][2], lC7J8cMhwx[i][3], lC7J8cMhwx[i][4]);
        while (4 >= uCku1L) {
            n = min (lC7J8cMhwx[0][uCku1L], lC7J8cMhwx[1][uCku1L], lC7J8cMhwx[2][uCku1L], lC7J8cMhwx[3][uCku1L], lC7J8cMhwx[4][uCku1L]);
            if (!(m != lC7J8cMhwx[i][uCku1L]) && !(n != lC7J8cMhwx[i][uCku1L])) {
                printf ("%d %d %d", i + 1, uCku1L + 1, lC7J8cMhwx[i][uCku1L]);
                i = 10;
                uCku1L = 10;
            }
            uCku1L++;
        }
        i++;
        uCku1L = 0;
    }
    if (!(5 != i))
        printf ("not found");
    return 0;
}

int max (int NOuUKA, int q_2, int q_3, int q_4, int RymVStl) {
    int da;
    int k;
    if (q_2 > NOuUKA) {
        k = NOuUKA;
        NOuUKA = q_2;
        q_2 = k;
    }
    if (q_3 > NOuUKA) {
        k = NOuUKA;
        NOuUKA = q_3;
        q_3 = k;
    }
    if (q_4 > NOuUKA) {
        k = NOuUKA;
        NOuUKA = q_4;
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
        q_4 = k;
    }
    if (NOuUKA < RymVStl) {
        k = NOuUKA;
        NOuUKA = RymVStl;
        RymVStl = k;
    }
    da = NOuUKA;
    return (da);
}

int min (int p_1, int p_2, int p_3, int p_4, int EwoSEH82Agv) {
    int xiao;
    int t;
    if (p_1 > p_2) {
        t = p_1;
        p_1 = p_2;
        p_2 = t;
    }
    if (p_1 > p_3) {
        t = p_1;
        p_1 = p_3;
        p_3 = t;
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
    if (p_1 > p_4) {
        t = p_1;
        p_1 = p_4;
        p_4 = t;
    }
    if (p_1 > EwoSEH82Agv) {
        t = p_1;
        p_1 = EwoSEH82Agv;
        EwoSEH82Agv = t;
    }
    xiao = p_1;
    return (xiao);
}

