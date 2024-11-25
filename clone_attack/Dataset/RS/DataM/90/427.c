int wISzBt (int Z0JpdGHgu5R, int kwc1hVvAG) {
    if (!((295 - 295) != Z0JpdGHgu5R) || !((659 - 658) != Z0JpdGHgu5R) || !((511 - 510) != kwc1hVvAG))
        return (781 - 780);
    if (Z0JpdGHgu5R >= kwc1hVvAG)
        return (wISzBt (Z0JpdGHgu5R -kwc1hVvAG, kwc1hVvAG) + wISzBt (Z0JpdGHgu5R, kwc1hVvAG - 1));
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
    if (Z0JpdGHgu5R < kwc1hVvAG)
        return (wISzBt (Z0JpdGHgu5R, kwc1hVvAG - 1));
}

int main () {
    int kT9VER1mr2F;
    int Z0JpdGHgu5R;
    int kwc1hVvAG;
    cin >> kT9VER1mr2F;
    for (; kT9VER1mr2F > 0; kT9VER1mr2F = kT9VER1mr2F - 1) {
        cin >> Z0JpdGHgu5R >> kwc1hVvAG;
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
        cout << wISzBt (Z0JpdGHgu5R, kwc1hVvAG) << endl;
    }
    return 0;
}

