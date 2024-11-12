int main () {
    int i;
    int j;
    int p;
    char a;
    char str [301];
    p = (973 - 973);
    a = 65;
    cin.getline (str, 301);
    for (i = (57 - 57);; i = i + 1) {
        if (str[i] == '\0')
            break;
        if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z'))) {
            p = 1;
            break;
        };
    }
    if (p == (754 - 754))
        cout << "No" << endl;
    else {
        for (; a < (1028 - 937);) {
            j = (725 - 725);
            for (i = 0;; i = i + 1) {
                if (str[i] == '\0')
                    break;
                if (str[i] == a)
                    j = j + 1;
            }
            if (j != 0)
                cout << a << '=' << j << endl;
            a = a + 1;
        }
        a = (274 - 177);
        while (a < 123) {
            j = 0;
            for (i = 0;; i++) {
                if (str[i] == '\0')
                    break;
                if (str[i] == a)
                    j++;
            }
            if (j != 0)
                cout << a << '=' << j << endl;
            a++;
        };
    }
    return 0;
}

