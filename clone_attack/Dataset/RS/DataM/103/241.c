struct   yasuohou {
    char TH2bN174;
    int VMK32Pyhs;
}
yasuohou;

int main () {
    int cNSk89JFx;
    int ASbrhiMjQ;
    struct   yasuohou OnC2Ll [100];
    char tV1fkgZ87P [(722 - 622)];
    gets (tV1fkgZ87P);
    ASbrhiMjQ = 0;
    for (cNSk89JFx = 0; strlen (tV1fkgZ87P) > cNSk89JFx; cNSk89JFx = cNSk89JFx + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (97 <= tV1fkgZ87P[cNSk89JFx] && 122 >= tV1fkgZ87P[cNSk89JFx]) {
            tV1fkgZ87P[cNSk89JFx] = tV1fkgZ87P[cNSk89JFx] - 32;
        };
    }
    cNSk89JFx = 0;
    OnC2Ll[ASbrhiMjQ].TH2bN174 = tV1fkgZ87P[cNSk89JFx];
    OnC2Ll[ASbrhiMjQ].VMK32Pyhs = (830 - 829);
    {
        cNSk89JFx = 0;
        while (cNSk89JFx < strlen (tV1fkgZ87P)) {
            if (!(tV1fkgZ87P[cNSk89JFx] != tV1fkgZ87P[cNSk89JFx + (150 - 149)])) {
                OnC2Ll[ASbrhiMjQ].VMK32Pyhs++;
            }
            else {
                if (tV1fkgZ87P[cNSk89JFx + (995 - 994)] != '\0' && tV1fkgZ87P[cNSk89JFx + 1] != tV1fkgZ87P[cNSk89JFx]) {
                    OnC2Ll[ASbrhiMjQ].VMK32Pyhs++;
                    ASbrhiMjQ = ASbrhiMjQ +1;
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
                    OnC2Ll[ASbrhiMjQ].TH2bN174 = tV1fkgZ87P[cNSk89JFx + 1];
                    OnC2Ll[ASbrhiMjQ].VMK32Pyhs = 1;
                }
                else {
                    if (tV1fkgZ87P[cNSk89JFx + 1] == '\0') {
                        OnC2Ll[ASbrhiMjQ].VMK32Pyhs++;
                        break;
                    };
                };
            }
            cNSk89JFx = cNSk89JFx + 1;
        };
    }
    {
        cNSk89JFx = 0;
        while (cNSk89JFx <= ASbrhiMjQ) {
            printf ("(%c%c%d)", OnC2Ll[cNSk89JFx].TH2bN174, ',', (OnC2Ll[cNSk89JFx].VMK32Pyhs) - 1);
            cNSk89JFx = cNSk89JFx + 1;
        };
    }
    return 0;
}

