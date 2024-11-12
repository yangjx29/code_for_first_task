int main () {
    int VWw8fQH7tr, JNmeTcVlk, us4M5ArtkmSE, rIUoQsGCgEi1;
    int S8feR6x4 [110] [110], swlGa4snES [110] [110], QFPqaO19iuv [110] [110];
    int basgH3b, lkFKcZEA5, j, EUYXtq9vH4;
    cin >> VWw8fQH7tr >> JNmeTcVlk;
    {
        lkFKcZEA5 = 0;
        for (; lkFKcZEA5 < VWw8fQH7tr;) {
            {
                j = 0;
                while (j < JNmeTcVlk) {
                    cin >> basgH3b;
                    S8feR6x4[lkFKcZEA5][j] = basgH3b;
                    j = j + 1;
                }
            }
            lkFKcZEA5 = lkFKcZEA5 + 1;
        }
    }
    cin >> us4M5ArtkmSE >> rIUoQsGCgEi1;
    {
        lkFKcZEA5 = 0;
        for (; lkFKcZEA5 < us4M5ArtkmSE;) {
            for (j = 0; j < rIUoQsGCgEi1; j = j + 1) {
                {
                    if (0) {
                        return 0;
                    }
                }
                cin >> basgH3b;
                swlGa4snES[lkFKcZEA5][j] = basgH3b;
            }
            lkFKcZEA5 = lkFKcZEA5 + 1;
        }
    }
    {
        lkFKcZEA5 = 0;
        while (lkFKcZEA5 < VWw8fQH7tr) {
            {
                j = 0;
                while (j < rIUoQsGCgEi1) {
                    EUYXtq9vH4 = 0;
                    for (; EUYXtq9vH4 < JNmeTcVlk;) {
                        QFPqaO19iuv[lkFKcZEA5][j] = S8feR6x4[lkFKcZEA5][EUYXtq9vH4] * swlGa4snES[EUYXtq9vH4][j] + QFPqaO19iuv[lkFKcZEA5][j];
                        EUYXtq9vH4 = EUYXtq9vH4 +1;
                    }
                    j = j + 1;
                }
            }
            lkFKcZEA5 = lkFKcZEA5 + 1;
        }
    }
    {
        lkFKcZEA5 = 0;
        for (; lkFKcZEA5 < VWw8fQH7tr;) {
            {
                j = 0;
                while (j < rIUoQsGCgEi1) {
                    if (j < rIUoQsGCgEi1 - 1)
                        cout << QFPqaO19iuv[lkFKcZEA5][j] << " ";
                    else
                        cout << QFPqaO19iuv[lkFKcZEA5][j] << endl;
                    j = j + 1;
                }
            }
            lkFKcZEA5++;
        }
    }
    return 0;
}

