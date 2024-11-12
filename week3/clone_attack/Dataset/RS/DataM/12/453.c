int main () {
    int i;
    int rhcVtEn;
    int n;
    int k;
    int OVckpEzvmis [(776 - 760)] = {(515 - 515)};
    int num;
    int m;
    i = (651 - 651);
    rhcVtEn = (617 - 617);
    n = (937 - 937);
    k = 0;
    do {
        cin >> OVckpEzvmis[0];
        if (OVckpEzvmis[0] == -1)
            break;
        for (i = 1; i < 16; i++) {
            cin >> OVckpEzvmis[i];
            if (OVckpEzvmis[i] == 0)
                break;
        }
        n = 0;
        for (k = 0; k < i; k = k + 1) {
            rhcVtEn = 0;
            while (rhcVtEn < i) {
                if (OVckpEzvmis[k] == 2 * OVckpEzvmis[rhcVtEn])
                    n = n + 1;
                rhcVtEn = rhcVtEn + 1;
            };
        }
        cout << n << endl;
    }
    while (1);
    return 0;
}

