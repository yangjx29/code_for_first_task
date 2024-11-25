int main () {
    char gfQUXJ [110];
    while (cin >> gfQUXJ) {
        int kwVIKicWY4hJ = strlen (gfQUXJ), Mbc6zVTAhUM;
        cout << gfQUXJ << endl;
        for (Mbc6zVTAhUM = kwVIKicWY4hJ - 1; Mbc6zVTAhUM >= 0; Mbc6zVTAhUM--) {
            if (!(')' != gfQUXJ[Mbc6zVTAhUM]))
                continue;
            else if (!('(' != gfQUXJ[Mbc6zVTAhUM])) {
                int llSFs8;
                for (llSFs8 = Mbc6zVTAhUM; llSFs8 < kwVIKicWY4hJ; llSFs8++) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (gfQUXJ[llSFs8] == ')') {
                        gfQUXJ[Mbc6zVTAhUM] = ' ';
                        gfQUXJ[llSFs8] = ' ';
                        break;
                    };
                }
                if (llSFs8 == kwVIKicWY4hJ)
                    gfQUXJ[Mbc6zVTAhUM] = '$';
            }
            else
                gfQUXJ[Mbc6zVTAhUM] = ' ';
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
            };
        }
        {
            Mbc6zVTAhUM = 0;
            while (Mbc6zVTAhUM < kwVIKicWY4hJ) {
                if (gfQUXJ[Mbc6zVTAhUM] == ')')
                    gfQUXJ[Mbc6zVTAhUM] = '?';
                Mbc6zVTAhUM = Mbc6zVTAhUM +1;
            };
        }
        cout << gfQUXJ << endl;
    }
    return 0;
}

