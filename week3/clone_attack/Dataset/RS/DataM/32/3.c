int pkSruMCsHc, GZnP6xOmsUSb, PSwd0mzFqprM;

void  SHyEv6h (char KRk8ciEBrqTt [], char IWbU38cGN [], char DPxCHZO []) {
    int T2QFa5IDU1 = (284 - 284), wwi7xOsP9;
    {
        wwi7xOsP9 = pkSruMCsHc - 1;
        while (wwi7xOsP9 >= (290 - 290)) {
            if (0 > KRk8ciEBrqTt[wwi7xOsP9] - IWbU38cGN[wwi7xOsP9] - T2QFa5IDU1) {
                DPxCHZO[wwi7xOsP9] = KRk8ciEBrqTt[wwi7xOsP9] + 10 - IWbU38cGN[wwi7xOsP9] + '0' - T2QFa5IDU1;
                T2QFa5IDU1 = 1;
            }
            else if (0 <= KRk8ciEBrqTt[wwi7xOsP9] - IWbU38cGN[wwi7xOsP9] - T2QFa5IDU1) {
                DPxCHZO[wwi7xOsP9] = KRk8ciEBrqTt[wwi7xOsP9] - IWbU38cGN[wwi7xOsP9] + '0' - T2QFa5IDU1;
                T2QFa5IDU1 = 0;
            }
            wwi7xOsP9--;
        };
    }
    DPxCHZO[pkSruMCsHc] = '\0';
}

void  CoPS7i38z9dc (char IWbU38cGN []) {
    int wwi7xOsP9;
    int jump = pkSruMCsHc - GZnP6xOmsUSb;
    IWbU38cGN[pkSruMCsHc] = '\0';
    for (wwi7xOsP9 = GZnP6xOmsUSb; wwi7xOsP9 >= 0; wwi7xOsP9 = wwi7xOsP9 - 1)
        IWbU38cGN[wwi7xOsP9 + jump] = IWbU38cGN[wwi7xOsP9];
    for (wwi7xOsP9 = 0; jump > wwi7xOsP9; wwi7xOsP9++)
        IWbU38cGN[wwi7xOsP9] = '0';
}

void  main () {
    int wwi7xOsP9, EyHluRc, d1tTEeNn;
    char KRk8ciEBrqTt [ARRAY] [N], IWbU38cGN [ARRAY] [N], DPxCHZO [N];
    scanf ("%d", &d1tTEeNn);
    {
        wwi7xOsP9 = 0;
        while (wwi7xOsP9 < d1tTEeNn) {
            scanf ("%s", KRk8ciEBrqTt[wwi7xOsP9]);
            scanf ("%s", IWbU38cGN[wwi7xOsP9]);
            wwi7xOsP9 = wwi7xOsP9 + 1;
        };
    }
    {
        wwi7xOsP9 = 0;
        while (wwi7xOsP9 < d1tTEeNn) {
            CoPS7i38z9dc (IWbU38cGN [wwi7xOsP9]);
            pkSruMCsHc = strlen (KRk8ciEBrqTt[wwi7xOsP9]);
            GZnP6xOmsUSb = strlen (IWbU38cGN[wwi7xOsP9]);
            SHyEv6h (KRk8ciEBrqTt[wwi7xOsP9], IWbU38cGN[wwi7xOsP9], DPxCHZO);
            for (EyHluRc = 0; EyHluRc < pkSruMCsHc; EyHluRc++)
                if (DPxCHZO[EyHluRc] != '0')
                    break;
            wwi7xOsP9++;
            for (; EyHluRc < pkSruMCsHc; EyHluRc++)
                printf ("%c", DPxCHZO[EyHluRc]);
        };
    };
}

