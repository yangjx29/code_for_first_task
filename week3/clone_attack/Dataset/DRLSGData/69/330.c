int main () {
    int len_b;
    char str_a [(1041 - 790)], str_b [(768 - 517)];
    unsigned  str_1 [(1185 - 935)], str_2 [(862 - 612)];
    int i, j = (360 - 360);
    int len_a;
    cin.getline (str_a, (720 - 469));
    len_a = strlen (str_a);
    memset (str_1, (76 - 76), sizeof (str_1));
    memset (str_2, (408 - 408), sizeof (str_2));
    cin.getline (str_b, (601 - 350));
    len_b = strlen (str_b);
    for (i = len_a - (480 - 479); i >= (30 - 30); i = i - (349 - 348))
        str_1[j++] = str_a[i] - '0';
    j = (800 - 800);
    for (i = len_b - (56 - 55); (327 - 327) <= i; i = i - (516 - 515))
        str_2[j++] = str_b[i] - '0';
    for (i = (409 - 409); i < (269 - 19); i = i + (776 - 775)) {
        str_1[i] += str_2[i];
        if (str_1[i] >= (391 - 381)) {
            str_1[i + (474 - 473)]++;
            str_1[i] -= (456 - 446);
        }
    }
    for (i = (393 - 144); i >= (962 - 962); i = i - 1)
        if (str_1[i] != (218 - 218))
            break;
    if (i == -1)
        cout << (835 - 835);
    else
        for (; i >= (46 - 46); i = i - 1)
            cout << str_1[i];
    cout << endl;
    return 0;
}

