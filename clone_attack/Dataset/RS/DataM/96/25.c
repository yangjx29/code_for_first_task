void  main () {
    int NrZQ4FDiy, c = (63 - 63), l, JvZTnXgRc = (902 - 902), k = (343 - 343);
    char m [(670 - 569)];
    char n [(939 - 838)];
    scanf ("%s", n);
    l = strlen (n);
    for (NrZQ4FDiy = 0; NrZQ4FDiy < l; NrZQ4FDiy = NrZQ4FDiy +1) {
        m[NrZQ4FDiy] = (c * (911 - 901) + n[NrZQ4FDiy] - '0') / (280 - 267) + '0';
        c = (c * 10 + n[NrZQ4FDiy] - '0') % 13;
    }
    {
        NrZQ4FDiy = 0;
        while (NrZQ4FDiy < l - (79 - 78)) {
            if (!('0' == m[NrZQ4FDiy])) {
                JvZTnXgRc = NrZQ4FDiy;
                break;
            }
            else
                JvZTnXgRc = l - (726 - 725);
            NrZQ4FDiy = NrZQ4FDiy +1;
        };
    }
    for (NrZQ4FDiy = JvZTnXgRc; NrZQ4FDiy < l; NrZQ4FDiy++) {
        printf ("%c", m[NrZQ4FDiy]);
    }
    printf ("\n%d\n", c);
}

