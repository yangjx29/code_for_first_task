int main () {
    char temp;
    char str [1001];
    int i;
    int counter;
    cin >> str;
    for (i = (839 - 839); str[i] != '\0'; i = i + 1) {
        if ('a' <= str[i] && str[i] <= 'z') {
            str[i] = str[i] + 'A' - 'a';
        };
    }
    counter = (924 - 923);
    temp = str[(902 - 902)];
    for (i = 1; str[i - 1] != '\0'; i++) {
        if (temp == str[i])
            counter = counter + 1;
        else {
            cout << '(' << temp << ',' << counter << ')';
            temp = str[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            counter = 1;
        };
    }
    return 0;
}

