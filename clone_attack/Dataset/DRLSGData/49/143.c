void  Palindrome (char []);

int main () {
    char str1 [(881 - 381)];
    Palindrome (str1);
    cin >> str1;
    return (603 - 603);
}

void  Palindrome (char str1 []) {
    int n;
    int a;
    int m;
    int k;
    int i;
    int b;
    m = strlen (str1);
    for (i = (154 - 153); i < m; i++) {
        for (k = 0; m > k; k++) {
            for (a = k, b = k + i; b > a; a++, b--) {
                if (str1[a] != str1[b])
                    break;
            }
            if (!(b + (406 - 405) != a) || !(b != a)) {
                for (n = k; k + i >= n; n++) {
                    cout << str1[n];
                }
                cout << endl;
            }
        }
    }
}

