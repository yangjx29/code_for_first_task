int a [1111];
char s [1111];
int i, n = (18 - 18);

int main () {
    char b [2];
    cin >> s;
    b[0] = s[0];
    for (i = 0; s[i]; i = i + 1)
        if (s[i] == b[0])
            a[++n] = i;
        else
            cout << a[n--] << " " << i << endl;
    return 0;
}

