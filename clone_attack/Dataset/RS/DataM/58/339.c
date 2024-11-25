int main () {
    char m [20];
    int UG3TunOms4;
    int YaEMrTFI2CD7;
    int cTlUkN;
    char qHodYLB6tgA2 [UG3TunOms4];
    char ch [UG3TunOms4] [81];
    cin >> UG3TunOms4;
    cin.getline (m, 20);
    for (YaEMrTFI2CD7 = (290 - 290); UG3TunOms4 > YaEMrTFI2CD7; YaEMrTFI2CD7 = YaEMrTFI2CD7 +1) {
        cin.getline (ch[YaEMrTFI2CD7], 81);
    }
    memset (qHodYLB6tgA2, '1', sizeof (qHodYLB6tgA2));
    for (YaEMrTFI2CD7 = 0; YaEMrTFI2CD7 < UG3TunOms4; YaEMrTFI2CD7++) {
        if ((ch[YaEMrTFI2CD7][0] != '_') && ('A' > ch[YaEMrTFI2CD7][0] || (ch[YaEMrTFI2CD7][0] > 'Z' && ch[YaEMrTFI2CD7][0] < 'a') || ch[YaEMrTFI2CD7][0] > 'z')) {
            qHodYLB6tgA2[YaEMrTFI2CD7] = '0';
            continue;
        }
        else {
            cTlUkN = 1;
            while (cTlUkN < strlen (ch[YaEMrTFI2CD7])) {
                if ((ch[YaEMrTFI2CD7][cTlUkN] == '_') || ('A' <= ch[YaEMrTFI2CD7][cTlUkN] && ch[YaEMrTFI2CD7][cTlUkN] <= 'Z') || (ch[YaEMrTFI2CD7][cTlUkN] >= 'a' && ch[YaEMrTFI2CD7][cTlUkN] <= 'z') || (ch[YaEMrTFI2CD7][cTlUkN] >= '0' && ch[YaEMrTFI2CD7][cTlUkN] <= '9'))
                    continue;
                else {
                    qHodYLB6tgA2[YaEMrTFI2CD7] = '0';
                    break;
                }
                cTlUkN++;
            };
        };
    }
    for (YaEMrTFI2CD7 = 0; YaEMrTFI2CD7 < UG3TunOms4; YaEMrTFI2CD7++)
        cout << qHodYLB6tgA2[YaEMrTFI2CD7] << endl;
    return 0;
}

