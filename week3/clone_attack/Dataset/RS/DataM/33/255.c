void  main () {
    int i;
    int n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    for (i = (422 - 422); n > i; i = i + 1) {
        char line [(448 - 192)] = {'\0'};
        int j;
        int Hfb2LBJZ;
        scanf ("%s", line);
        Hfb2LBJZ = strlen (line);
        for (j = 0; j < Hfb2LBJZ; j = j + 1)
            switch (line[j]) {
            case 'A' :
                line[j] = 'T';
                continue;
            case 'T' :
                line[j] = 'A';
                continue;
            case 'C' :
                line[j] = 'G';
                continue;
            case 'G' :
                line[j] = 'C';
                continue;
            }
        printf ("%s\n", line);
    };
}

