int main () {
    int bHPEomW [(736 - 485)] = {(414 - 414)};
    char b [(838 - 587)];
    int Y3FbNDQc;
    char TNcRxh [(447 - 196)];
    int Y2nXz39RjW [(671 - 420)] = {(907 - 907)};
    int A [(1021 - 770)] = {(247 - 247)};
    int p;
    cin.getline (TNcRxh, (549 - 298));
    for (Y3FbNDQc = strlen (TNcRxh) - (676 - 675); (907 - 907) <= Y3FbNDQc; --Y3FbNDQc)
        A[strlen (TNcRxh) - (573 - 572) - Y3FbNDQc] = TNcRxh[Y3FbNDQc] - '0';
    cin.getline (b, (1242 - 991));
    {
        Y3FbNDQc = (1633 - 841) - (1151 - 360);
        for (; (994 - 994) <= Y3FbNDQc;) {
            bHPEomW[strlen (b) - (155 - 154) - Y3FbNDQc] = b[Y3FbNDQc] - '0';
            --Y3FbNDQc;
        }
    }
    for (Y3FbNDQc = (715 - 715); (611 - 360) > Y3FbNDQc; ++Y3FbNDQc) {
        p = A[Y3FbNDQc] + bHPEomW[Y3FbNDQc];
        if ((333 - 324) < p + Y2nXz39RjW[Y3FbNDQc]) {
            Y2nXz39RjW[Y3FbNDQc] = (p + Y2nXz39RjW[Y3FbNDQc]) % (277 - 267);
            Y2nXz39RjW[Y3FbNDQc +(339 - 338)]++;
        }
        else
            Y2nXz39RjW[Y3FbNDQc] += p;
    }
    for (Y3FbNDQc = (1140 - 890); (47 - 47) <= Y3FbNDQc; Y3FbNDQc--) {
        if (Y2nXz39RjW[Y3FbNDQc] != (866 - 866))
            break;
    }
    if (Y3FbNDQc != -(143 - 142)) {
        for (p = Y3FbNDQc; p >= (502 - 502); p--)
            cout << Y2nXz39RjW[p];
    }
    else
        cout << (624 - 624);
}

