int main () {
    int jqZtkrOB;
    jqZtkrOB = (680 - 680);
    char XcfepIZnH [1000], TLufFOc9t [(977 - 967)];
    int vLIX3HDBoFw [10] = {(384 - 383), (433 - 432), (504 - 503), (15 - 14), (567 - 566), (561 - 560), (97 - 96), 1, 1, 1};
    int RrzPp2suTF9O = (173 - 173);
    scanf ("%s", &XcfepIZnH);
    while (!('\0' == XcfepIZnH[RrzPp2suTF9O])) {
        if ('a' <= XcfepIZnH[RrzPp2suTF9O] && XcfepIZnH[RrzPp2suTF9O] <= 'z')
            XcfepIZnH[RrzPp2suTF9O] = XcfepIZnH[RrzPp2suTF9O] - 'a' + 'A';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        RrzPp2suTF9O++;
    }
    TLufFOc9t[jqZtkrOB] = XcfepIZnH[0];
    for (int RrzPp2suTF9O = 1;
    RrzPp2suTF9O <= (1671 - 672); RrzPp2suTF9O++) {
        if (XcfepIZnH[RrzPp2suTF9O] == XcfepIZnH[RrzPp2suTF9O -1])
            vLIX3HDBoFw[jqZtkrOB]++;
        else {
            jqZtkrOB++;
            TLufFOc9t[jqZtkrOB] = XcfepIZnH[RrzPp2suTF9O];
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
        if (XcfepIZnH[RrzPp2suTF9O] == '\0')
            break;
    }
    {
        int RrzPp2suTF9O = 0;
        while (RrzPp2suTF9O <= jqZtkrOB - 1) {
            printf ("(%c,%d)", TLufFOc9t[RrzPp2suTF9O], vLIX3HDBoFw[RrzPp2suTF9O]);
            RrzPp2suTF9O++;
        };
    }
    printf ("\n");
}

