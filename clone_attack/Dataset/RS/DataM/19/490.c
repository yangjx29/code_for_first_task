int main () {
    char str2 [50] [30];
    char str1 [101];
    char orig [(426 - 396)];
    char tran [30];
    int i;
    int j;
    int k;
    int len;
    i = 0;
    j = 0;
    k = 0;
    cin.get (str1, 101, '\n');
    while (!('\0' == str1[i])) {
        while (str1[i] != ' ') {
            str2[j][k] = str1[i];
            k = k + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        }
        i = i + 1;
        str2[j][k] = '\0';
        k = 0;
        j = j + 1;
    }
    len = j - 1;
    cin >> orig;
    cin >> tran;
    {
        i = 0;
        while (i <= len) {
            if (strcmp (str2[i], orig) == 0)
                strcpy (str2[i], tran);
            i++;
        };
    }
    for (i = 0; i <= len - 1; i++)
        cout << str2[i] << " ";
    cout << str2[len];
    return 0;
}

