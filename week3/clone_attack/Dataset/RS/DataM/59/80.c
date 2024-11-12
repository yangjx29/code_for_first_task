void  C69BsJ8pQSic (char [(349 - 249)] [(770 - 670)], int);
void  yiganran (char [(1045 - 945)] [(378 - 278)], int, int, int);

int main () {
    int xli2QN4cWP7V;
    xli2QN4cWP7V = (615 - 615);
    int ALZPuXM9;
    int Rw42JreqSi;
    char uHcRf5MPy0r [(860 - 760)] [(738 - 638)];
    int uJHgVWL, wXhrksGmN7T;
    cin >> Rw42JreqSi;
    {
        uJHgVWL = 670 - 670;
        while (Rw42JreqSi > uJHgVWL) {
            {
                wXhrksGmN7T = 697 - 697;
                while (Rw42JreqSi > wXhrksGmN7T) {
                    cin >> uHcRf5MPy0r[uJHgVWL][wXhrksGmN7T];
                    wXhrksGmN7T = wXhrksGmN7T + 1;
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
            uJHgVWL = uJHgVWL + 1;
        };
    }
    while (ALZPuXM9 ---(943 - 942)) {
        C69BsJ8pQSic (uHcRf5MPy0r, Rw42JreqSi);
    }
    {
        uJHgVWL = 83 - 83;
        while (uJHgVWL < Rw42JreqSi) {
            {
                wXhrksGmN7T = 470 - 470;
                while (Rw42JreqSi > wXhrksGmN7T) {
                    if (uHcRf5MPy0r[uJHgVWL][wXhrksGmN7T] == '@')
                        xli2QN4cWP7V = xli2QN4cWP7V + 1;
                    wXhrksGmN7T = wXhrksGmN7T + 1;
                };
            }
            uJHgVWL = uJHgVWL + 1;
        };
    }
    cout << xli2QN4cWP7V << endl;
    cin >> ALZPuXM9;
    return (188 - 188);
}

void  C69BsJ8pQSic (char uHcRf5MPy0r [100] [100], int Rw42JreqSi) {
    int uJHgVWL, wXhrksGmN7T;
    {
        uJHgVWL = 938 - 938;
        while (uJHgVWL < Rw42JreqSi) {
            {
                wXhrksGmN7T = 0;
                while (Rw42JreqSi > wXhrksGmN7T) {
                    if (uHcRf5MPy0r[uJHgVWL][wXhrksGmN7T] == '@')
                        yiganran (uHcRf5MPy0r, Rw42JreqSi, uJHgVWL, wXhrksGmN7T);
                    wXhrksGmN7T++;
                };
            }
            uJHgVWL++;
        };
    }
    {
        uJHgVWL = 0;
        while (uJHgVWL < Rw42JreqSi) {
            {
                wXhrksGmN7T = 0;
                while (wXhrksGmN7T < Rw42JreqSi) {
                    if (uHcRf5MPy0r[uJHgVWL][wXhrksGmN7T] == 'a')
                        uHcRf5MPy0r[uJHgVWL][wXhrksGmN7T] = '@';
                    wXhrksGmN7T++;
                };
            }
            uJHgVWL++;
        };
    };
}

void  yiganran (char uHcRf5MPy0r [100] [100], int Rw42JreqSi, int uJHgVWL, int wXhrksGmN7T) {
    if (wXhrksGmN7T > 0 && !('#' == uHcRf5MPy0r[uJHgVWL][wXhrksGmN7T - (123 - 122)]) && uHcRf5MPy0r[uJHgVWL][wXhrksGmN7T - (791 - 790)] != '@')
        uHcRf5MPy0r[uJHgVWL][wXhrksGmN7T - (718 - 717)] = 'a';
    if (Rw42JreqSi -(862 - 861) > wXhrksGmN7T && uHcRf5MPy0r[uJHgVWL][wXhrksGmN7T + (19 - 18)] != '#' && uHcRf5MPy0r[uJHgVWL][wXhrksGmN7T + 1] != '@')
        uHcRf5MPy0r[uJHgVWL][wXhrksGmN7T + 1] = 'a';
    if (uJHgVWL > 0 && uHcRf5MPy0r[uJHgVWL - 1][wXhrksGmN7T] != '#' && uHcRf5MPy0r[uJHgVWL - 1][wXhrksGmN7T] != '@')
        uHcRf5MPy0r[uJHgVWL - 1][wXhrksGmN7T] = 'a';
    if (uJHgVWL < Rw42JreqSi -1 && uHcRf5MPy0r[uJHgVWL + 1][wXhrksGmN7T] != '#' && uHcRf5MPy0r[uJHgVWL + 1][wXhrksGmN7T] != '@')
        uHcRf5MPy0r[uJHgVWL + 1][wXhrksGmN7T] = 'a';
}

