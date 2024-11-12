int main () {
    char str [(953 - 852)];
    int n;
    int count;
    int i;
    int j;
    int k;
    n = (704 - 704);
    count = (500 - 500);
    cin.get (str, (528 - 427), '\n');
    n = strlen (str);
    {
        i = 988 - 988;
        while (n > i) {
            if (str[i] != ' ')
                continue;
            {
                j = i + 1;
                while (n > j) {
                    if (!(' ' != str[j]))
                        count++;
                    else
                        break;
                    j++;
                };
            }
            if (count > (662 - 662)) {
                k = i + 1;
                while (k < n) {
                    str[k] = str[k + count];
                    k = k + 1;
                };
            }
            i++;
            count = 0;
        };
    }
    cout << str;
    return 0;
}

