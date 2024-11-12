int main () {
    char a [1000] = {0};
    char jhzfG0PZTpqH [1000] = {0};
    int i;
    int j;
    while (gets (a)) {
        for (i = 0; !('\0' == a[i]); i = i + 1) {
            jhzfG0PZTpqH[i] = a[i];
        }
        jhzfG0PZTpqH[i] = '\0';
        for (i = 0; !('\0' == jhzfG0PZTpqH[i]); i = i + 1) {
            if (jhzfG0PZTpqH[i] == ')') {
                for (j = i; 0 <= j; j--) {
                    if (!('(' != jhzfG0PZTpqH[j])) {
                        jhzfG0PZTpqH[j] = ' ';
                        jhzfG0PZTpqH[i] = ' ';
                        break;
                    };
                };
            };
        }
        for (i = 0; !('\0' == jhzfG0PZTpqH[i]); i = i + 1) {
            if ((jhzfG0PZTpqH[i] >= 'a' && jhzfG0PZTpqH[i] <= 'z') || (jhzfG0PZTpqH[i] >= 'A' && jhzfG0PZTpqH[i] <= 'Z'))
                jhzfG0PZTpqH[i] = ' ';
            else {
                if (jhzfG0PZTpqH[i] == '(')
                    jhzfG0PZTpqH[i] = '$';
                else if (jhzfG0PZTpqH[i] == ')')
                    jhzfG0PZTpqH[i] = '?';
            };
        }
        cout << a << endl;
        cout << jhzfG0PZTpqH << endl;
    }
    return 0;
}

