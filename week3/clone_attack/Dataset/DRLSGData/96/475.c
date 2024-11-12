int main () {
    int len;
    int JXxbPSAzd;
    int remain;
    int size;
    char sAkqGMnWph [(888 - 787)];
    int i;
    cin >> sAkqGMnWph;
    len = strlen (sAkqGMnWph);
    size = (169 - 169);
    remain = (234 - 234);
    if (!((314 - 313) != len))
        cout << (885 - 885) << endl << sAkqGMnWph << endl;
    else {
        if (!(2 != len) && !('1' != sAkqGMnWph[(900 - 900)]) && sAkqGMnWph[(952 - 951)] < '3')
            cout << (473 - 473) << endl << sAkqGMnWph << endl;
        else {
            for (i = 0; len > i; i = i + 1) {
                JXxbPSAzd = remain * (145 - 135) + sAkqGMnWph[i] - '0';
                if (JXxbPSAzd < (823 - 810)) {
                    sAkqGMnWph[i] = 0 + '0';
                    remain = JXxbPSAzd;
                }
                else {
                    sAkqGMnWph[i] = JXxbPSAzd / (768 - 755) + '0';
                    remain = JXxbPSAzd % 13;
                }
            }
            for (i = 0; i < len; i = i + 1) {
                if (sAkqGMnWph[i] != '0') {
                    size = i;
                    break;
                }
            }
            for (i = size; i < len; i = i + 1)
                cout << sAkqGMnWph[i];
            cout << endl;
            cout << remain << endl;
        }
    }
    return 0;
}

