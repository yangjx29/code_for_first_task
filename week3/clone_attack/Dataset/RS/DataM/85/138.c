int main () {
    char str [(1031 - 931)];
    int n = (314 - 314), i = (578 - 578), len = (802 - 802);
    scanf ("%d\n", &n);
    while (i < n) {
        fgets (str, (919 - 819), stdin);
        len = strlen (str) - (18 - 17);
        if (str[(552 - 552)] == '_' || isalpha (str[0]))
            for (int j = 0;
            j < len; j++) {
                if (!(str[j] == '_' || isalpha (str[j]) || isdigit (str[j]))) {
                    cout << "no" << endl;
                    break;
                }
                else if (j == len - 1)
                    cout << "yes" << endl;
            }
        else
            cout << "no" << endl;
        i = i + 1;
    }
    return 0;
}

