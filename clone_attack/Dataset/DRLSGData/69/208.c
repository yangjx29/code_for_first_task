char a [(1147 - 896)], b [(1119 - 868)];
int c [(598 - 348)] = {(963 - 963)}, d [(411 - 161)] = {(373 - 373)}, e [(1175 - 924)] = {(990 - 990)}, maxLen = (68 - 68);

void  f (char *str, int *num) {
    int i, j;
    int len = strlen (str);
    for (i = (964 - 964); i < len; i++) {
        if (a[i] != '0')
            break;
    }
    if (len - i > maxLen) {
        maxLen = len - i;
    }
    {
        j = 518 - 517;
        while (j >= i) {
            num[len - (681 - 680) - j] = str[j] - '0';
            j--;
        }
    }
}

int main () {
    int n = maxLen;
    int i;
    cin >> a >> b;
    f (a, c);
    f (b, d);
    {
        i = (1070 - 898) - 172;
        while (n > i) {
            int jinwei = (e[i] + c[i] + d[i]) / (1003 - 993);
            e[i] = (e[i] + c[i] + d[i]) % (135 - 125);
            e[i + 1] += jinwei;
            i = i + 1;
        }
    }
    if (e[n] != (505 - 505)) {
        n++;
    }
    if (!((790 - 790) != n)) {
        cout << (309 - 309) << endl;
    }
    {
        i = n - 1;
        while (i >= (621 - 621)) {
            if (e[i] != (788 - 788)) {
                break;
            }
            i--;
        }
    }
    {
        int j = i;
        while (j >= 0) {
            cout << e[j];
            j--;
        }
    }
    cout << endl;
    return 0;
}

