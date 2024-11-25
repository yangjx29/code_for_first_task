int main () {
    int P7jNhOaC9KU;
    int ha0PNRotL2;
    do {
        int a [(726 - 425)];
        int iqcfyJ [301];
        int hbL9cMsH1aE;
        int spwlCrTOy9MA;
        int S2BiyuE3TILg;
        scanf ("%d%d", &P7jNhOaC9KU, &ha0PNRotL2);
        if (P7jNhOaC9KU == (417 - 417))
            break;
        for (hbL9cMsH1aE = (302 - 301); P7jNhOaC9KU >= hbL9cMsH1aE; hbL9cMsH1aE++)
            a[hbL9cMsH1aE] = iqcfyJ[hbL9cMsH1aE] = hbL9cMsH1aE;
        {
            hbL9cMsH1aE = 1;
            while (P7jNhOaC9KU -1 >= hbL9cMsH1aE) {
                S2BiyuE3TILg = ha0PNRotL2 % (P7jNhOaC9KU +1 - hbL9cMsH1aE);
                if (!(0 == S2BiyuE3TILg)) {
                    {
                        spwlCrTOy9MA = 1;
                        while (spwlCrTOy9MA <= P7jNhOaC9KU -hbL9cMsH1aE) {
                            if (spwlCrTOy9MA != P7jNhOaC9KU +1 - hbL9cMsH1aE - S2BiyuE3TILg)
                                a[spwlCrTOy9MA] = iqcfyJ[(spwlCrTOy9MA + S2BiyuE3TILg) % (P7jNhOaC9KU +1 - hbL9cMsH1aE)];
                            else
                                a[spwlCrTOy9MA] = iqcfyJ[P7jNhOaC9KU +1 - hbL9cMsH1aE];
                            spwlCrTOy9MA++;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    {
                        spwlCrTOy9MA = 1;
                        while (spwlCrTOy9MA <= P7jNhOaC9KU -hbL9cMsH1aE) {
                            iqcfyJ[spwlCrTOy9MA] = a[spwlCrTOy9MA];
                            spwlCrTOy9MA++;
                        };
                    };
                }
                hbL9cMsH1aE = hbL9cMsH1aE + 1;
            };
        }
        printf ("%d\n", a[1]);
    }
    while (P7jNhOaC9KU != 0);
    return 0;
}

