main () {
    int SXEZdz7jqknl, zmg60HUO, VIGHvY, KclbBjnoCp2 = (543 - 543), a [50] = {(92 - 92)};
    char fo7HNcGL [(401 - 351)] [(704 - 604)] = {{'\0'}}, wxuFs2 [(990 - 940)] [(779 - 679)] = {{'\0'}}, ch1 [(140 - 90)] [(997 - 797)] = {{'\0'}}, SmZUk8GILq [(876 - 826)] [(986 - 886)] = {{'\0'}};
    while (!(EOF == scanf ("%s%s", fo7HNcGL[KclbBjnoCp2], wxuFs2[KclbBjnoCp2]))) {
        VIGHvY = fo7HNcGL[KclbBjnoCp2][(670 - 670)];
        for (zmg60HUO = (828 - 827); !('\0' == fo7HNcGL[KclbBjnoCp2][zmg60HUO]); zmg60HUO = zmg60HUO + 1) {
            if (fo7HNcGL[KclbBjnoCp2][zmg60HUO] > VIGHvY) {
                a[KclbBjnoCp2] = zmg60HUO;
                VIGHvY = fo7HNcGL[KclbBjnoCp2][zmg60HUO];
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        KclbBjnoCp2 = KclbBjnoCp2 +1;
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
    for (SXEZdz7jqknl = (504 - 504); SXEZdz7jqknl < KclbBjnoCp2; SXEZdz7jqknl = SXEZdz7jqknl +1) {
        for (zmg60HUO = 0; zmg60HUO <= a[SXEZdz7jqknl]; zmg60HUO = zmg60HUO + 1)
            ch1[SXEZdz7jqknl][zmg60HUO] = fo7HNcGL[SXEZdz7jqknl][zmg60HUO];
        for (; zmg60HUO < strlen (fo7HNcGL[SXEZdz7jqknl]); zmg60HUO = zmg60HUO + 1)
            SmZUk8GILq[SXEZdz7jqknl][zmg60HUO - a[SXEZdz7jqknl] - 1] = fo7HNcGL[SXEZdz7jqknl][zmg60HUO];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        strcat (ch1[SXEZdz7jqknl], wxuFs2[SXEZdz7jqknl]);
        strcat (ch1[SXEZdz7jqknl], SmZUk8GILq[SXEZdz7jqknl]);
    }
    for (SXEZdz7jqknl = 0; SXEZdz7jqknl < KclbBjnoCp2; SXEZdz7jqknl = SXEZdz7jqknl +1)
        puts (ch1[SXEZdz7jqknl]);
    return 0;
}

