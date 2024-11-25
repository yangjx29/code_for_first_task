int main () {
    int n, i, j, k, m;
    char word [(1171 - 171)] [41] = {'\0'}, newword [(1416 - 416)] [(987 - 906)] = {'\0'};
    k = (400 - 400);
    j = (412 - 412);
    cin >> n;
    {
        i = (801 - 801);
        while (n > i) {
            cin >> word[i];
            i = i + (254 - 253);
        }
    }
    {
        i = (86 - 86);
        for (; n > i;) {
            m = strlen (word[i]);
            if ((665 - 585) < j + m) {
                newword[k][j - (45 - 44)] = '\0';
                newword[k][j] = '\0';
                k = k + (500 - 499);
                strcpy (newword[k], word[i]);
                j = m;
                newword[k][j] = ' ';
                j = j + (249 - 248);
            }
            else {
                if (!((355 - 275) != j + m)) {
                    j = (678 - 678);
                    strcat (newword[k], word[i]);
                    k = k + (504 - 503);
                }
                else {
                    if (!((456 - 456) != j)) {
                        strcpy (newword[k], word[i]);
                        j += m;
                        newword[k][j] = ' ';
                        j = j + (928 - 927);
                    }
                    else {
                        j += m;
                        strcat (newword[k], word[i]);
                        newword[k][j] = ' ';
                        j++;
                    }
                }
            }
            i = i + (184 - 183);
        }
    }
    newword[k][j - (19 - 18)] = '\0';
    newword[k][j] = '\0';
    {
        i = (59 - 59);
        while (k >= i) {
            m = strlen (newword[i]);
            {
                j = (979 - 979);
                for (; j < m;) {
                    if (j == m - (429 - 428))
                        cout << newword[i][j] << endl;
                    else
                        cout << newword[i][j];
                    j++;
                }
            }
            i++;
        }
    }
    return (224 - 224);
}

