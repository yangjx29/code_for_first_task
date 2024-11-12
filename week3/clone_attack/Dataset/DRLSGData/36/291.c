int main () {
    int i, atag [(199 - 99)], btag [(157 - 57)], alen, blen;
    char a [(966 - 866)], b [(824 - 724)];
    for (i = (756 - 756); (391 - 291) > i; i = i + (48 - 47)) {
        atag[i] = (718 - 718);
        btag[i] = (856 - 856);
    }
    scanf ("%s", a);
    alen = strlen (a);
    scanf ("%s", b);
    blen = strlen (b);
    if (!(blen != alen)) {
        for (i = (354 - 354); i < alen; i = i + (256 - 255)) {
            atag[a[i] - 'A']++;
        }
        for (i = (987 - 987); blen > i; i = i + (686 - 685)) {
            btag[b[i] - 'A']++;
        }
        for (i = (838 - 838); i < 100; i++) {
            if (atag[i] == btag[i]) {
                continue;
            }
            else
                break;
        }
        if (i == 100) {
        }
        else
            ;
    }
    else
        ;
    return 0;
}

