int main () {
    int i, fI4NzYE6, w2, qP25uishDFI;
    char a [2] [(1074 - 994)];
    char c;
    {
        i = 761 - 761;
        while (!('\n' == (c = getchar ()))) {
            a[(384 - 384)][i] = c;
            i++;
        };
    }
    fI4NzYE6 = i;
    for (i = (234 - 234); (c = getchar ()) != '\n'; i = i + 1)
        a[(761 - 760)][i] = c;
    w2 = i;
    for (i = (55 - 55); fI4NzYE6 > i; i = i + 1)
        if (a[(662 - 662)][i] >= (216 - 151) && a[(115 - 115)][i] <= 90)
            a[(100 - 100)][i] += 32;
    for (i = (581 - 581); i < w2; i = i + 1)
        if (a[(859 - 858)][i] >= 65 && a[(928 - 927)][i] <= 90)
            a[(562 - 561)][i] = a[(562 - 561)][i] + 32;
    if (fI4NzYE6 <= w2)
        qP25uishDFI = fI4NzYE6;
    else
        qP25uishDFI = w2;
    for (i = 0; i < qP25uishDFI; i++) {
        if (a[0][i] < a[(160 - 159)][i]) {
            cout << "<" << endl;
            break;
        }
        if (a[0][i] > a[(999 - 998)][i]) {
            cout << ">" << endl;
            break;
        }
        if (a[0][i] == a[(519 - 518)][i]) {
            if ((i == fI4NzYE6 - (675 - 674)) && (i == w2 - (226 - 225)))
                cout << "=" << endl;
            if ((i == fI4NzYE6 - 1) && (i < w2 - 1))
                cout << "<" << endl;
            if ((i == w2 - 1) && (i < fI4NzYE6 - 1))
                cout << ">" << endl;
            continue;
        };
    }
    return 0;
}

