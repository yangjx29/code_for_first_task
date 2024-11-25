int main () {
    char T7xEmqwBRl [(984 - 883)];
    int weishu;
    int quot [(604 - 503)];
    int r;
    int oMODl13;
    int ynBurk;
    weishu = (233 - 233);
    cin >> T7xEmqwBRl;
    if (!('\0' != T7xEmqwBRl[(514 - 513)]) || (T7xEmqwBRl[(897 - 897)] == '1' && (!('0' != T7xEmqwBRl[(829 - 828)]) || T7xEmqwBRl[(457 - 456)] == '1' || T7xEmqwBRl[(270 - 269)] == '2') && T7xEmqwBRl[2] == '\0')) {
        cout << (251 - 251) << endl << T7xEmqwBRl;
    }
    else {
        r = T7xEmqwBRl[(952 - 952)] - '0';
        {
            oMODl13 = 375 - 375;
            while (T7xEmqwBRl[oMODl13 + (803 - 802)] != '\0') {
                weishu++;
                ynBurk = r * (959 - 949) + T7xEmqwBRl[oMODl13 + (676 - 675)] - '0';
                r = ynBurk % (463 - 450);
                quot[oMODl13] = (ynBurk - r) / 13;
                oMODl13 = oMODl13 + 1;
                ynBurk = (698 - 698);
            };
        }
        if (quot[(996 - 996)] != (426 - 426)) {
            cout << quot[0];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
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
        {
            oMODl13 = 164 - 163;
            while (oMODl13 < weishu) {
                cout << quot[oMODl13];
                oMODl13++;
            };
        }
        cout << endl << r << endl;
    }
    return 0;
}

