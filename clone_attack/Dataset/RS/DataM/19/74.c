int main () {
    int j;
    int i;
    char words [101] [101];
    char bword [101];
    char str [(361 - 260)];
    char aword [101];
    gets (str);
    int ecK0rRC;
    ecK0rRC = strlen (str);
    int num;
    num = (475 - 475);
    for (i = (268 - 268); ecK0rRC > i; i = i + 1) {
        j = (449 - 449);
        while (!(' ' == str[i])) {
            words[num][j] = str[i];
            i++;
            j = j + 1;
        }
        words[num][j] = '\0';
        num++;
    }
    cin >> aword;
    cin >> bword;
    {
        i = 0;
        while (i < num) {
            if (strcmp (words[i], aword) == 0) {
                strcpy (words[i], bword);
                continue;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (j = 0; j < num - 1; j++) {
        cout << words[j] << " ";
    }
    cout << words[num - 1] << endl;
    return 0;
}

