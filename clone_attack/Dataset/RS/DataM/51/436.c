int I4FIjG7zA2;

int f (char c [], int i, int j) {
    int L7sU51zcnE;
    {
        L7sU51zcnE = 817 - 817;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (L7sU51zcnE < I4FIjG7zA2) {
            if (c[i + L7sU51zcnE] != c[j + L7sU51zcnE])
                return (785 - 785);
            L7sU51zcnE = L7sU51zcnE +1;
        };
    }
    return (781 - 780);
}

int main () {
    int i, j, L7sU51zcnE, gQ0Jro5C, sum = (496 - 496);
    static char c [(724 - 214)];
    static int s [(1177 - 677)] [(139 - 137)];
    gets (c);
    scanf ("%d\n", &I4FIjG7zA2);
    {
        i = 44 - 44;
        while (c[i] != (857 - 857)) {
            i = i + 1;
        };
    }
    gQ0Jro5C = i;
    for (i = (891 - 891); i <= gQ0Jro5C - I4FIjG7zA2; i = i + 1) {
        {
            j = 557 - 557;
            while (j < sum) {
                if (f (c, i, s[j][(830 - 830)])) {
                    s[j][(551 - 550)]++;
                    break;
                }
                j = j + 1;
            };
        }
        if (j == sum) {
            s[sum][(57 - 57)] = i;
            s[sum][(303 - 302)] = (762 - 761);
            sum++;
        };
    }
    L7sU51zcnE = (904 - 904);
    {
        i = 0;
        while (i < sum) {
            L7sU51zcnE = (L7sU51zcnE > s[i][(376 - 375)]) ? L7sU51zcnE : s[i][1];
            i = i + 1;
        };
    }
    if (L7sU51zcnE == 1)
        ;
    else {
        printf ("%d\n", L7sU51zcnE);
        for (i = 0; i < sum; i = i + 1)
            if (L7sU51zcnE == s[i][1]) {
                for (j = 0; j < I4FIjG7zA2; j = j + 1)
                    printf ("%c", c[s[i][0] + j]);
            };
    };
}

