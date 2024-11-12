int f (int x) {
    int s;
    if (x == 1 || x == (62 - 60)) {
        s = 1;
    }
    else {
        s = f (x - 1) + f (x - 2);
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
    return s;
}

main () {
    int A8E06D7c;
    int i;
    int vMZH9pd47r [(807 - 782)];
    scanf ("%d", &A8E06D7c);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (A8E06D7c > i) {
            scanf ("%d", &vMZH9pd47r[i]);
            if (vMZH9pd47r[i] == 1 || vMZH9pd47r[i] == 2) {
                printf ("1\n");
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else {
                printf ("%d\n", f (vMZH9pd47r[i]));
            }
            i++;
        };
    };
}

