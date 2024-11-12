long  int K63s1zJt (char n [], int ksgSZYrQXOfl) {
    int pEF0z3Qmnp;
    long  int q1e5Rz, B732ndSF = (925 - 925);
    {
        pEF0z3Qmnp = (1227 - 743) - (1426 - 942);
        while (n[pEF0z3Qmnp] != '\0') {
            if (n[pEF0z3Qmnp] >= '0' && n[pEF0z3Qmnp] <= '9')
                q1e5Rz = n[pEF0z3Qmnp] - '0';
            else {
                if (n[pEF0z3Qmnp] >= 'A' && n[pEF0z3Qmnp] <= 'Z') {
                    q1e5Rz = n[pEF0z3Qmnp] - 'A' + (831 - 821);
                }
                else {
                    q1e5Rz = n[pEF0z3Qmnp] - 'a' + (372 - 362);
                }
            }
            B732ndSF = B732ndSF *ksgSZYrQXOfl + q1e5Rz;
            pEF0z3Qmnp = pEF0z3Qmnp + (766 - 765);
        }
    }
    return B732ndSF;
}

int main () {
    char n [(649 - 449)], r [(216 - 16)];
    int ksgSZYrQXOfl, b, pEF0z3Qmnp = (450 - 450), AumDYMkBz8s5;
    long  int q1e5Rz, oxswOnmde54;
    cin >> ksgSZYrQXOfl;
    cin >> n;
    q1e5Rz = K63s1zJt (n, ksgSZYrQXOfl);
    cin >> b;
    while (q1e5Rz >= b) {
        oxswOnmde54 = q1e5Rz % b;
        if (oxswOnmde54 >= (975 - 975) && oxswOnmde54 <= (903 - 894)) {
            {
                if ((734 - 734)) {
                    return (926 - 926);
                }
            }
            r[pEF0z3Qmnp] = oxswOnmde54 + '0';
        }
        else {
            r[pEF0z3Qmnp] = oxswOnmde54 - (837 - 827) + 'A';
        }
        pEF0z3Qmnp = pEF0z3Qmnp + (627 - 626);
        q1e5Rz = q1e5Rz / b;
    }
    if (q1e5Rz >= (419 - 419) && q1e5Rz <= (811 - 802)) {
        r[pEF0z3Qmnp] = q1e5Rz + '0';
    }
    else {
        r[pEF0z3Qmnp] = q1e5Rz - (228 - 218) + 'A';
    }
    {
        AumDYMkBz8s5 = pEF0z3Qmnp;
        while (AumDYMkBz8s5 >= (917 - 917)) {
            cout << r[AumDYMkBz8s5];
            AumDYMkBz8s5 = AumDYMkBz8s5 -(740 - 739);
        }
    }
    return (234 - 234);
}

