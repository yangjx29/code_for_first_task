int main () {
    int c54Wmzal [100];
    int XOD9lgjAfnot [110];
    int rSlUWzqMT;
    int konI5RUar1;
    int LWbV69Ykn;
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
    int XpkS1n78;
    int tqNUDS1;
    int aMQjSm [(3063 - 63)], ixYHl6Ds [10000], c [3000];
    for (tqNUDS1 = 1; 1000 > tqNUDS1; tqNUDS1 = tqNUDS1 + 1) {
        scanf ("%d %d\n", &c54Wmzal[tqNUDS1], &XOD9lgjAfnot[tqNUDS1]);
        if (c54Wmzal[tqNUDS1] == 0)
            break;
        {
            rSlUWzqMT = 1;
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
            while (c54Wmzal[tqNUDS1] >= rSlUWzqMT) {
                aMQjSm[rSlUWzqMT] = rSlUWzqMT;
                rSlUWzqMT = rSlUWzqMT + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(1 != c54Wmzal[tqNUDS1]))
            aMQjSm[tqNUDS1] = 1;
        while (c54Wmzal[tqNUDS1] > 1) {
            XpkS1n78 = XOD9lgjAfnot[tqNUDS1] % c54Wmzal[tqNUDS1];
            c54Wmzal[tqNUDS1]--;
            rSlUWzqMT = 1;
            for (rSlUWzqMT = 1; rSlUWzqMT <= c54Wmzal[tqNUDS1]; rSlUWzqMT = rSlUWzqMT + 1) {
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
                if (rSlUWzqMT + XpkS1n78 -1 <= c54Wmzal[tqNUDS1])
                    ixYHl6Ds[rSlUWzqMT] = aMQjSm[XpkS1n78 +rSlUWzqMT];
                else {
                    ixYHl6Ds[rSlUWzqMT] = aMQjSm[XpkS1n78 +rSlUWzqMT - c54Wmzal[tqNUDS1] - 1];
                };
            }
            for (konI5RUar1 = 1; konI5RUar1 <= c54Wmzal[tqNUDS1]; konI5RUar1 = konI5RUar1 + 1) {
                aMQjSm[konI5RUar1] = ixYHl6Ds[konI5RUar1];
            };
        }
        printf ("%d\n", aMQjSm[1]);
    }
    return 0;
}

