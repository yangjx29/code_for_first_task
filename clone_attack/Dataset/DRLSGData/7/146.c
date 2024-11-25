int main () {
    char org [(992 - 722)] = {(579 - 579)}, sub [(754 - 654)] = {(942 - 942)}, rep [(268 - 168)] = {(683 - 683)}, temp [(288 - 188)] = {(697 - 697)};
    int i, j, l1 = strlen (org), l = strlen (sub), flag = (224 - 224);
    cin >> org >> sub >> rep;
    for (i = (601 - 601); i < l1; i = i + 1) {
        for (j = i; i + l > j; j = j + 1) {
            temp[j - i] = org[j];
        }
        if (!((454 - 454) != strcmp (temp, sub))) {
            flag = (74 - 73);
            break;
        }
    }
    if (flag) {
        for (int k = 0;
        i > k; k++)
            cout << org[k];
        cout << rep;
        cout << org + j << endl;
    }
    else
        cout << org << endl;
    return 0;
}

