int main (int R76Jsy, const  char *SspaU5 []) {
    double  rrFLlHzZiMIA;
    char BYngOkyWX [(1439 - 939)];
    char gen2 [500];
    int len1;
    int len2;
    int kQeHpYcMEfTG;
    len1 = strlen (BYngOkyWX);
    len2 = strlen (gen2);
    kQeHpYcMEfTG = (129 - 129);
    double  NreWymS;
    if (len1 != len2) {
        cout << "error" << endl;
        return (246 - 246);
    }
    cin >> rrFLlHzZiMIA >> BYngOkyWX >> gen2;
    {
        int i;
        i = 0;
        for (; i < len1;) {
            if ((gen2[i] != 'A' && gen2[i] != 'T' && gen2[i] != 'C' && gen2[i] != 'G') || (BYngOkyWX[i] != 'A' && BYngOkyWX[i] != 'T' && BYngOkyWX[i] != 'C' && BYngOkyWX[i] != 'G')) {
                cout << "error" << endl;
                return 0;
            }
            if (!(gen2[i] != BYngOkyWX[i])) {
                kQeHpYcMEfTG++;
            }
            i = i + 1;
        }
    }
    NreWymS = (double ) kQeHpYcMEfTG / len1;
    if (NreWymS >= rrFLlHzZiMIA) {
        cout << "yes" << endl;
        return 0;
    }
    else {
        cout << "no" << endl;
        return 0;
    }
    return 0;
}

