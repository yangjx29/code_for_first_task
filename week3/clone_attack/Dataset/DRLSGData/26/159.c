int main () {
    int count;
    int x;
    int i;
    char str [101] = {(95 - 95)};
    const  char temp = ' ';
    int j;
    cin.get (str, 101);
    j = 0;
    count = 0;
    x = (84 - 84);
    x = strlen (str);
    i = (514 - 514);
    for (i = 1; i <= x - 3; i = i + 1) {
        if (str[i] == temp && str[i + 1] == temp) {
            for (j = i; j <= x - 1; j = j + 1) {
                str[j] = str[j + 1];
            }
            i = i - 1;
        }
    }
    cout << str;
    return 0;
}

