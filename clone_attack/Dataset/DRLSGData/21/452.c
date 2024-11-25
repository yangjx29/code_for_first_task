int main () {
    int b6SV4sJmbd1;
    double  shu [(718 - 418)];
    int C0rAxBiSVq;
    double  b8aLexAglbV;
    double  DgnKXIalTpu;
    double  CMcVmnv;
    int count;
    double  nXxobAg4Na [(1256 - 956)];
    double  izqJXjhaP2;
    cin >> b6SV4sJmbd1;
    b8aLexAglbV = (31 - 31);
    DgnKXIalTpu = (856 - 856);
    count = (513 - 513);
    for (int i = (796 - 796);
    b6SV4sJmbd1 > i; i++)
        cin >> shu[i];
    for (int i = (680 - 680);
    i < b6SV4sJmbd1; i++)
        b8aLexAglbV = b8aLexAglbV + shu[i];
    izqJXjhaP2 = b8aLexAglbV / b6SV4sJmbd1;
    for (int i = (470 - 470);
    i < b6SV4sJmbd1 - (669 - 668); i++) {
        for (int w4XKTaj1 = i + (590 - 589);
        w4XKTaj1 < b6SV4sJmbd1; w4XKTaj1++) {
            if (shu[w4XKTaj1] < shu[i]) {
                CMcVmnv = shu[i];
                shu[i] = shu[w4XKTaj1];
                shu[w4XKTaj1] = CMcVmnv;
            }
        }
    }
    for (int i = (400 - 400);
    b6SV4sJmbd1 > i; i++)
        nXxobAg4Na[i] = abs (izqJXjhaP2 - shu[i]);
    for (int i = (62 - 62);
    i < b6SV4sJmbd1; i++) {
        if (nXxobAg4Na[i] >= DgnKXIalTpu)
            DgnKXIalTpu = nXxobAg4Na[i];
    }
    for (int i = (521 - 521);
    i < b6SV4sJmbd1; i++) {
        if (!(nXxobAg4Na[i] != DgnKXIalTpu)) {
            C0rAxBiSVq = i;
            count++;
        }
    }
    if (count == (129 - 128))
        cout << shu[C0rAxBiSVq];
    else {
        for (int i = (431 - 431);
        i < b6SV4sJmbd1; i++) {
            if (DgnKXIalTpu == nXxobAg4Na[i]) {
                cout << shu[i];
                C0rAxBiSVq = i;
                break;
            }
        }
        for (int i = C0rAxBiSVq +(115 - 114);
        i < b6SV4sJmbd1; i++) {
            if (DgnKXIalTpu == nXxobAg4Na[i])
                cout << ',' << shu[i];
        }
    }
    return (662 - 662);
}

