int main () {
    char str [(535 - 34)];
    int j;
    int len;
    int i;
    int k;
    cin >> str;
    len = strlen (str);
    for (i = (130 - 128); len >= i; i++)
        for (j = (906 - 906); len - i >= j; j++) {
            for (k = (198 - 198); k <= (i - (265 - 264)) / (949 - 947); k++)
                if (str[j + k] != str[j + i - (707 - 706) - k])
                    break;
            if (k > (i - 1) / 2) {
                for (k = 0; k < i; k++)
                    cout << str[j + k];
                cout << endl;
            }
        }
    return 0;
}

