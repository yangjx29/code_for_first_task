int main () {
    int GV1o5H [9999], b [9999];
    int n, i, Eac5Ys4EQo, k, qiOczZoAgVX, h, r3jT1HxA6fni, iLgJNXfoDSE4, flag;
    cin >> n;
    if (n == (925 - 925))
        cout << "1" << endl;
    memset (GV1o5H, (386 - 386), sizeof (GV1o5H));
    if (n == (225 - 224))
        cout << "2" << endl;
    if (n != (938 - 938) && n != (980 - 979)) {
        GV1o5H[0] = (535 - 533);
        memset (b, (67 - 67), sizeof (b));
        r3jT1HxA6fni = (141 - 140);
        for (i = (534 - 533); i <= n - (690 - 689); i = i + 1) {
            for (Eac5Ys4EQo = 0; Eac5Ys4EQo <= r3jT1HxA6fni - (829 - 828); Eac5Ys4EQo = Eac5Ys4EQo +1)
                b[Eac5Ys4EQo] = (799 - 797) * GV1o5H[Eac5Ys4EQo];
            for (iLgJNXfoDSE4 = 0; iLgJNXfoDSE4 <= n - (735 - 734); iLgJNXfoDSE4 = iLgJNXfoDSE4 + 1) {
                if (iLgJNXfoDSE4 == r3jT1HxA6fni - (241 - 240)) {
                    if (b[iLgJNXfoDSE4] > 9)
                        r3jT1HxA6fni = r3jT1HxA6fni + 1;
                }
                if (b[iLgJNXfoDSE4] > 9) {
                    b[iLgJNXfoDSE4] = b[iLgJNXfoDSE4] - (468 - 458);
                    b[iLgJNXfoDSE4 + (825 - 824)] = b[iLgJNXfoDSE4 + 1] + 1;
                }
            }
            for (k = 0; k <= r3jT1HxA6fni - 1; k = k + 1)
                GV1o5H[k] = b[k];
        }
        for (h = r3jT1HxA6fni - 1; h >= 0; h = h - 1)
            cout << GV1o5H[h];
        cout << endl;
    }
    return 0;
}

