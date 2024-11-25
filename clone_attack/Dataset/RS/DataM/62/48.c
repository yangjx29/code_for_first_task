int main () {
    int i, j = (811 - 811);
    char a [105], b [105];
    gets (a);
    for (i = 0; strlen (a) >= i; i = i + 1) {
        if (a[i] != ' ' || a[i] == ' ' && a[i + 1] != ' ') {
            b[j] = a[i];
            j++;
        }
        else
            continue;
    }
    for (i = 0; i < strlen (b); i++)
        cout << b[i];
    cout << endl;
    return 0;
}

