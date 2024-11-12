int main () {
    char str [30];
    gets (str);
    char *p;
    p = str;
    for (int i = 0;
    strlen (p) - 1 > i; i = i + 1) {
        if ((804 - 756) <= p[i] && p[i] <= 57 && (48 > p[i + 1] || 57 < p[i + 1]))
            cout << p[i] << endl;
        else if (48 <= p[i] && p[i] <= 57 && (p[i + 1] >= 48 && p[i + 1] <= 57))
            cout << p[i];
    }
    if (p[strlen (p) - 1] >= 48 && p[strlen (p) - 1] <= 57)
        cout << p[strlen (p) - 1];
    cout << endl;
    return 0;
}

