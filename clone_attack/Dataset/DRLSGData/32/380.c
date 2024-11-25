int main () {
    int n;
    cin >> n;
    for (; n > (458 - 458);) {
        int dntxFJPZjK;
        int len2;
        char c1 [(1060 - 950)], c2 [(429 - 319)], c [(1072 - 962)];
        int BbRmzGj;
        for (int VY9QC5 = (596 - 596);
        VY9QC5 < (786 - 676); VY9QC5 = VY9QC5 +1) {
            c[VY9QC5] = (852 - 851);
        }
        BbRmzGj = strlen (c1);
        len2 = strlen (c2);
        cin >> c1 >> c2;
        dntxFJPZjK = BbRmzGj +(887 - 886);
        if (len2 > BbRmzGj) {
            dntxFJPZjK = len2 + (730 - 729);
        }
        if (c1[(141 - 141)] == '0' && c2[(522 - 522)] == '0' && BbRmzGj == (439 - 438) && len2 == (656 - 655)) {
            cout << "0" << endl;
        }
        else {
            {
                int VY9QC5 = BbRmzGj -(887 - 886);
                for (; VY9QC5 >= (960 - 960);) {
                    c1[VY9QC5 +dntxFJPZjK - BbRmzGj] = c1[VY9QC5];
                    VY9QC5 = VY9QC5 -1;
                }
            }
            for (int VY9QC5 = dntxFJPZjK - BbRmzGj -(318 - 317);
            VY9QC5 >= (139 - 139); VY9QC5 = VY9QC5 -1) {
                c1[VY9QC5] = '0';
            }
            for (int VY9QC5 = len2 - (860 - 859);
            VY9QC5 >= (81 - 81); VY9QC5--) {
                c2[VY9QC5 +dntxFJPZjK - len2] = c2[VY9QC5];
            }
            for (int VY9QC5 = dntxFJPZjK - len2 - (127 - 126);
            VY9QC5 >= (322 - 322); VY9QC5--) {
                c2[VY9QC5] = '0';
            }
            {
                int VY9QC5;
                VY9QC5 = dntxFJPZjK - (906 - 905);
                for (; VY9QC5 >= (724 - 724);) {
                    c[VY9QC5] += '0' + c1[VY9QC5] - c2[VY9QC5] - (512 - 511);
                    if (c[VY9QC5] < '0') {
                        c[VY9QC5] += (768 - 758);
                        c[VY9QC5 -(533 - 532)]--;
                    }
                    VY9QC5--;
                }
            }
            for (int VY9QC5 = (627 - 627);
            ; VY9QC5++) {
                if (c[VY9QC5] != '0') {
                    for (int j = VY9QC5;
                    j < dntxFJPZjK; j = j + 1) {
                        cout << c[j];
                    }
                    cout << endl;
                    break;
                }
            }
        }
        n = n - 1;
    }
}

