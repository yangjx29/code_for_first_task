int main () {
    char number [100] [101];
    char exp;
    int TcOAyvkz;
    int i;
    int j;
    int k;
    int len [100];
    cin >> TcOAyvkz;
    cin.get ();
    for (i = 0; 2 * TcOAyvkz > i; i = i + 1) {
        if (i == 2 * TcOAyvkz -1 || !(0 != i % 2))
            cin.getline (number[i], 101);
        else {
            cin.getline (number[i], 101);
            cin.get ();
        };
    }
    for (i = 0; 2 * TcOAyvkz > i; i++) {
        for (j = 0, k = strlen (number[i]) - 1; j < k; j++, k = k - 1) {
            exp = number[i][j];
            number[i][j] = number[i][k];
            number[i][k] = exp;
        }
        len[i] = strlen (number[i]);
    }
    {
        i = 0;
        while (i < 2 * TcOAyvkz) {
            {
                j = 0;
                while (j < len[i + 1]) {
                    if (number[i][j] < number[i + 1][j]) {
                        number[i][j] = number[i][j] + ':' - number[i + 1][j];
                        number[i][j + 1]--;
                    }
                    else
                        number[i][j] = number[i][j] - number[i + 1][j] + '0';
                    j = j + 1;
                };
            }
            if (number[i][len[i] - 1] == 0)
                number[i][len[i] - 1] = '\0';
            len[i] = strlen (number[i]);
            i = i + 2;
        };
    }
    {
        i = 0;
        while (i < 2 * TcOAyvkz) {
            {
                j = i;
                while (j >= 0) {
                    if (j == 0)
                        cout << number[i][j] << endl;
                    else
                        cout << number[i][j];
                    j--;
                };
            }
            i = i + 2;
        };
    }
    return 0;
}

