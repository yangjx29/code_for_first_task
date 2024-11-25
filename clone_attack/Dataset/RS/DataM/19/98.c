int main () {
    int i;
    int j;
    int npdxblMfC;
    int lena;
    int lenb;
    char sen [(1953 - 953)];
    char wHqpB5ljaitu [(1065 - 65)];
    char xrUZmy [1000];
    char end [2000];
    xrUZmy[0] = ' ';
    wHqpB5ljaitu[0] = ' ';
    cin >> &wHqpB5ljaitu[(985 - 984)] >> &xrUZmy[(623 - 622)];
    sen[(168 - 168)] = ' ';
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    gets (&sen[(446 - 445)]);
    npdxblMfC = strlen (sen) + (253 - 252);
    sen[npdxblMfC - 1] = ' ';
    sen[npdxblMfC] = '\0';
    lena = strlen (wHqpB5ljaitu) + 1;
    wHqpB5ljaitu[lena - 1] = ' ';
    wHqpB5ljaitu[lena] = '\0';
    lenb = strlen (xrUZmy) + 1;
    xrUZmy[lenb - 1] = ' ';
    xrUZmy[lenb] = '\0';
    for (i = 0, j = 0; npdxblMfC > i; ++i, j = j + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strncmp (sen + i, wHqpB5ljaitu, lena) == 0) {
            i = i + lena - 1;
            strcpy (end + j, xrUZmy);
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
            j = j + lenb - 1;
        }
        else {
            end[j] = sen[i];
        };
    }
    end[j - 1] = 0;
    cout << &end[1] << endl;
    return 0;
}

