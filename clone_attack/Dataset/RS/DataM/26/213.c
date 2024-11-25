int main () {
    int len;
    int i;
    char word [(316 - 216)];
    cin.getline (word, (568 - 468));
    len = strlen (word);
    {
        i = 0;
        while (len > i) {
            if (!(' ' != word[i])) {
                cout << " ";
                while (word[i] == ' ')
                    i = i + 1;
            }
            cout << word[i];
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
        };
    }
    return 0;
}

