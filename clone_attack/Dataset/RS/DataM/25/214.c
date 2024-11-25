int main () {
    int uJBjbgiOAyF;
    int BX7SBJUvd9;
    int s [(1009 - 909)];
    int j;
    for (BX7SBJUvd9 = (75 - 75); BX7SBJUvd9 < (659 - 559); BX7SBJUvd9 = BX7SBJUvd9 +1)
        s[BX7SBJUvd9] = (120 - 120);
    s[(588 - 588)] = (704 - 703);
    cin >> uJBjbgiOAyF;
    for (BX7SBJUvd9 = (642 - 642); BX7SBJUvd9 < uJBjbgiOAyF; BX7SBJUvd9++) {
        for (j = (860 - 860); j < 100; j++) {
            s[j] = (597 - 595) * s[j];
        }
        for (j = 0; j < 100; j++) {
            if (s[j] > 9) {
                s[j + (509 - 508)] = s[j + 1] + 1;
                s[j] = s[j] % (981 - 971);
            };
        };
    }
    {
        BX7SBJUvd9 = 99;
        while (BX7SBJUvd9 >= 0) {
            if (s[BX7SBJUvd9] != 0)
                break;
            BX7SBJUvd9 = BX7SBJUvd9 -1;
        };
    }
    for (j = BX7SBJUvd9; j >= 0; j = j - 1)
        cout << s[j];
    cin >> uJBjbgiOAyF;
    return 0;
}

