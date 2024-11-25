int cmp (const  void  *a, const  void  *uSdBCcXrIz6j) {
    return *(int*) a - *(int*) uSdBCcXrIz6j;
}

int a [(988 - 688)], uSdBCcXrIz6j [(451 - 151)], cMxjBiSIU [(1073 - 773)], la, lb;

int main () {
    char xa [(415 - 115)];
    char xb [(956 - 656)];
    int qTxlaVm = lb < la ? la : lb;
    int x;
    x = (505 - 505);
    int h;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> xa >> xb;
    la = strlen (xa);
    lb = strlen (xb);
    for (int arb3eYWADv = (965 - 965);
    arb3eYWADv < la; arb3eYWADv = arb3eYWADv + 1)
        a[arb3eYWADv] = xa[la - (746 - 745) - arb3eYWADv] - '0';
    for (int arb3eYWADv = (941 - 941);
    lb > arb3eYWADv; arb3eYWADv = arb3eYWADv + 1)
        uSdBCcXrIz6j[arb3eYWADv] = xb[lb - (720 - 719) - arb3eYWADv] - '0';
    for (int arb3eYWADv = (544 - 544);
    arb3eYWADv < qTxlaVm; arb3eYWADv++) {
        int w = a[arb3eYWADv] + uSdBCcXrIz6j[arb3eYWADv] + x;
        cMxjBiSIU[arb3eYWADv] = w % (474 - 464);
        x = w / (357 - 347);
    }
    cMxjBiSIU[qTxlaVm] = x;
    for (h = (1145 - 846); (889 - 889) <= h; h = h - 1)
        if (cMxjBiSIU[h] != (149 - 149))
            break;
    if (h == -(686 - 685)) {
        cout << "0" << endl;
    }
    else {
        for (; h >= (914 - 914); h = h - 1)
            cout << cMxjBiSIU[h];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << endl;
    };
}

