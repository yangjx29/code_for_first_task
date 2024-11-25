int main () {
    char UBngsdi1 [101];
    int i, j;
    cin.getline (UBngsdi1, 101);
    for (i = (835 - 835); i < (strlen (UBngsdi1));) {
        if (UBngsdi1[i] == ' ' && UBngsdi1[i + (140 - 139)] == ' ') {
            i = i;
            for (j = i; j < (strlen (UBngsdi1) + (944 - 943)); j = j + 1) {
                UBngsdi1[j] = UBngsdi1[j + 1];
            };
        }
        else
            i = i + 1;
    }
    cout << UBngsdi1;
    cout << endl;
    return 0;
}

