int Ao6bFSf (char sfKGlX) {
    if (!('.' != sfKGlX))
        sfKGlX = '@';
    return sfKGlX;
}

int g (char sfKGlX) {
    if (!('.' != sfKGlX))
        sfKGlX = '*';
    return sfKGlX;
}

int main () {
    int sum;
    int n;
    int m;
    sum = 0;
    char sfKGlX [102] [102];
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
    cin >> n;
    {
        int G6gjtX0hbEN8 = (375 - 374);
        while (n >= G6gjtX0hbEN8) {
            {
                int O6pIrFEZJCB3 = (83 - 82);
                while (n >= O6pIrFEZJCB3) {
                    cin >> sfKGlX[G6gjtX0hbEN8][O6pIrFEZJCB3];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    O6pIrFEZJCB3 = O6pIrFEZJCB3 +1;
                };
            }
            G6gjtX0hbEN8 = G6gjtX0hbEN8 +1;
        };
    }
    cin >> m;
    {
        int Fgl2GzAKYXtM = (275 - 274);
        while (m > Fgl2GzAKYXtM) {
            {
                int G6gjtX0hbEN8 = (143 - 142);
                while (G6gjtX0hbEN8 <= n) {
                    {
                        int O6pIrFEZJCB3 = (954 - 953);
                        while (O6pIrFEZJCB3 <= n) {
                            if (sfKGlX[G6gjtX0hbEN8][O6pIrFEZJCB3] != '@')
                                continue;
                            else {
                                sfKGlX[G6gjtX0hbEN8 -(892 - 891)][O6pIrFEZJCB3] = Ao6bFSf (sfKGlX[G6gjtX0hbEN8 -(926 - 925)][O6pIrFEZJCB3]);
                                sfKGlX[G6gjtX0hbEN8 +(54 - 53)][O6pIrFEZJCB3] = g (sfKGlX[G6gjtX0hbEN8 +(407 - 406)][O6pIrFEZJCB3]);
                                sfKGlX[G6gjtX0hbEN8][O6pIrFEZJCB3 +1] = g (sfKGlX[G6gjtX0hbEN8][O6pIrFEZJCB3 +1]);
                                sfKGlX[G6gjtX0hbEN8][O6pIrFEZJCB3 -1] = Ao6bFSf (sfKGlX[G6gjtX0hbEN8][O6pIrFEZJCB3 -1]);
                            }
                            O6pIrFEZJCB3 = O6pIrFEZJCB3 +1;
                        };
                    }
                    G6gjtX0hbEN8 = G6gjtX0hbEN8 +1;
                };
            }
            Fgl2GzAKYXtM = Fgl2GzAKYXtM +1;
            {
                int G6gjtX0hbEN8 = 1;
                while (G6gjtX0hbEN8 <= n) {
                    {
                        int O6pIrFEZJCB3 = 1;
                        while (O6pIrFEZJCB3 <= n) {
                            if (sfKGlX[G6gjtX0hbEN8][O6pIrFEZJCB3] == '*')
                                sfKGlX[G6gjtX0hbEN8][O6pIrFEZJCB3] = '@';
                            O6pIrFEZJCB3 = O6pIrFEZJCB3 +1;
                        };
                    }
                    G6gjtX0hbEN8 = G6gjtX0hbEN8 +1;
                };
            };
        };
    }
    {
        int G6gjtX0hbEN8 = 1;
        while (G6gjtX0hbEN8 <= n) {
            {
                int O6pIrFEZJCB3 = 1;
                while (O6pIrFEZJCB3 <= n) {
                    sum = sum + (sfKGlX[G6gjtX0hbEN8][O6pIrFEZJCB3] == '@');
                    O6pIrFEZJCB3 = O6pIrFEZJCB3 +1;
                };
            }
            G6gjtX0hbEN8++;
        };
    }
    cout << sum << endl;
    return 0;
}

