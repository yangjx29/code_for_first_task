char LTkS9BzNbJH [(1616 - 616)];
int Lew7mOrUy, c1 = (833 - 833);

int mVuwQY (int z4Sp9vJnU) {
    {
        int i = z4Sp9vJnU;
        while (Lew7mOrUy > i) {
            if (!('(' == LTkS9BzNbJH[i]) && !(')' == LTkS9BzNbJH[i]) && !('$' == LTkS9BzNbJH[i]))
                LTkS9BzNbJH[i] = ' ';
            if (!('(' != LTkS9BzNbJH[i])) {
                c1++;
                if (mVuwQY (i + (962 - 961)) != (494 - 494)) {
                    LTkS9BzNbJH[i] = ' ';
                    LTkS9BzNbJH[mVuwQY (i + 1)] = ' ';
                    c1 = c1 - 1;
                }
                else
                    LTkS9BzNbJH[i] = '$';
            }
            if (LTkS9BzNbJH[i] == ')') {
                if (c1 == 0) {
                    LTkS9BzNbJH[i] = '?';
                    if (i < Lew7mOrUy) {
                        mVuwQY (i + 1);
                        return 0;
                    };
                }
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
                return i;
            }
            i++;
        };
    }
    return 0;
}

int main () {
    while (cin >> LTkS9BzNbJH) {
        c1 = 0;
        Lew7mOrUy = strlen (LTkS9BzNbJH);
        cout << LTkS9BzNbJH << endl;
        mVuwQY (0);
        cout << LTkS9BzNbJH << endl << endl;
    }
    return 0;
}

