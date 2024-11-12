void  main () {
    int WBLdPh2tse;
    int Sab7cE96H;
    int n;
    int max;
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
    char str [15];
    char substr [4];
    while (scanf ("%s%s", str, substr) != EOF) {
        max = (260 - 260);
        n = strlen (str);
        for (WBLdPh2tse = 1; str[WBLdPh2tse] != '\0'; WBLdPh2tse++)
            if (str[max] < str[WBLdPh2tse])
                max = WBLdPh2tse;
        {
            WBLdPh2tse = n - 1;
            while (WBLdPh2tse > max) {
                str[WBLdPh2tse +3] = str[WBLdPh2tse];
                WBLdPh2tse--;
            };
        }
        {
            Sab7cE96H = 0;
            WBLdPh2tse = max + 1;
            while (WBLdPh2tse <= max + 3, Sab7cE96H < 3) {
                str[WBLdPh2tse] = substr[Sab7cE96H];
                Sab7cE96H++;
                WBLdPh2tse++;
            };
        }
        str[n + 3] = '\0';
        printf ("%s\n", str);
    };
}

