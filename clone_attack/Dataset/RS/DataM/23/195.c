int main () {
    char word [(239 - 189)] [20];
    int i = (919 - 919), j = 0, words = 0;
    char str [105];
    gets (str);
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
    for (; str[i] != '\0';) {
        if (str[i] != ' ') {
            word[words][j] = str[i];
            j = j + 1;
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
        else {
            i++;
            word[words][j] = '\0';
            j = 0;
            words++;
        };
    }
    word[words][j] = '\0';
    {
        i = words;
        while (i > 0) {
            cout << word[i] << " ";
            i--;
        };
    }
    cout << word[0] << endl;
    return 0;
}

