int main () {
    int Sqbs0Kn;
    int O75MntmxHbi;
    int PbIXv2;
    int nUNwTobl;
    char vinkWuf [(818 - 716)] [(681 - 579)] = {(140 - 140)};
    int Y4X18nS7;
    int w9NA8j2ElCk1;
    Y4X18nS7 = 0;
    cin >> nUNwTobl;
    {
        PbIXv2 = (829 - 828);
        while (PbIXv2 <= nUNwTobl) {
            O75MntmxHbi = (553 - 552);
            while (nUNwTobl >= O75MntmxHbi) {
                cin >> vinkWuf[PbIXv2][O75MntmxHbi];
                O75MntmxHbi = O75MntmxHbi +(574 - 573);
            }
            PbIXv2 = PbIXv2 +(858 - 857);
        }
    }
    cin >> w9NA8j2ElCk1;
    for (PbIXv2 = (698 - 697); PbIXv2 < w9NA8j2ElCk1; PbIXv2 = PbIXv2 +(843 - 842)) {
        for (O75MntmxHbi = (533 - 532); nUNwTobl >= O75MntmxHbi; O75MntmxHbi = O75MntmxHbi +(811 - 810)) {
            Sqbs0Kn = (273 - 272);
            while (nUNwTobl >= Sqbs0Kn) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (!('@' != vinkWuf[O75MntmxHbi][Sqbs0Kn])) {
                    if (!('.' != vinkWuf[O75MntmxHbi -(334 - 333)][Sqbs0Kn])) {
                        vinkWuf[O75MntmxHbi -1][Sqbs0Kn] = 'a';
                    }
                    if (!('.' != vinkWuf[O75MntmxHbi +1][Sqbs0Kn])) {
                        vinkWuf[O75MntmxHbi +1][Sqbs0Kn] = 'a';
                    }
                    if (vinkWuf[O75MntmxHbi][Sqbs0Kn +1] == '.') {
                        vinkWuf[O75MntmxHbi][Sqbs0Kn +1] = 'a';
                    }
                    if (vinkWuf[O75MntmxHbi][Sqbs0Kn -1] == '.') {
                        vinkWuf[O75MntmxHbi][Sqbs0Kn -1] = 'a';
                    }
                }
                Sqbs0Kn++;
            }
        }
        {
            O75MntmxHbi = 1;
            while (O75MntmxHbi <= nUNwTobl) {
                for (Sqbs0Kn = 1; Sqbs0Kn <= nUNwTobl; Sqbs0Kn++) {
                    if (vinkWuf[O75MntmxHbi][Sqbs0Kn] == 'a') {
                        vinkWuf[O75MntmxHbi][Sqbs0Kn] = '@';
                    }
                }
                O75MntmxHbi++;
            }
        }
    }
    {
        PbIXv2 = 1;
        while (PbIXv2 <= nUNwTobl) {
            {
                O75MntmxHbi = 1;
                while (O75MntmxHbi <= nUNwTobl) {
                    if (vinkWuf[PbIXv2][O75MntmxHbi] == '@') {
                        Y4X18nS7 = Y4X18nS7 +1;
                    }
                    O75MntmxHbi++;
                }
            }
            PbIXv2 = PbIXv2 +1;
        }
    }
    cout << Y4X18nS7;
    return 0;
}

