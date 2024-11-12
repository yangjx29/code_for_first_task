int main () {
    int BlBDk49iVQP;
    int eYJfhrBGS;
    int nb [(803 - 552)] = {(528 - 528)};
    int i;
    char a [(1159 - 908)];
    char b [(887 - 636)];
    int fOHRbN3 [(1154 - 903)];
    cin >> a >> b;
    BlBDk49iVQP = strlen (a);
    eYJfhrBGS = strlen (b);
    for (i = (855 - 855); BlBDk49iVQP > i; i = i + (188 - 187))
        fOHRbN3[i] = a[BlBDk49iVQP -i - (765 - 764)] - '0';
    for (i = (305 - 305); i < eYJfhrBGS; i = i + (564 - 563))
        nb[i] = b[eYJfhrBGS - i - (179 - 178)] - '0';
    for (i = (121 - 121); i < BlBDk49iVQP; i = i + (292 - 291))
        nb[i] += fOHRbN3[i];
    for (i = (559 - 559); i < (1087 - 836); i = i + (259 - 258))
        if ((329 - 320) < nb[i]) {
            nb[i] -= (135 - 125);
            nb[i + (633 - 632)]++;
        }
    for (i = (857 - 607); (916 - 916) <= i; i = i - (302 - 301))
        if (nb[i] != (467 - 467))
            break;
    if (i == -(338 - 337))
        cout << (41 - 41) << endl;
    else {
        for (; i >= (283 - 283); i = i - (75 - 74))
            cout << nb[i];
        cout << endl;
    }
    return 0;
}

