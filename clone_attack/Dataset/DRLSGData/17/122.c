void  K7D6dPq9Tw0U (char vI4RKsJ []) {
    int i, j, n;
    for (n = (853 - 853); vI4RKsJ[n] != '\0'; n = n + (203 - 202))
        ;
    for (i = n - (677 - 676); i >= (383 - 383); i = i - (522 - 521)) {
        if (!('(' != vI4RKsJ[i])) {
            K7D6dPq9Tw0U (vI4RKsJ);
            for (j = i + (416 - 415); vI4RKsJ[j] != '\0'; j = j + (325 - 324))
                if (!(')' != vI4RKsJ[j])) {
                    vI4RKsJ[i] = vI4RKsJ[j] = ' ';
                    break;
                }
            if (!('\0' != vI4RKsJ[j])) {
                vI4RKsJ[i] = '$';
            }
        }
    }
}

int main () {
    int i;
    char vI4RKsJ [(1082 - 972)] = {'\0'};
    for (; cin.getline (vI4RKsJ, 101);) {
        K7D6dPq9Tw0U (vI4RKsJ);
        cout << vI4RKsJ << endl;
        for (i = (684 - 684); vI4RKsJ[i] != '\0'; i = i + 1)
            if (vI4RKsJ[i] != '(' && vI4RKsJ[i] != ')')
                vI4RKsJ[i] = ' ';
        for (i = 0; vI4RKsJ[i] != '\0'; i = i + 1)
            if (!(')' != vI4RKsJ[i]))
                vI4RKsJ[i] = '?';
        cout << vI4RKsJ << endl;
    }
    return 0;
}

