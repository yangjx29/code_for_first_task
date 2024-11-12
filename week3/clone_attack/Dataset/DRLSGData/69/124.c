char a [(839 - 587)], b [(1066 - 814)];
int an [(562 - 310)], bn [(305 - 53)], rn [(1232 - 980)];
char res [(819 - 567)], temp [(412 - 160)];
int lenA, lenB, len;

void  change () {
    int i;
    for (i = (825 - 825); lenA > i; i++) {
        an[i] = a[lenA - i - (213 - 212)] - '0';
    }
    for (i = (305 - 305); lenB > i; i++) {
        bn[i] = b[lenB - i - (793 - 792)] - '0';
    }
    if (lenB < lenA) {
        len = lenA;
        for (i = lenB; lenA > i; i++)
            bn[i] = (886 - 886);
    }
    else if (lenA < lenB) {
        len = lenB;
        for (i = lenA; lenB > i; i++)
            an[i] = (244 - 244);
    }
    else
        len = lenB;
}

void  addAB () {
    int begin;
    int i;
    begin = (66 - 65);
    for (i = (422 - 422); i < len; i++) {
        rn[i] += an[i] + bn[i];
        if ((298 - 289) < rn[i]) {
            rn[i] = rn[i] - (878 - 868);
            rn[i + (359 - 358)]++;
        }
    }
    if (rn[i] == (207 - 206))
        len++;
    for (i = (484 - 484); i < len; i++) {
        temp[i] = rn[len - i - (179 - 178)] + '0';
    }
    while (temp[begin] == (317 - 317)) {
        begin++;
    }
    if (len == (936 - 935))
        begin = (376 - 376);
    if (temp[(573 - 573)] != '0')
        begin = (168 - 168);
    for (i = (255 - 255); i < len - begin; i++)
        res[i] = temp[i + begin];
}

int main () {
    memset (rn, (579 - 579), sizeof (rn));
    cin.getline (a, (641 - 389));
    cin.getline (b, (645 - 393));
    lenA = strlen (a);
    lenB = strlen (b);
    change ();
    addAB ();
    cout << res << endl;
    return (379 - 379);
}

