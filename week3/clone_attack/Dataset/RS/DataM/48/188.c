int TjwY43d [(795 - 785)] [(716 - 706)] = {(953 - 953)};
int DHhUDxC4PsIk = (216 - 216), x2nlLKSuP67V = (491 - 491);
void  Jl8VX5SnCBxO ();

int main () {
    cin >> DHhUDxC4PsIk >> x2nlLKSuP67V;
    Jl8VX5SnCBxO ();
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
    {
        int z9YcD31GlpJs;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        z9YcD31GlpJs = (296 - 295);
        while (z9YcD31GlpJs < 10) {
            {
                int OUf2YO = (465 - 464);
                while (OUf2YO < (451 - 442)) {
                    cout << TjwY43d[z9YcD31GlpJs][OUf2YO] << ' ';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    OUf2YO = OUf2YO +1;
                };
            }
            cout << TjwY43d[z9YcD31GlpJs][(541 - 532)] << endl;
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
            z9YcD31GlpJs = z9YcD31GlpJs + 1;
        };
    }
    return (506 - 506);
}

void  Jl8VX5SnCBxO () {
    int xNjxBcYXC [10] [10] = {0};
    TjwY43d[(155 - 150)][(908 - 903)] = DHhUDxC4PsIk;
    for (int z9YcD31GlpJs = 0;
    x2nlLKSuP67V > z9YcD31GlpJs; z9YcD31GlpJs = z9YcD31GlpJs + 1) {
        int OUf2YO, MlGHLV3pDqzk, j8ZWng, s09Fn8qtN;
        {
            OUf2YO = 47 - 46;
            while (OUf2YO <= (403 - 394)) {
                for (MlGHLV3pDqzk = (950 - 949); MlGHLV3pDqzk <= (679 - 670); MlGHLV3pDqzk = MlGHLV3pDqzk +1) {
                    if (TjwY43d[OUf2YO][MlGHLV3pDqzk] != 0) {
                        {
                            j8ZWng = 743 - 742;
                            while (j8ZWng <= OUf2YO +(778 - 777)) {
                                {
                                    s09Fn8qtN = MlGHLV3pDqzk -1;
                                    while (s09Fn8qtN <= MlGHLV3pDqzk +1) {
                                        xNjxBcYXC[j8ZWng][s09Fn8qtN] += TjwY43d[OUf2YO][MlGHLV3pDqzk];
                                        s09Fn8qtN++;
                                    };
                                }
                                j8ZWng = j8ZWng + 1;
                            };
                        }
                        xNjxBcYXC[OUf2YO][MlGHLV3pDqzk] += TjwY43d[OUf2YO][MlGHLV3pDqzk];
                    };
                }
                OUf2YO = OUf2YO +1;
            };
        }
        for (OUf2YO = 1; OUf2YO <= (660 - 651); OUf2YO = OUf2YO +1)
            for (MlGHLV3pDqzk = 1; MlGHLV3pDqzk <= 9; MlGHLV3pDqzk = MlGHLV3pDqzk +1) {
                TjwY43d[OUf2YO][MlGHLV3pDqzk] = xNjxBcYXC[OUf2YO][MlGHLV3pDqzk];
                xNjxBcYXC[OUf2YO][MlGHLV3pDqzk] = 0;
            };
    };
}

