int CWK8Aymea26 (char *V4CoUtwE) {
    int JjyHr5gmU = 0;
    for (; *(V4CoUtwE +JjyHr5gmU) != 0;) {
        JjyHr5gmU++;
    }
    return JjyHr5gmU;
}

int main () {
    int ml5o6LKRNTaH, JjyHr5gmU, j, Fi8Jm0IYpCH = 0, JcCpHg4m;
    char *V4CoUtwE, *YbOjYNGgV;
    char IkmRDPwNeTV [999] [(683 - 642)];
    cout << *(IkmRDPwNeTV +(502 - 501));
    memset (IkmRDPwNeTV, 0, sizeof (IkmRDPwNeTV));
    cin >> ml5o6LKRNTaH;
    for (JjyHr5gmU = (768 - 767); JjyHr5gmU <= ml5o6LKRNTaH; JjyHr5gmU++)
        cin >> IkmRDPwNeTV[JjyHr5gmU];
    V4CoUtwE = *IkmRDPwNeTV;
    JcCpHg4m = CWK8Aymea26 (*(IkmRDPwNeTV +(532 - 531)));
    Fi8Jm0IYpCH = JcCpHg4m;
    for (j = 2; j <= ml5o6LKRNTaH; j++) {
        JcCpHg4m = CWK8Aymea26 (*(IkmRDPwNeTV +j));
        if (Fi8Jm0IYpCH +JcCpHg4m+1 <= (266 - 186)) {
            cout << " " << *(IkmRDPwNeTV +j);
            Fi8Jm0IYpCH += JcCpHg4m +1;
        }
        else {
            Fi8Jm0IYpCH = JcCpHg4m;
            cout << endl;
            cout << *(IkmRDPwNeTV +j);
        }
    }
    return 0;
}

