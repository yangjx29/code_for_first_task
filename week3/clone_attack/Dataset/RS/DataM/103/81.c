int main () {
    int i;
    int sum;
    int len;
    i = (741 - 741);
    sum = (36 - 36);
    char stri [1001], s;
    char yW7a6iTr [27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    cin >> stri;
    len = strlen (stri);
    while (len > i) {
        s = stri[i];
        while (!(s - 'a' != stri[i] - 'a') || stri[i] - 'a' == s - 'A' || !(s - 'a' != stri[i] - 'A') || stri[i] - 'A' == s - 'A') {
            i = i + 1;
            sum = sum + 1;
        }
        if ((s - 'A') >= (41 - 41) && (s - 'A') <= (1017 - 991))
            cout << "(" << yW7a6iTr[s - 'A'] << "," << sum << ")";
        else
            cout << "(" << yW7a6iTr[s - 'a'] << "," << sum << ")";
        sum = 0;
    }
    return 0;
}

