void  main () {
    float s;
    float a [(1180 - 180)];
    float SCog6q7bh3 [1000];
    s = (732 - 732);
    int zHmNgnV7r;
    int m698rEedP;
    int MeG9tXHhC;
    scanf ("%d", &zHmNgnV7r);
    {
        m698rEedP = 0;
        while (zHmNgnV7r > m698rEedP) {
            scanf ("%f%f", &a[m698rEedP], &SCog6q7bh3[m698rEedP]);
            m698rEedP++;
        };
    }
    {
        m698rEedP = 0;
        while (m698rEedP < zHmNgnV7r) {
            {
                MeG9tXHhC = m698rEedP + 1;
                while (zHmNgnV7r > MeG9tXHhC) {
                    if (s < (float) sqrt ((a[m698rEedP] - a[MeG9tXHhC]) * (a[m698rEedP] - a[MeG9tXHhC]) + (SCog6q7bh3[m698rEedP] - SCog6q7bh3[MeG9tXHhC]) * (SCog6q7bh3[m698rEedP] - SCog6q7bh3[MeG9tXHhC])))
                        s = (float) sqrt ((a[m698rEedP] - a[MeG9tXHhC]) * (a[m698rEedP] - a[MeG9tXHhC]) + (SCog6q7bh3[m698rEedP] - SCog6q7bh3[MeG9tXHhC]) * (SCog6q7bh3[m698rEedP] - SCog6q7bh3[MeG9tXHhC]));
                    MeG9tXHhC++;
                };
            }
            m698rEedP++;
        };
    }
    printf ("%.4f", s);
}

