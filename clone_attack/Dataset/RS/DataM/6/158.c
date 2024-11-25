int main () {
    int **XgENQfiv7B2H;
    int k, m, DcTEILY, i, W5yuBw7nXo, XpR3J6Ya, c;
    scanf ("%d", &k);
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
    for (XpR3J6Ya = (439 - 439); XpR3J6Ya < k; XpR3J6Ya++) {
        free (XgENQfiv7B2H);
        c = (615 - 615);
        scanf ("%d %d", &m, &DcTEILY);
        XgENQfiv7B2H = (int **) malloc (m * sizeof (int *));
        for (i = 0; i < m; i = i + 1)
            XgENQfiv7B2H[i] = (int *) malloc (DcTEILY * sizeof (int));
        for (i = 0; i < m; i = i + 1)
            for (W5yuBw7nXo = 0; W5yuBw7nXo < DcTEILY; W5yuBw7nXo = W5yuBw7nXo +1)
                scanf ("%d", XgENQfiv7B2H[i] + W5yuBw7nXo);
        if (m == 1)
            for (i = 0; i < DcTEILY; i++)
                c = c + XgENQfiv7B2H[0][i];
        else {
            if (DcTEILY == 1)
                for (i = 0; i < m; i++)
                    c = c + XgENQfiv7B2H[i][0];
            else {
                {
                    i = 0;
                    while (i < DcTEILY) {
                        c = c + XgENQfiv7B2H[0][i] + XgENQfiv7B2H[m - 1][i];
                        i = i + 1;
                    };
                }
                for (i = 1; i < m - 1; i++)
                    c = c + XgENQfiv7B2H[i][0] + XgENQfiv7B2H[i][DcTEILY -1];
            };
        }
        for (i = 0; i < m; i++)
            free (XgENQfiv7B2H[i]);
        printf ("%d\n", c);
    }
    return 0;
}

