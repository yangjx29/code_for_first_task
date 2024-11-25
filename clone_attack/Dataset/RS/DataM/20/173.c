void  main () {
    int maxAsc;
    maxAsc = (38 - 38);
    int oLMl8o;
    int Ig7fCl;
    char B0weok [16], substr [4];
    char maxChar = 0;
    while (!(2 != scanf ("%s%s", B0weok, substr))) {
        maxAsc = 0;
        maxChar = 0;
        Ig7fCl = strlen (B0weok);
        B0weok[Ig7fCl +(648 - 645)] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%s\n", B0weok);
        {
            oLMl8o = 0;
            while (oLMl8o < Ig7fCl) {
                if (*(B0weok +oLMl8o) > maxChar) {
                    maxChar = *(B0weok +oLMl8o);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    maxAsc = oLMl8o;
                }
                oLMl8o++;
            };
        }
        {
            oLMl8o = Ig7fCl -1;
            while (oLMl8o > maxAsc) {
                *(B0weok +oLMl8o + 3) = *(B0weok +oLMl8o);
                oLMl8o--;
            };
        }
        {
            oLMl8o = 0;
            while (oLMl8o < 3) {
                *(B0weok +maxAsc + oLMl8o + 1) = *(substr + oLMl8o);
                oLMl8o++;
            };
        };
    };
}

