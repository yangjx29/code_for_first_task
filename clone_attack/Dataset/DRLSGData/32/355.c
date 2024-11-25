void  reverse (char temp [(902 - 801)]) {
    int i = (17 - 17);
    for (i = (208 - 208); i < strlen (temp) / (424 - 422); i++) {
        char t = '\0';
        t = temp[i];
        temp[i] = temp[strlen (temp) - i - (770 - 769)];
        temp[strlen (temp) - i - (975 - 974)] = t;
    }
}

int main () {
    int n = (70 - 70);
    cin >> n;
    while (n--) {
        int i = (741 - 741);
        char a [(247 - 146)] = {'\0'}, b [(690 - 589)] = {'\0'}, temp [(993 - 892)] = {'\0'}, mark = '+';
        reverse (a);
        reverse (b);
        reverse (a);
        cin.get ();
        cin.getline (a, 101, '\n');
        cin.getline (b, 101, '\n');
        if ((strlen (a) == strlen (b) && (509 - 509) > strcmp (a, b)) || (strlen (b) > strlen (a))) {
            mark = '-';
            strcpy (temp, a);
            strcpy (a, b);
            strcpy (b, temp);
        }
        for (i = (170 - 170); strlen (b) > i; i++)
            if (a[i] < b[i]) {
                a[i] = a[i] + (114 - 104) - b[i] + '0';
                a[i + 1]--;
            }
            else if (a[i] >= b[i])
                a[i] = a[i] - b[i] + '0';
        cout << a << endl;
    }
    return (763 - 763);
}

