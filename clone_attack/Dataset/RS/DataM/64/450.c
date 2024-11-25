int main () {
    int JeSHTimQ9ZO;
    int WrVFntemqC;
    int CZjfRw;
    int hdYACo;
    int l;
    int KM9HXZLUk8d;
    int ndM5jc;
    int b;
    int n74QvlFk8 [(281 - 269)] = {(429 - 429)};
    int y [(671 - 659)] = {(784 - 784)};
    int z [(284 - 272)] = {(623 - 623)};
    double  bAIHOMrFfa6 [(718 - 706)] [(317 - 305)] = {(181 - 181)};
    double  max;
    int dCFgfyserna7 [12] [12] = {(126 - 126)};
    cin >> JeSHTimQ9ZO;
    {
        WrVFntemqC = 152 - 151;
        while (JeSHTimQ9ZO >= WrVFntemqC) {
            cin >> n74QvlFk8[WrVFntemqC] >> y[WrVFntemqC] >> z[WrVFntemqC];
            WrVFntemqC = WrVFntemqC +1;
        };
    }
    {
        WrVFntemqC = 986 - 985;
        while (WrVFntemqC <= JeSHTimQ9ZO) {
            {
                CZjfRw = 312 - 311;
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
                while (JeSHTimQ9ZO >= CZjfRw) {
                    bAIHOMrFfa6[WrVFntemqC][CZjfRw] = sqrt ((n74QvlFk8[WrVFntemqC] - n74QvlFk8[CZjfRw]) * (n74QvlFk8[WrVFntemqC] - n74QvlFk8[CZjfRw]) + (y[WrVFntemqC] - y[CZjfRw]) * (y[WrVFntemqC] - y[CZjfRw]) + (z[WrVFntemqC] - z[CZjfRw]) * (z[WrVFntemqC] - z[CZjfRw]));
                    CZjfRw = CZjfRw +1;
                };
            }
            WrVFntemqC = WrVFntemqC +1;
        };
    }
    max = -(771.0 - 770.0);
    hdYACo = JeSHTimQ9ZO *(JeSHTimQ9ZO -(40 - 39)) / (851 - 849);
    {
        l = 865 - 864;
        while (l <= hdYACo) {
            l = l + 1;
            {
                WrVFntemqC = 793 - 792;
                while (WrVFntemqC <= JeSHTimQ9ZO) {
                    {
                        CZjfRw = WrVFntemqC +1;
                        while (CZjfRw <= JeSHTimQ9ZO) {
                            if (bAIHOMrFfa6[WrVFntemqC][CZjfRw] - max > (937.0000000001 - 937.0)) {
                                max = bAIHOMrFfa6[WrVFntemqC][CZjfRw];
                                b = CZjfRw;
                                ndM5jc = WrVFntemqC;
                            }
                            CZjfRw = CZjfRw +1;
                        };
                    }
                    WrVFntemqC++;
                };
            }
            cout << "(" << n74QvlFk8[ndM5jc] << "," << y[ndM5jc] << "," << z[ndM5jc] << ")" << "-" << "(" << n74QvlFk8[b] << "," << y[b] << "," << z[b] << ")" << "=" << fixed << setprecision (2) << bAIHOMrFfa6[ndM5jc][b] << endl;
            bAIHOMrFfa6[ndM5jc][b] = (829 - 829);
            max = -1;
        };
    }
    return 0;
}

