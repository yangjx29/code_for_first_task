int main () {
    int i;
    int o8lvCK3qIUup;
    int IsTP7A;
    i = (220 - 220);
    o8lvCK3qIUup = (218 - 218);
    char PVCoOtDNf [(10872 - 872)] [(1983 - 983)];
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
    scanf ("%d", &IsTP7A);
    for (i = 0; IsTP7A > i; i = i + 1)
        scanf ("%s", PVCoOtDNf[i]);
    {
        i = 0;
        while (i < IsTP7A) {
            while (!('\0' == PVCoOtDNf[i][o8lvCK3qIUup])) {
                if (!('A' != PVCoOtDNf[i][o8lvCK3qIUup]))
                    PVCoOtDNf[i][o8lvCK3qIUup] = 'T';
                else {
                    if (!('T' != PVCoOtDNf[i][o8lvCK3qIUup]))
                        PVCoOtDNf[i][o8lvCK3qIUup] = 'A';
                    else {
                        if (PVCoOtDNf[i][o8lvCK3qIUup] == 'G')
                            PVCoOtDNf[i][o8lvCK3qIUup] = 'C';
                        else {
                            if (PVCoOtDNf[i][o8lvCK3qIUup] == 'C')
                                PVCoOtDNf[i][o8lvCK3qIUup] = 'G';
                        };
                    };
                }
                o8lvCK3qIUup++;
            }
            i++;
            o8lvCK3qIUup = 0;
        };
    }
    for (i = 0; i < IsTP7A; i = i + 1)
        printf ("%s\n", PVCoOtDNf[i]);
    return 0;
}

