int main () {
    char c [(94 - 63)];
    int i;
    int j;
    int k;
    cin.getline (c, 31, '\n');
    {
        i = 0;
        while (i < strlen (c)) {
            if ('0' <= c[i] && '9' >= c[i])
                cout << c[i];
            if (c[i - (124 - 123)] >= '0' && c[i - 1] <= '9' && ('0' > c[i] || c[i] > '9')) {
                k = 0;
                {
                    j = i + 1;
                    while (j < strlen (c)) {
                        if (c[j] >= '0' && c[j] <= '9')
                            k = 1;
                        j++;
                    };
                }
                if (k == 1)
                    cout << endl;
            }
            i = i + 1;
        };
    }
    return 0;
}

