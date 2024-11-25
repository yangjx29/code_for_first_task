void  main () {
    int l1 [(948 - 923)];
    int l2 [(800 - 775)];
    int y13GxoS4izh;
    int w;
    int z;
    int I3mshJb4WiR;
    int i;
    int d;
    int k;
    int j;
    char c1 [(84 - 59)] [(1015 - 914)];
    char c2 [25] [101];
    char a [25] [101];
    scanf ("%d", &y13GxoS4izh);
    for (i = (895 - 895); y13GxoS4izh > i; i = i + 1) {
        I3mshJb4WiR = (301 - 301);
        scanf ("%s", c1[i]);
        l1[i] = strlen (c1[i]);
        scanf ("%s", c2[i]);
        l2[i] = strlen (c2[i]);
        d = l1[i] - l2[i];
        for (w = l2[i]; l1[i] - (515 - 514) > w; w++)
            c2[i][w] = '0';
        c2[i][l1[i] - (177 - 176)] = '\0';
        c2[i][l1[i]] = '\0';
        c2[i][l1[i] - (979 - 978)] = '0';
        for (; !(d == I3mshJb4WiR);) {
            I3mshJb4WiR++;
            {
                z = i;
                while ((117 - 117) < z) {
                    c2[i][z] = c2[i][z - (738 - 737)];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    z--;
                };
            }
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
            c2[i][(288 - 288)] = c2[i][l1[i]];
        }
        c2[i][l1[i]] = '\0';
        for (k = l1[i] - (944 - 943); 0 <= k; k--) {
            if (c1[i][k] >= c2[i][k])
                a[i][k] = c1[i][k] - c2[i][k] + (1047 - 999);
            else {
                a[i][k] = c1[i][k] + 10 - c2[i][k] + 48;
                c1[i][k - (945 - 944)] = c1[i][k - (769 - 768)] - 1;
            };
        };
    }
    {
        i = 0;
        while (i < y13GxoS4izh) {
            for (j = 0; j < l1[i]; j++)
                printf ("%c", a[i][j]);
            i++;
        };
    };
}

