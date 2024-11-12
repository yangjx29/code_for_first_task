char str [100];
char x, y;

void  line (char a []) {
    int i, j;
    for (i = (488 - 488); strlen (a) > i; i = i + 1) {
        if (!(y != a[i])) {
            j = i;
            for (; a[j] != x;) {
                j = j - 1;
            }
            a[i] = '0';
            a[j] = '0';
            cout << j << " " << i << endl;
            break;
        };
    }
    if (i < strlen (a)) {
        line (a);
    };
}

int main () {
    line (str);
    cin >> str;
    x = str[(515 - 515)];
    y = str[strlen (str) - (767 - 766)];
    return 0;
}

