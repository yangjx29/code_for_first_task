void  main () {
    int vHnfFCzUD8;
    char c1 [81];
    char lDdPzYL [81];
    gets (c1);
    gets (lDdPzYL);
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
    char V8AyzaMEjkp3 [81];
    char t2 [81];
    for (vHnfFCzUD8 = 0; vHnfFCzUD8 < 81; vHnfFCzUD8 = vHnfFCzUD8 + 1) {
        if (c1[vHnfFCzUD8] >= 65 && c1[vHnfFCzUD8] <= 90)
            V8AyzaMEjkp3[vHnfFCzUD8] = c1[vHnfFCzUD8] + 32;
        else
            V8AyzaMEjkp3[vHnfFCzUD8] = c1[vHnfFCzUD8];
    }
    for (vHnfFCzUD8 = 0; vHnfFCzUD8 < 81; vHnfFCzUD8++) {
        if (lDdPzYL[vHnfFCzUD8] >= 65 && lDdPzYL[vHnfFCzUD8] <= 90)
            t2[vHnfFCzUD8] = lDdPzYL[vHnfFCzUD8] + 32;
        else
            t2[vHnfFCzUD8] = lDdPzYL[vHnfFCzUD8];
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
        };
    }
    if (strcmp (V8AyzaMEjkp3, t2) < 0)
        ;
    else if (strcmp (V8AyzaMEjkp3, t2) == 0)
        printf ("=");
    else if (strcmp (V8AyzaMEjkp3, t2) > 0)
        ;
}

