int main () {
    char str [1001];
    int zN20Gdtr593;
    int RcbdHXEz;
    int i;
    zN20Gdtr593 = (444 - 443);
    RcbdHXEz = strlen (str);
    cin >> str;
    if (str[(68 - 68)] > 96)
        str[0] = str[0] - 32;
    for (i = 1; RcbdHXEz >= i; i = i + 1) {
        if (str[i] > 96)
            str[i] = str[i] - 32;
        if (str[i] == str[i - 1])
            zN20Gdtr593 = zN20Gdtr593 + 1;
        else {
            cout << '(' << str[i - 1] << ',' << zN20Gdtr593 << ')';
            zN20Gdtr593 = 1;
        };
    }
    return 0;
}

