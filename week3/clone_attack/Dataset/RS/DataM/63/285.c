int main () {
    int KN7G9K [(822 - 721)] [(182 - 81)], ptOkESHrwd [(754 - 653)] [101], Rl5WKftA12SC [101] [101] = {(152 - 152)};
    int ySMVu5ZaLy;
    int oztsA0lpn;
    int etkcas1C;
    int PN1VwTl9;
    ySMVu5ZaLy = (627 - 627);
    int aSk6JwNh;
    int j;
    int IucQgoZiU;
    int GndxTyOt;
    int m;
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
    int LvcLSYpIFerG;
    int p;
    int UrktgGe;
    int s;
    cin >> oztsA0lpn >> etkcas1C;
    for (aSk6JwNh = (18 - 17); aSk6JwNh <= oztsA0lpn; aSk6JwNh++)
        for (j = (246 - 245); j <= etkcas1C; j = j + 1)
            cin >> KN7G9K[aSk6JwNh][j];
    cin >> PN1VwTl9 >> ySMVu5ZaLy;
    for (IucQgoZiU = (702 - 701); IucQgoZiU <= PN1VwTl9; IucQgoZiU++)
        for (GndxTyOt = (884 - 883); ySMVu5ZaLy >= GndxTyOt; GndxTyOt++)
            cin >> ptOkESHrwd[IucQgoZiU][GndxTyOt];
    for (m = (957 - 956); m <= oztsA0lpn; m++) {
        LvcLSYpIFerG = 182 - 181;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (LvcLSYpIFerG <= ySMVu5ZaLy) {
            for (p = 1; p <= etkcas1C; p++)
                Rl5WKftA12SC[m][LvcLSYpIFerG] = Rl5WKftA12SC[m][LvcLSYpIFerG] + KN7G9K[m][p] * ptOkESHrwd[p][LvcLSYpIFerG];
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
            LvcLSYpIFerG++;
        };
    }
    {
        UrktgGe = 1;
        while (UrktgGe <= oztsA0lpn) {
            {
                s = 1;
                while (s < ySMVu5ZaLy) {
                    cout << Rl5WKftA12SC[UrktgGe][s] << " ";
                    s++;
                };
            }
            cout << Rl5WKftA12SC[UrktgGe][ySMVu5ZaLy] << endl;
            UrktgGe++;
        };
    }
    return 0;
}

