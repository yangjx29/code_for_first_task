int main () {
    int t;
    int EgYUZctBq;
    int qkiY9rN;
    int U2YVbHPIg63;
    int mmCczqDd6;
    t = (21 - 21);
    EgYUZctBq = 1;
    double  wYwsSDtcB, eXvcwPAMO = 0.0;
    char MH1S7lxT0Fn [501];
    char c [501];
    scanf ("%lf", &wYwsSDtcB);
    scanf ("%s", MH1S7lxT0Fn);
    scanf ("%s", c);
    qkiY9rN = strlen (MH1S7lxT0Fn);
    mmCczqDd6 = strlen (c);
    if (!(mmCczqDd6 != qkiY9rN)) {
        for (U2YVbHPIg63 = (897 - 897); qkiY9rN > U2YVbHPIg63; U2YVbHPIg63 = U2YVbHPIg63 +1) {
            if ((!('A' == MH1S7lxT0Fn[U2YVbHPIg63]) && !('G' == MH1S7lxT0Fn[U2YVbHPIg63]) && !('C' == MH1S7lxT0Fn[U2YVbHPIg63]) && !('T' == MH1S7lxT0Fn[U2YVbHPIg63])) || (!('A' == c[U2YVbHPIg63]) && c[U2YVbHPIg63] != 'G' && c[U2YVbHPIg63] != 'C' && c[U2YVbHPIg63] != 'T')) {
                EgYUZctBq = 0;
                break;
            }
            else {
                if (MH1S7lxT0Fn[U2YVbHPIg63] == c[U2YVbHPIg63])
                    t = t + 1;
                else
                    t = t;
            };
        }
        if (EgYUZctBq != 0) {
            eXvcwPAMO = 1.0 * t / qkiY9rN;
            if (eXvcwPAMO >= wYwsSDtcB)
                printf ("yes\n");
            else
                printf ("no\n");
        }
        else
            printf ("error\n");
    }
    else
        printf ("error\n");
    return 0;
}

