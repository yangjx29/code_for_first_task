int main () {
    char C [213] [213];
    int Fw4Aq5P02T [200013] [2];
    int Woivuf;
    int N;
    int M;
    int Op;
    Woivuf = (617 - 617);
    int Ans;
    Ans = 0;
    Op = (526 - 525);
    cin >> M;
    scanf ("%d\n", &N);
    {
        int I;
        I = (857 - 856);
        while (N >= I) {
            scanf ("\n");
            {
                int J;
                J = (204 - 203);
                while (J <= N) {
                    scanf ("%c", &C[I][J]);
                    J++;
                };
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
            I++;
        };
    }
    {
        int I = (647 - 646);
        while (N >= I) {
            {
                int J = (219 - 218);
                while (J <= N) {
                    if (C[I][J] == '@') {
                        Woivuf++;
                        Fw4Aq5P02T[Woivuf][0] = I;
                        Fw4Aq5P02T[Woivuf][(880 - 879)] = J;
                    }
                    J++;
                };
            }
            I++;
        };
    }
    for (int I = 1;
    M > I; I++) {
        int Cl = Woivuf;
        {
            int J = Op;
            while (Cl >= J) {
                int X = Fw4Aq5P02T[J][0], Y = Fw4Aq5P02T[J][1];
                if ((X +1 <= N) && (!('.' != C[X +1][Y]))) {
                    Woivuf++;
                    Fw4Aq5P02T[Woivuf][0] = X +1;
                    Fw4Aq5P02T[Woivuf][1] = Y;
                    C[X +1][Y] = '@';
                }
                if ((X -1 >= 1) && (C[X -1][Y] == '.')) {
                    Woivuf++;
                    Fw4Aq5P02T[Woivuf][0] = X -1;
                    Fw4Aq5P02T[Woivuf][1] = Y;
                    C[X -1][Y] = '@';
                }
                if ((Y +1 <= N) && (C[X][Y +1] == '.')) {
                    Woivuf++;
                    Fw4Aq5P02T[Woivuf][0] = X;
                    Fw4Aq5P02T[Woivuf][1] = Y +1;
                    C[X][Y +1] = '@';
                }
                if ((Y -1 >= 1) && (C[X][Y -1] == '.')) {
                    Woivuf++;
                    Fw4Aq5P02T[Woivuf][0] = X;
                    C[X][Y -1] = '@';
                    Fw4Aq5P02T[Woivuf][1] = Y -1;
                }
                J++;
            };
        }
        Op = Cl +1;
    }
    {
        int I = 1;
        while (I <= N) {
            {
                int J = 1;
                while (J <= N) {
                    if (C[I][J] == '@')
                        Ans++;
                    J++;
                };
            }
            I++;
        };
    }
    cout << Ans << endl;
}

