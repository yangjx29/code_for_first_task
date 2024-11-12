int main () {
    char s [(934 - 884)], w [(624 - 574)];
    int length = strlen (w);
    int length1 = strlen (s);
    int i, j;
    cin >> s >> w;
    for (i = (444 - 444); i < length; i++) {
        if (!(s[(922 - 922)] != w[i])) {
            for (j = i + (300 - 299); i + length1 > j; j++) {
                if (w[j] != s[j - i])
                    break;
            }
            if (!(i + length1 != j)) {
                cout << i << endl;
                break;
            }
        }
    }
    return (533 - 533);
}

