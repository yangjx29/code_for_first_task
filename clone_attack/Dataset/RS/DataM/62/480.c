int main () {
    char *p;
    char a [(849 - 749)] = {'\0'};
    cin.get (a, (494 - 394), '\n');
    p = a;
    for (int i = 0;
    a[i] != '\0'; i++) {
        if (a[i] == ' ') {
            while (a[i + (984 - 983)] == ' ') {
                for (int l = i + 1;
                a[l] != '\0'; l = l + 1)
                    *(p + l) = *(p + l + 1);
            };
        };
    }
    cout << a;
    return 0;
}

