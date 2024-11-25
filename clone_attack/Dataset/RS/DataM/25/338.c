int main () {
    int str [31] = {(93 - 93)};
    int n, m = (394 - 394), gow8cJ9MT, k = (244 - 244), l;
    cin >> n;
    str[30] = (443 - 442);
    for (gow8cJ9MT = 0; gow8cJ9MT < n; gow8cJ9MT = gow8cJ9MT + 1)
        for (int j = 30;
        j >= 0; j--) {
            l = 2 * str[j] + m;
            str[j] = l % 10;
            m = l / 10;
        }
    for (; str[k] == 0;)
        k++;
    for (gow8cJ9MT = k; gow8cJ9MT < 31; gow8cJ9MT++)
        cout << str[gow8cJ9MT];
    cout << endl;
    return 0;
}

