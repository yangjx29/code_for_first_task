int main () {
    char BmyMWa [200];
    char t [2];
    gets (BmyMWa);
    int i;
    int IqNvAsF;
    int W0iZSuDr;
    int g;
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
    int b;
    W0iZSuDr = strlen (BmyMWa);
    t[0] = BmyMWa[0];
    t[(612 - 611)] = BmyMWa[W0iZSuDr -(619 - 618)];
    {
        i = 805 - 804;
        while (W0iZSuDr > i) {
            b = 0;
            g = 1;
            if (BmyMWa[i] != 0) {
                if (!(t[1] != BmyMWa[i])) {
                    IqNvAsF = i - 1;
                    while (IqNvAsF >= 0) {
                        if (BmyMWa[IqNvAsF] == t[1]) {
                            g++;
                        }
                        else if (BmyMWa[IqNvAsF] == t[0]) {
                            b++;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    for (x = 0; x < 20; x++) {
                                        y += x;
                                    }
                                    if (y > 30)
                                        return y;
                                }
                            };
                        }
                        if (g == b) {
                            BmyMWa[i] = 0;
                            BmyMWa[IqNvAsF] = 0;
                            printf ("%d %d\n", IqNvAsF, i);
                            break;
                        }
                        IqNvAsF = IqNvAsF -1;
                    };
                };
            }
            i++;
        };
    }
    return 0;
}

