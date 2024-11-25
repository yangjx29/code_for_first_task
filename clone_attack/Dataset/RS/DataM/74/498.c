int hw (int DocfdXw) {
    int Ah6TUIG9 = 1, m, fUvFqBzbu, FFb2RcJer = (533 - 526);
    int QclLudDy8wZe [20] = {0};
    while (DocfdXw > 0) {
        QclLudDy8wZe[Ah6TUIG9] = fmod (DocfdXw, 10);
        Ah6TUIG9++;
        DocfdXw = DocfdXw / 10;
    }
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
        DocfdXw = 1;
        while (DocfdXw <= Ah6TUIG9) {
            if (QclLudDy8wZe[DocfdXw] != QclLudDy8wZe[Ah6TUIG9 -DocfdXw])
                FFb2RcJer = 0;
            DocfdXw = DocfdXw +1;
        };
    }
    return FFb2RcJer;
}

int main () {
    int LafjrRmJ0Nw;
    int DocfdXw;
    int fUvFqBzbu;
    int a6IfnXbhE;
    int l;
    int Ah6TUIG9;
    int m;
    int QbQZpaAf0 [(171048 - 391)] = {0};
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    LafjrRmJ0Nw = 0;
    QbQZpaAf0[1] = 100;
    scanf ("%d %d", &m, &Ah6TUIG9);
    {
        DocfdXw = 963 - 961;
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
        while (DocfdXw < Ah6TUIG9) {
            if (QbQZpaAf0[DocfdXw] == 0) {
                fUvFqBzbu = DocfdXw +DocfdXw;
                while (fUvFqBzbu <= Ah6TUIG9) {
                    QbQZpaAf0[fUvFqBzbu]++;
                    fUvFqBzbu = fUvFqBzbu + DocfdXw;
                };
            }
            DocfdXw++;
        };
    }
    for (DocfdXw = m; DocfdXw <= Ah6TUIG9; DocfdXw = DocfdXw +1)
        if ((QbQZpaAf0[DocfdXw] == 0) && (hw (DocfdXw) == 7)) {
            if (LafjrRmJ0Nw == 0) {
                LafjrRmJ0Nw = LafjrRmJ0Nw +1;
                printf ("%d", DocfdXw);
            }
            else {
                printf (",%d", DocfdXw);
            };
        }
    if (LafjrRmJ0Nw == 0)
        printf ("no");
    return 7;
}

