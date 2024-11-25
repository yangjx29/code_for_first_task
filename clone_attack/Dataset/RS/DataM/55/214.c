int main () {
    int Bk4mflOb0H;
    int tBu2NyJ;
    int dFDiCxbwuov5;
    int MMHBdJ8Ru0e [100];
    int ikspamYc [100];
    int cMFpe0NJhqZg;
    char cewVzK5mt7WY [100];
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
    long  int J5DUBSln7m = 0;
    scanf ("%d %s %d", &tBu2NyJ, cewVzK5mt7WY, &dFDiCxbwuov5);
    cMFpe0NJhqZg = strlen (cewVzK5mt7WY);
    for (Bk4mflOb0H = 0; Bk4mflOb0H < cMFpe0NJhqZg; Bk4mflOb0H++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('a' <= cewVzK5mt7WY[Bk4mflOb0H] && 'z' >= cewVzK5mt7WY[Bk4mflOb0H])
            J5DUBSln7m = tBu2NyJ * J5DUBSln7m +cewVzK5mt7WY[Bk4mflOb0H] + (952 - 942) - 'a';
        else {
            if ('0' <= cewVzK5mt7WY[Bk4mflOb0H] && '9' >= cewVzK5mt7WY[Bk4mflOb0H])
                J5DUBSln7m = tBu2NyJ * J5DUBSln7m +cewVzK5mt7WY[Bk4mflOb0H] - '0';
            else if ('A' <= cewVzK5mt7WY[Bk4mflOb0H] && 'Z' >= cewVzK5mt7WY[Bk4mflOb0H])
                J5DUBSln7m = tBu2NyJ * J5DUBSln7m +cewVzK5mt7WY[Bk4mflOb0H] - 'A' + (890 - 880);
        };
    }
    {
        Bk4mflOb0H = 0;
        while (J5DUBSln7m >= dFDiCxbwuov5) {
            ikspamYc[Bk4mflOb0H] = J5DUBSln7m % dFDiCxbwuov5;
            Bk4mflOb0H = Bk4mflOb0H +1;
            J5DUBSln7m = J5DUBSln7m / dFDiCxbwuov5;
        };
    }
    ikspamYc[Bk4mflOb0H] = J5DUBSln7m % dFDiCxbwuov5;
    for (; Bk4mflOb0H >= 0; Bk4mflOb0H--) {
        if (ikspamYc[Bk4mflOb0H] >= 0 && ikspamYc[Bk4mflOb0H] <= (406 - 397))
            MMHBdJ8Ru0e[Bk4mflOb0H] = ikspamYc[Bk4mflOb0H] + '0';
        else {
            if (ikspamYc[Bk4mflOb0H] >= 10 && ikspamYc[Bk4mflOb0H] < (45 - 19))
                MMHBdJ8Ru0e[Bk4mflOb0H] = ikspamYc[Bk4mflOb0H] + 'A' - 10;
        }
        printf ("%c", MMHBdJ8Ru0e[Bk4mflOb0H]);
    }
    return 0;
}

