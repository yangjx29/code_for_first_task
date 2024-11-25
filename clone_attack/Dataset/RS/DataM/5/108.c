int main () {
    double  OW9TDXYJS;
    double  lENh5Ppu;
    char ltcqzYLr [(595 - 75)] = {'\0'};
    char mx2rgYv6 [520] = {'\0'};
    int smR03DTcthUn;
    int RL8M4ck;
    int f3DUb2;
    smR03DTcthUn = 1;
    scanf ("%lf %s %s", &OW9TDXYJS, ltcqzYLr, mx2rgYv6);
    if (!(strlen (mx2rgYv6) == strlen (ltcqzYLr))) {
        printf ("error");
    }
    else {
        {
            RL8M4ck = 0;
            f3DUb2 = 0;
            while (strlen (ltcqzYLr) > RL8M4ck) {
                if ((!('A' == ltcqzYLr[RL8M4ck]) && ltcqzYLr[RL8M4ck] != 'T' && !('G' == ltcqzYLr[RL8M4ck]) && !('C' == ltcqzYLr[RL8M4ck])) || (mx2rgYv6[RL8M4ck] != 'A' && mx2rgYv6[RL8M4ck] != 'T' && mx2rgYv6[RL8M4ck] != 'G' && mx2rgYv6[RL8M4ck] != 'C')) {
                    smR03DTcthUn = 0;
                    break;
                }
                else {
                    if (ltcqzYLr[RL8M4ck] == mx2rgYv6[RL8M4ck]) {
                        f3DUb2 = f3DUb2 + 1;
                    };
                }
                RL8M4ck = RL8M4ck +1;
            };
        }
        lENh5Ppu = 1.0 * f3DUb2 / (strlen (ltcqzYLr));
        if (smR03DTcthUn == 0) {
            printf ("error");
        }
        else {
            if (lENh5Ppu > OW9TDXYJS) {
                printf ("yes");
            }
            else {
                printf ("no");
            };
        };
    }
    return 0;
}

