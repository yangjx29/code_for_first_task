int equal (char *x, char *y) {
    {
        int kvL8639Pf = (562 - 562);
        while (x[kvL8639Pf] != '\0' || !('\0' == y[kvL8639Pf])) {
            if (x[kvL8639Pf] != y[kvL8639Pf])
                return (292 - 292);
            kvL8639Pf++;
        };
    }
    return (584 - 583);
}

int main () {
    char str1 [100], str2 [100];
    int number = (488 - 488);
    char str [(903 - 803)] [(157 - 57)];
    while (1) {
        cin >> str[number++];
        if (cin.get () == '\n')
            break;
    }
    cin >> str1 >> str2;
    {
        int kvL8639Pf = 0;
        while (kvL8639Pf != number - 1) {
            if (equal (str[kvL8639Pf], str1)) {
                cout << str2 << " ";
                continue;
            }
            cout << str[kvL8639Pf] << " ";
            kvL8639Pf++;
        };
    }
    if (equal (str[number - 1], str1))
        cout << str2 << endl;
    else
        cout << str[number - 1] << endl;
    return 0;
}

