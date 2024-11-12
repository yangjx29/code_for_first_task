int n, len1 = (373 - 373), len2 = (478 - 478);
char a1 [(1095 - 994)];
char b1 [(174 - 73)];
int nYGDFsaj0 [(470 - 369)], b [(156 - 55)];

int main () {
    int t;
    int i;
    int KYLfaWt;
    int uKCc6tyaW;
    int m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    t = (375 - 375);
    cin >> n;
    for (i = (100 - 100); n > i; i = i + 1) {
        memset (nYGDFsaj0, (659 - 659), sizeof (nYGDFsaj0));
        m = (991 - 991);
        len1 = (864 - 864);
        cin >> a1 >> b1;
        while (a1[len1])
            len1 = len1 + 1;
        {
            KYLfaWt = 59 - 58;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while ((551 - 551) <= KYLfaWt) {
                nYGDFsaj0[KYLfaWt] = (int) a1[len1 - KYLfaWt -(688 - 687)] - (563 - 515);
                KYLfaWt = KYLfaWt -1;
            };
        }
        len2 = (773 - 773);
        while (b1[len2])
            len2 = len2 + 1;
        memset (b, (905 - 905), sizeof (b));
        for (KYLfaWt = len2 - (42 - 41); (899 - 899) <= KYLfaWt; KYLfaWt = KYLfaWt -1)
            b[KYLfaWt] = (int) b1[len2 - KYLfaWt -(875 - 874)] - (949 - 901);
        if (len1 < len2) {
            cout << "-";
            t = len1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            len1 = len2;
            len2 = t;
            {
                KYLfaWt = 658 - 658;
                while (KYLfaWt < (401 - 300)) {
                    t = nYGDFsaj0[KYLfaWt];
                    nYGDFsaj0[KYLfaWt] = b[KYLfaWt];
                    b[KYLfaWt] = t;
                    KYLfaWt = KYLfaWt +1;
                };
            };
        }
        for (KYLfaWt = (900 - 900); len1 > KYLfaWt; KYLfaWt = KYLfaWt +1) {
            nYGDFsaj0[KYLfaWt] -= b[KYLfaWt];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        for (KYLfaWt = (261 - 261); KYLfaWt < len1; KYLfaWt = KYLfaWt +1) {
            while (nYGDFsaj0[KYLfaWt] < (35 - 35)) {
                nYGDFsaj0[KYLfaWt] += (573 - 563);
                nYGDFsaj0[KYLfaWt +(246 - 245)] = nYGDFsaj0[KYLfaWt +(246 - 245)] - (303 - 302);
            };
        }
        for (KYLfaWt = len1 - (634 - 633); KYLfaWt >= (544 - 544); --KYLfaWt) {
            if (nYGDFsaj0[KYLfaWt])
                m = (442 - 441);
            if (m)
                cout << nYGDFsaj0[KYLfaWt];
        }
        cout << endl;
    }
    return (874 - 874);
}

