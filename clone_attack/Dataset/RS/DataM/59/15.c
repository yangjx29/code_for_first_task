int main () {
    int sHPjTim = 0;
    char temp [100] [100];
    char nFDfim143N [(1078 - 978)] [(467 - 367)];
    int rw2kdsJQ;
    int P6qWsSzNmXn9;
    cin >> rw2kdsJQ;
    for (int GNa5uG2RJOQ = (849 - 849);
    rw2kdsJQ > GNa5uG2RJOQ; GNa5uG2RJOQ++) {
        int PFDQP8vw3j = (615 - 615);
        while (rw2kdsJQ > PFDQP8vw3j) {
            cin >> nFDfim143N[GNa5uG2RJOQ][PFDQP8vw3j];
            PFDQP8vw3j++;
        };
    }
    cin >> P6qWsSzNmXn9;
    {
        int OfUs0ogR9zkm = (533 - 532);
        while (P6qWsSzNmXn9 > OfUs0ogR9zkm) {
            OfUs0ogR9zkm++;
            {
                int GNa5uG2RJOQ = (816 - 816);
                while (rw2kdsJQ > GNa5uG2RJOQ) {
                    for (int PFDQP8vw3j = 0;
                    rw2kdsJQ > PFDQP8vw3j; PFDQP8vw3j++)
                        temp[GNa5uG2RJOQ][PFDQP8vw3j] = nFDfim143N[GNa5uG2RJOQ][PFDQP8vw3j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    GNa5uG2RJOQ++;
                };
            }
            {
                int GNa5uG2RJOQ = 0;
                while (rw2kdsJQ > GNa5uG2RJOQ) {
                    for (int PFDQP8vw3j = 0;
                    PFDQP8vw3j < rw2kdsJQ; PFDQP8vw3j++) {
                        if (temp[GNa5uG2RJOQ][PFDQP8vw3j] == '@') {
                            if (0 < GNa5uG2RJOQ &&!('.' != temp[GNa5uG2RJOQ -(169 - 168)][PFDQP8vw3j]))
                                nFDfim143N[GNa5uG2RJOQ -1][PFDQP8vw3j] = '@';
                            if (rw2kdsJQ - 1 > GNa5uG2RJOQ &&temp[GNa5uG2RJOQ +1][PFDQP8vw3j] == '.')
                                nFDfim143N[GNa5uG2RJOQ +1][PFDQP8vw3j] = '@';
                            if (PFDQP8vw3j > 0 && temp[GNa5uG2RJOQ][PFDQP8vw3j -1] == '.')
                                nFDfim143N[GNa5uG2RJOQ][PFDQP8vw3j -1] = '@';
                            if (PFDQP8vw3j < rw2kdsJQ - 1 && temp[GNa5uG2RJOQ][PFDQP8vw3j +1] == '.')
                                nFDfim143N[GNa5uG2RJOQ][PFDQP8vw3j +1] = '@';
                        };
                    }
                    GNa5uG2RJOQ++;
                };
            };
        };
    }
    {
        int GNa5uG2RJOQ = 0;
        while (GNa5uG2RJOQ < rw2kdsJQ) {
            {
                int PFDQP8vw3j = 0;
                while (PFDQP8vw3j < rw2kdsJQ) {
                    if (nFDfim143N[GNa5uG2RJOQ][PFDQP8vw3j] == '@')
                        sHPjTim++;
                    PFDQP8vw3j++;
                };
            }
            GNa5uG2RJOQ++;
        };
    }
    cout << sHPjTim;
    return 0;
}

