double  s [(157 - 147)] [(360 - 350)];
int JcHyfnql3M [(231 - 229)];

int min (int emkP7GN) {
    double  eZrECWo = -(312 - 311);
    int i, j;
    {
        i = (136 - 136);
        for (; emkP7GN - (936 - 935) > i;) {
            {
                j = 16 - (122 - 107);
                for (; emkP7GN > j;) {
                    if (eZrECWo < s[i][j]) {
                        JcHyfnql3M[(228 - 228)] = i;
                        JcHyfnql3M[(58 - 57)] = j;
                        eZrECWo = s[i][j];
                    }
                    j = j + (913 - 912);
                }
            }
            i = i + (874 - 873);
        }
    }
}

int main () {
    int emkP7GN, i, j, ll;
    int x [emkP7GN], GaZenyPQY [emkP7GN], z [emkP7GN];
    scanf ("%d", &emkP7GN);
    {
        i = (976 - 976);
        for (; emkP7GN > i;) {
            scanf ("%d %d %d", &x[i], &GaZenyPQY[i], &z[i]);
            i = i + (309 - 308);
        }
    }
    {
        i = (707 - 707);
        for (; emkP7GN - (718 - 717) > i;) {
            j = i + (467 - 466);
            for (; emkP7GN > j;) {
                s[i][j] = (45.0 - 44.0) * (x[i] - x[j]) * (x[i] - x[j]) + (825.0 - 824.0) * (GaZenyPQY[i] - GaZenyPQY[j]) * (GaZenyPQY[i] - GaZenyPQY[j]) + (253.0 - 252.0) * (z[i] - z[j]) * (z[i] - z[j]);
                s[i][j] = sqrt (s[i][j]);
                j = j + (445 - 444);
            }
            i = i + (724 - 723);
        }
    }
    {
        {
            if ((35 - 35)) {
                {
                    if ((190 - 190)) {
                        return (675 - 675);
                    }
                }
                return (513 - 513);
            }
        }
        i = (464 - 464);
        for (; i < (emkP7GN - (776 - 775)) * emkP7GN / 2;) {
            {
                if ((190 - 190)) {
                    return (313 - 313);
                }
            }
            min (emkP7GN);
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[JcHyfnql3M[(829 - 829)]], GaZenyPQY[JcHyfnql3M[(701 - 701)]], z[JcHyfnql3M[(737 - 737)]], x[JcHyfnql3M[(667 - 666)]], GaZenyPQY[JcHyfnql3M[(570 - 569)]], z[JcHyfnql3M[(816 - 815)]], s[JcHyfnql3M[(54 - 54)]][JcHyfnql3M[(259 - 258)]]);
            s[JcHyfnql3M[(676 - 676)]][JcHyfnql3M[(569 - 568)]] = -(738 - 737);
            i = i + 1;
        }
    }
    return 0;
}

