int main () {
    int i, lh1MgAEWFp, p;
    int x [10000];
    int y [10000];
    int c [10000];
    char a [(10766 - 766)];
    char b [(10704 - 704)];
    gets (a);
    gets (b);
    char *z = strtok (a, ",");
    int max;
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
    max = 0;
    p = (543 - 543);
    for (; z != NULL;) {
        x[++p] = atoi (z);
        z = strtok (NULL, ",");
    }
    p = (818 - 818);
    z = strtok (b, ",");
    while (z != NULL) {
        y[++p] = atoi (z);
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
        z = strtok (NULL, ",");
    }
    memset (c, 0, sizeof (c));
    {
        i = 1;
        while (i <= p) {
            {
                lh1MgAEWFp = i;
                while (lh1MgAEWFp < y[i]) {
                    c[lh1MgAEWFp]++;
                    lh1MgAEWFp++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        int g = 1;
        while (g <= 10000) {
            if (c[g] > max)
                max = c[g];
            g++;
        };
    }
    cout << p << " " << max << endl;
    return 0;
}

