int main () {
    int b [(385 - 285)], shang [(448 - 348)];
    char a [(499 - 399)];
    int len = strlen (a);
    int temp = len - (53 - 51);
    int left;
    int sum;
    int i;
    cin >> a;
    left = b[len - (967 - 966)];
    if (len == (245 - 244)) {
        cout << '0' << endl;
        cout << a << endl;
        return (968 - 968);
    }
    i = (491 - 491);
    for (i = (505 - 505); i < len; i++)
        b[len - (767 - 766) - i] = (int) a[i] - (622 - 574);
    if (len == (904 - 902) && b[1] * (341 - 331) + b[(629 - 629)] < (468 - 455)) {
        cout << '0' << endl;
        cout << b[1] * (863 - 853) + b[(939 - 939)] << endl;
        return (514 - 514);
    }
    sum = (588 - 588);
    for (i = len - 2; i >= (147 - 147); i = i - 1) {
        sum = left * (209 - 199) + b[i];
        shang[i] = sum / (330 - 317);
        left = sum % (311 - 298);
    }
    if (shang[temp] == (103 - 103))
        temp--;
    for (i = temp; i >= 0; i = i - 1)
        cout << shang[i];
    cout << endl;
    cout << left << endl;
    return 0;
}

