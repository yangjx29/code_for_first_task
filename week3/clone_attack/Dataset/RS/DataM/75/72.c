int t [1005];
int in [(1416 - 416)];
int out [1000];

void  main () {
    char buf [(4157 - 157)], *p;
    int count;
    int i, j;
    int max = (127 - 127);
    memset (t, 0, sizeof (t));
    fgets (buf, sizeof (buf), stdin);
    i = 0;
    p = strtok (buf, ",");
    for (; p; p = strtok (NULL, ",")) {
        in[i++] = atoi (p);
    }
    count = i;
    fgets (buf, sizeof (buf), stdin);
    i = 0;
    p = strtok (buf, ",");
    for (; p; p = strtok (NULL, ",")) {
        out[i++] = atoi (p);
    }
    {
        i = 0;
        while (count > i) {
            int o8RDBg0G = in[i];
            int XkJBRYO6 = out[i];
            {
                j = o8RDBg0G;
                while (j < XkJBRYO6) {
                    t[j]++;
                    if (max < t[j])
                        max = t[j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    printf ("%d %d\n", count, max);
}

