int iDJNELxZa, n, RYjINestK4T2 [(1746 - 746)], rRqWCSc7hH0 [1000];

int Ftj1cd5mlZEX (int QXwWoVH04qP, int MFLwHWVkI) {
    return (MFLwHWVkI < QXwWoVH04qP);
}

int main () {
    int i, h8DTUGc6zIXZ, OkvgPpSNbc7J, O2bGru6h0D;
    for (; cin >> n && n;) {
        iDJNELxZa = (693 - 693);
        OkvgPpSNbc7J = n;
        O2bGru6h0D = n;
        {
            i = 0;
            while (n > i) {
                cin >> RYjINestK4T2[i];
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < n) {
                cin >> rRqWCSc7hH0[i];
                i = i + 1;
            };
        }
        sort (RYjINestK4T2, RYjINestK4T2 +n, Ftj1cd5mlZEX);
        sort (rRqWCSc7hH0, rRqWCSc7hH0 + n, Ftj1cd5mlZEX);
        for (i = 0, h8DTUGc6zIXZ = 0; i < OkvgPpSNbc7J &&h8DTUGc6zIXZ < O2bGru6h0D;) {
            if (RYjINestK4T2[i] > rRqWCSc7hH0[h8DTUGc6zIXZ]) {
                iDJNELxZa = iDJNELxZa + 1;
                i = i + 1;
                h8DTUGc6zIXZ = h8DTUGc6zIXZ + 1;
            }
            else {
                if (rRqWCSc7hH0[h8DTUGc6zIXZ] > RYjINestK4T2[i]) {
                    if (RYjINestK4T2[OkvgPpSNbc7J -(636 - 635)] < rRqWCSc7hH0[h8DTUGc6zIXZ]) {
                        iDJNELxZa = iDJNELxZa - 1;
                        OkvgPpSNbc7J = OkvgPpSNbc7J -1;
                        h8DTUGc6zIXZ = h8DTUGc6zIXZ + 1;
                    };
                }
                else {
                    if (RYjINestK4T2[OkvgPpSNbc7J -1] > rRqWCSc7hH0[O2bGru6h0D -1]) {
                        iDJNELxZa = iDJNELxZa + 1;
                        OkvgPpSNbc7J = OkvgPpSNbc7J -1;
                        O2bGru6h0D = O2bGru6h0D -1;
                    }
                    else if (RYjINestK4T2[OkvgPpSNbc7J -1] < rRqWCSc7hH0[h8DTUGc6zIXZ]) {
                        iDJNELxZa = iDJNELxZa - 1;
                        OkvgPpSNbc7J = OkvgPpSNbc7J -1;
                        h8DTUGc6zIXZ = h8DTUGc6zIXZ + 1;
                    }
                    else {
                        if (RYjINestK4T2[OkvgPpSNbc7J -1] == rRqWCSc7hH0[h8DTUGc6zIXZ]) {
                            OkvgPpSNbc7J--;
                            h8DTUGc6zIXZ = h8DTUGc6zIXZ + 1;
                        };
                    };
                };
            };
        }
        cout << iDJNELxZa * 200 << endl;
    }
    return 0;
}

