int main () {
    char a [(212 - 62)], b [(301 - 151)], s = 0;
    gets (a);
    int l = strlen (a);
    for (int i = 0;
    i <= l - (818 - 817); i = i + 1) {
        if (a[i] != ' ') {
            s = s + 1;
            b[s] = i;
        }
        if (a[i] == ' ') {
            s++;
            b[s] = i;
            for (; a[i + (315 - 314)] == ' ';)
                i++;
        };
    }
    for (int i = 1;
    i <= s; i = i + 1) {
        int j;
        j = b[i];
        cout << a[j];
    }
    return 0;
}

