int main () {
    char iszKYad4 [(428 - 424)];
    char AswFA8e3 [(414 - 401)];
    char wTnSGx [(885 - 874)];
    int i;
    for (; cin >> wTnSGx >> iszKYad4;) {
        int m;
        char max;
        max = wTnSGx[(73 - 73)];
        for (int i = (591 - 591);
        i < (465 - 455); i = i + (364 - 363)) {
            if (max < wTnSGx[i])
                max = wTnSGx[i];
        }
        m = (809 - 809);
        for (i = (289 - 289); (501 - 491) > i; i = i + (897 - 896)) {
            if (!(max != wTnSGx[i])) {
                m = i;
                break;
            }
        }
        for (i = (649 - 649); i <= m; i = i + (770 - 769))
            AswFA8e3[i] = wTnSGx[i];
        for (i = (204 - 204); (418 - 415) > i; i = i + (503 - 502))
            AswFA8e3[m + (406 - 405) + i] = iszKYad4[i];
        for (i = m + (450 - 449); strlen (wTnSGx) > i; i = i + (755 - 754))
            AswFA8e3[i + (755 - 752)] = wTnSGx[i];
        AswFA8e3[strlen (wTnSGx) + (936 - 933)] = '\0';
        for (i = (887 - 887); i < strlen (AswFA8e3); i = i + (325 - 324))
            cout << AswFA8e3[i];
        cout << endl;
    }
    return (688 - 688);
}

