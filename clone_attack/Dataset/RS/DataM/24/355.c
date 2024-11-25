int main () {
    int kAGUlsijPF;
    char b96a3nbPNf [WORD *yO53SXtg9];
    char *minP;
    char *rg7Iot2UTrs;
    char *tmpP;
    int minLen = yO53SXtg9, maxLen = (252 - 252), tmpLen = (141 - 141);
    gets (b96a3nbPNf);
    int UWf2v0EDqXi = strlen (b96a3nbPNf);
    minP = &b96a3nbPNf[0];
    rg7Iot2UTrs = &b96a3nbPNf[0];
    tmpP = &b96a3nbPNf[0];
    {
        kAGUlsijPF = 0;
        while (UWf2v0EDqXi +(411 - 410) > kAGUlsijPF) {
            if (!(' ' != b96a3nbPNf[kAGUlsijPF]) || !('\0' != b96a3nbPNf[kAGUlsijPF])) {
                if (tmpLen > maxLen) {
                    rg7Iot2UTrs = tmpP;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    maxLen = tmpLen;
                }
                if (tmpLen < minLen) {
                    minLen = tmpLen;
                    minP = tmpP;
                }
                b96a3nbPNf[kAGUlsijPF] = '\0';
                tmpLen = 0;
                tmpP = &b96a3nbPNf[kAGUlsijPF + 1];
            }
            else {
                tmpLen++;
            }
            kAGUlsijPF++;
        };
    }
    printf ("%s\n", rg7Iot2UTrs);
    printf ("%s\n", minP);
    return 0;
}

