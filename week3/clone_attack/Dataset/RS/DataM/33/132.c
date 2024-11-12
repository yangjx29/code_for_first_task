int main () {
    char WDoPZR2W1Y [1000] [256] = {'\0'};
    int n;
    int len;
    int E1e0KuhIyG;
    int i;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s", WDoPZR2W1Y[i]);
        len = strlen (WDoPZR2W1Y[i]);
        for (E1e0KuhIyG = 0; len > E1e0KuhIyG; E1e0KuhIyG = E1e0KuhIyG +1) {
            if (WDoPZR2W1Y[i][E1e0KuhIyG] == 'A')
                WDoPZR2W1Y[i][E1e0KuhIyG] = 'T';
            else {
                if (WDoPZR2W1Y[i][E1e0KuhIyG] == 'C')
                    WDoPZR2W1Y[i][E1e0KuhIyG] = 'G';
                else {
                    if (WDoPZR2W1Y[i][E1e0KuhIyG] == 'G')
                        WDoPZR2W1Y[i][E1e0KuhIyG] = 'C';
                    else {
                        if (WDoPZR2W1Y[i][E1e0KuhIyG] == 'T')
                            WDoPZR2W1Y[i][E1e0KuhIyG] = 'A';
                    };
                };
            };
        }
        printf ("%s\n", WDoPZR2W1Y[i]);
    }
    return 0;
}

