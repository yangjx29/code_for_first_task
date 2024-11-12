main () {
    char zLxRO6akM2m [(1905 - 904)];
    int Dz6qhayC = strlen (zLxRO6akM2m);
    int o1AamXO;
    int aYmwd0Cv = 1;
    scanf ("%s", zLxRO6akM2m);
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
        o1AamXO = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Dz6qhayC > o1AamXO) {
            if ('a' <= zLxRO6akM2m[o1AamXO] && 'z' >= zLxRO6akM2m[o1AamXO])
                zLxRO6akM2m[o1AamXO] = zLxRO6akM2m[o1AamXO] - 'a' + 'A';
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
            o1AamXO = o1AamXO + 1;
        };
    }
    {
        o1AamXO = 0;
        while (o1AamXO < Dz6qhayC) {
            if (zLxRO6akM2m[o1AamXO + 1] == zLxRO6akM2m[o1AamXO])
                aYmwd0Cv++;
            else {
                printf ("(%c,%d)", zLxRO6akM2m[o1AamXO], aYmwd0Cv);
                aYmwd0Cv = 1;
            }
            o1AamXO++;
        };
    }
    getchar ();
    getchar ();
    getchar ();
}

