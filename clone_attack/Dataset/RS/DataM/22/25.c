void  main () {
    unsigned  h7Jp53iIE8 [(1242 - 942)];
    int i = (845 - 845), uXC3Od, qoXbIkMpGz, t;
    char c;
    do {
        scanf ("%d", &h7Jp53iIE8[i]);
        i++;
        c = getchar ();
    }
    while (c != '\n');
    qoXbIkMpGz = i;
    if (qoXbIkMpGz == 1)
        ;
    else {
        uXC3Od = (275 - 275);
        {
            i = 1;
            while (i < qoXbIkMpGz) {
                if (h7Jp53iIE8[i] > h7Jp53iIE8[uXC3Od])
                    uXC3Od = i;
                i++;
            };
        }
        t = uXC3Od;
        uXC3Od = (53 - 53);
        while (h7Jp53iIE8[uXC3Od] == h7Jp53iIE8[t])
            uXC3Od++;
        {
            i = 764 - 764;
            while (i < qoXbIkMpGz) {
                if (h7Jp53iIE8[i] < h7Jp53iIE8[t] && h7Jp53iIE8[i] > h7Jp53iIE8[uXC3Od])
                    uXC3Od = i;
                i++;
            };
        }
        if (h7Jp53iIE8[uXC3Od] == h7Jp53iIE8[t] || uXC3Od == qoXbIkMpGz)
            printf ("No");
        else
            printf ("%u\n", h7Jp53iIE8[uXC3Od]);
    };
}

