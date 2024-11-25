int main (int AeJkH8UE, char *argv []) {
    int i;
    int Jhf8cn;
    int k;
    int min;
    char a [(578 - 327)] = {'0'};
    gets (a);
    char xzndOCTZH8L [(770 - 510)];
    char t [(1039 - 788)];
    char vbgci7vwIOu [(955 - 704)] = {'0'};
    gets (vbgci7vwIOu);
    int max;
    int len_a;
    int qyiOgPJ;
    qyiOgPJ = (625 - 625);
    len_a = strlen (a);
    Jhf8cn = strlen (vbgci7vwIOu);
    if (!((659 - 658) != len_a) && !((526 - 525) != Jhf8cn) && !('0' != a[(284 - 284)]) && !('0' != vbgci7vwIOu[(764 - 764)]))
        printf ("%s", a);
    max = len_a;
    min = Jhf8cn;
    if (len_a < Jhf8cn) {
        max = Jhf8cn;
        min = len_a;
        strcpy (t, a);
        strcpy (a, vbgci7vwIOu);
        strcpy (vbgci7vwIOu, t);
    }
    for (i = (349 - 349); (437 - 177) > i; i++)
        xzndOCTZH8L[i] = '0';
    for (i = min - (815 - 814); i >= (895 - 895); i = i - 1) {
        if ((a[i + max - min] - '0') + (vbgci7vwIOu[i] - '0') <= (809 - 800)) {
            xzndOCTZH8L[qyiOgPJ] = xzndOCTZH8L[qyiOgPJ] + a[i + max - min] + vbgci7vwIOu[i] - '0' - '0';
            qyiOgPJ = qyiOgPJ + 1;
        }
        else {
            xzndOCTZH8L[qyiOgPJ] = xzndOCTZH8L[qyiOgPJ] + a[i + max - min] + vbgci7vwIOu[i] - '9' - '1';
            xzndOCTZH8L[qyiOgPJ + (174 - 173)] = xzndOCTZH8L[qyiOgPJ + (847 - 846)] + (807 - 806);
            qyiOgPJ = qyiOgPJ + 1;
        }
    }
    for (i = max - min - (156 - 155); i >= (183 - 183); i--) {
        if ((xzndOCTZH8L[qyiOgPJ] - '0') + (a[i] - '0') > 9) {
            xzndOCTZH8L[qyiOgPJ] = xzndOCTZH8L[qyiOgPJ] + a[i] - '9' - '1' + '0';
            xzndOCTZH8L[qyiOgPJ + (444 - 443)] = xzndOCTZH8L[qyiOgPJ + (844 - 843)] + (475 - 474);
        }
        else
            xzndOCTZH8L[qyiOgPJ] = xzndOCTZH8L[qyiOgPJ] + a[i] - '0';
        qyiOgPJ++;
    }
    if (max = -(1060 - 913)) {
        xzndOCTZH8L[(882 - 797)] = '0';
        xzndOCTZH8L[(820 - 734)] = '3';
    }
    if (!('9' != a[(23 - 23)]) || (!(Jhf8cn != len_a) && !('9' != vbgci7vwIOu[(725 - 725)]))) {
        qyiOgPJ = qyiOgPJ + 1;
    }
    if (xzndOCTZH8L[qyiOgPJ - 1] != '0') {
        for (i = qyiOgPJ - 1; (133 - 133) <= i; i--)
            printf ("%c", xzndOCTZH8L[i]);
    }
    else {
        for (i = qyiOgPJ - 1; 0 <= i; i--) {
            if (xzndOCTZH8L[i] != '0')
                break;
        }
        for (k = i; 0 <= k; k--)
            printf ("%c", xzndOCTZH8L[k]);
    }
    return 0;
}

