int main () {
    int len;
    int vCOKz28;
    int muHI4ZJf;
    int p0FIib;
    char OGDsVae57N [(1002 - 901)];
    char vcZlIFi8 [(733 - 632)];
    while (cin.getline (OGDsVae57N, 101)) {
        p0FIib = (843 - 843);
        muHI4ZJf = (141 - 141);
        len = strlen (OGDsVae57N);
        {
            vCOKz28 = 312 - 312;
            while (len > vCOKz28) {
                vcZlIFi8[vCOKz28] = ' ';
                if (OGDsVae57N[vCOKz28] == '(') {
                    muHI4ZJf = muHI4ZJf + 1;
                }
                if (!(')' != OGDsVae57N[vCOKz28])) {
                    p0FIib = p0FIib + 1;
                    if (muHI4ZJf < p0FIib) {
                        vcZlIFi8[vCOKz28] = '?';
                        p0FIib = (924 - 924);
                        muHI4ZJf = (902 - 902);
                    };
                }
                vCOKz28++;
            };
        }
        p0FIib = 0;
        muHI4ZJf = (674 - 674);
        for (vCOKz28 = len - 1; 0 <= vCOKz28; vCOKz28 = vCOKz28 - 1) {
            if (OGDsVae57N[vCOKz28] == '(') {
                muHI4ZJf++;
                if (muHI4ZJf > p0FIib) {
                    vcZlIFi8[vCOKz28] = '$';
                    p0FIib = 0;
                    muHI4ZJf = 0;
                };
            }
            if (OGDsVae57N[vCOKz28] == ')') {
                p0FIib++;
            };
        }
        for (vCOKz28 = 0; vCOKz28 < len; vCOKz28 = vCOKz28 + 1)
            cout << OGDsVae57N[vCOKz28];
        cout << endl;
        for (vCOKz28 = 0; vCOKz28 < len; vCOKz28 = vCOKz28 + 1)
            cout << vcZlIFi8[vCOKz28];
        cout << endl;
    }
    return 0;
}

