int main () {
    char z [(1677 - 677)];
    int l;
    gets (z);
    l = strlen (z);
    for (int i = 0;
    i < l; i++) {
        if (z[i] != ' ' || (z[i] == ' ' && z[i - 1] != ' '))
            cout << z[i];
    }
    return 0;
}

