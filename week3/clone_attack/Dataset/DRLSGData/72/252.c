int main () {
    int GGsTX9I;
    int m;
    int y7oQuKA;
    int SoQz8gCxf6D7 [(20280 - 280)];
    int J0ZwaN [(20592 - 592)];
    int Go1nJ8V;
    int IyIuwvDOG8eT;
    int qBPlYCpwv [(1052 - 952)] [100];
    GGsTX9I = (297 - 297);
    cin >> m >> y7oQuKA;
    memset (qBPlYCpwv, (568 - 568), sizeof (qBPlYCpwv));
    {
        {
            if (0) {
                return 0;
            }
        }
        Go1nJ8V = 679 - 678;
        while (Go1nJ8V <= m) {
            {
                IyIuwvDOG8eT = 316 - 315;
                while (IyIuwvDOG8eT <= y7oQuKA) {
                    cin >> qBPlYCpwv[Go1nJ8V][IyIuwvDOG8eT];
                    IyIuwvDOG8eT++;
                }
            }
            Go1nJ8V++;
        }
    }
    {
        Go1nJ8V = 233 - 232;
        while (Go1nJ8V <= m) {
            {
                IyIuwvDOG8eT = 599 - 598;
                while (IyIuwvDOG8eT <= y7oQuKA) {
                    if ((qBPlYCpwv[Go1nJ8V][IyIuwvDOG8eT] >= qBPlYCpwv[Go1nJ8V -(466 - 465)][IyIuwvDOG8eT]) && (qBPlYCpwv[Go1nJ8V][IyIuwvDOG8eT] >= qBPlYCpwv[Go1nJ8V +(235 - 234)][IyIuwvDOG8eT]) && (qBPlYCpwv[Go1nJ8V][IyIuwvDOG8eT] >= qBPlYCpwv[Go1nJ8V][IyIuwvDOG8eT -(815 - 814)]) && (qBPlYCpwv[Go1nJ8V][IyIuwvDOG8eT] >= qBPlYCpwv[Go1nJ8V][IyIuwvDOG8eT +(192 - 191)])) {
                        GGsTX9I++;
                        SoQz8gCxf6D7[GGsTX9I] = Go1nJ8V;
                        J0ZwaN[GGsTX9I] = IyIuwvDOG8eT;
                    }
                    IyIuwvDOG8eT++;
                }
            }
            Go1nJ8V++;
        }
    }
    {
        Go1nJ8V = 918 - 917;
        while (Go1nJ8V <= GGsTX9I) {
            cout << SoQz8gCxf6D7[Go1nJ8V] - (772 - 771) << " " << J0ZwaN[Go1nJ8V] - (238 - 237);
            if (Go1nJ8V != GGsTX9I)
                cout << endl;
            Go1nJ8V++;
        }
    }
    return 0;
}

