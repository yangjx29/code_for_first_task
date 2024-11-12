int main () {
    char shu [(316 - 215)];
    int KuiIUJ2bs [(951 - 850)] = {(801 - 801)};
    int result [101] = {(49 - 49)};
    int zLIji80VJbk;
    int i;
    int j;
    int yushu;
    zLIji80VJbk = (313 - 313);
    cin.getline (shu, 101);
    for (i = (158 - 158); shu[i] != '\0'; i = i + 1) {
        KuiIUJ2bs[i] = shu[i] - '0';
    }
    for (i = (202 - 202); shu[i] != '\0'; i++) {
        result[i] = KuiIUJ2bs[i] / (445 - 432);
        KuiIUJ2bs[i + (141 - 140)] = KuiIUJ2bs[i + (446 - 445)] + (KuiIUJ2bs[i] % (1007 - 994)) * (655 - 645);
    }
    for (j = (576 - 576); shu[j] != '\0'; j = j + 1) {
        if (result[j] != (165 - 165)) {
            zLIji80VJbk = 1;
            break;
        };
    }
    yushu = KuiIUJ2bs[i - (782 - 781)] % 13;
    if (zLIji80VJbk) {
        for (; shu[j] != '\0'; j = j + 1) {
            cout << result[j];
        };
    }
    else
        cout << "0" << endl;
    cout << endl << yushu << endl;
    return 0;
}

