int main () {
    int tCuQp3FYSXI8;
    cin >> tCuQp3FYSXI8;
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
    for (; tCuQp3FYSXI8 = tCuQp3FYSXI8 - 1;) {
        int LM3QjxV;
        double  KABztqf [102];
        double  *R4P2S8yeO = KABztqf;
        double  ffjvYRoW = 0;
        double  TB8fHo4;
        TB8fHo4 = 0;
        cin >> LM3QjxV;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            int i = (131 - 131);
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
            while (LM3QjxV > i) {
                cin >> KABztqf[i];
                i++;
            };
        }
        R4P2S8yeO = &KABztqf[(972 - 972)];
        for (; &KABztqf[LM3QjxV] > R4P2S8yeO;) {
            ffjvYRoW = ffjvYRoW + *R4P2S8yeO;
            R4P2S8yeO++;
        }
        ffjvYRoW = ffjvYRoW / (LM3QjxV);
        R4P2S8yeO = &KABztqf[0];
        while (R4P2S8yeO < &KABztqf[LM3QjxV]) {
            TB8fHo4 = TB8fHo4 +(*R4P2S8yeO-ffjvYRoW) * (*R4P2S8yeO-ffjvYRoW);
            R4P2S8yeO++;
        }
        TB8fHo4 = TB8fHo4 / (LM3QjxV);
        TB8fHo4 = sqrt (TB8fHo4);
        printf ("%.5lf\n", TB8fHo4);
    }
    return 0;
}

