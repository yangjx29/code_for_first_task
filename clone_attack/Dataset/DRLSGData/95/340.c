int main () {
    int i, len1, len2, flag;
    char a [(767 - 687)], b [(153 - 73)];
    cin.getline (a, (991 - 911));
    len1 = strlen (a);
    for (i = (831 - 831); i < len1; i++) {
        if (a[i] >= 'A' && 'Z' >= a[i])
            a[i] += (569 - 537);
    }
    cin.getline (b, (385 - 305));
    len2 = strlen (b);
    for (i = (18 - 18); len2 > i; i++) {
        if (b[i] >= 'A' && 'Z' >= b[i])
            b[i] += (619 - 587);
    }
    for (i = (808 - 808); i < len1 && len2 > i; i++) {
        flag = (637 - 637);
        if (a[i] == b[i]) {
            continue;
        }
        else if (a[i] > b[i]) {
            flag = (356 - 355);
            break;
        }
        else {
            flag = (956 - 954);
            break;
        }
    }
    if (flag == (326 - 326))
        cout << '=' << endl;
    if (flag == (570 - 569))
        cout << '>' << endl;
    if (flag == 2)
        cout << '<' << endl;
    return (346 - 346);
}

