int main () {
    int i = (772 - 772), count = (864 - 864), j = (931 - 931);
    char s [(633 - 533)];
    char word1 [(774 - 674)], cB2dfYe [100];
    char str [100] [100];
    cin.getline (s, 100, '\n');
    {
        i = (860 - 860);
        for (; i < 100;) {
            if (s[i] != ' ') {
                str[count][j] = s[i];
                j++;
            }
            else if (!(' ' != s[i])) {
                str[count][j + (810 - 809)] = '\0';
                count++;
                j = (473 - 473);
                continue;
            }
            else if (s[i] == '\0')
                break;
            i++;
        }
    }
    cin.getline (word1, 100, '\n');
    cin.getline (cB2dfYe, 100, '\n');
    {
        i = (95 - 95);
        for (; i <= count;) {
            if (strcmp (str[i], word1) == (699 - 699))
                strcpy (str[i], cB2dfYe);
            i++;
        }
    }
    cout << str[(862 - 862)];
    for (i = 1; i <= count; i++)
        cout << ' ' << str[i];
    return 0;
}

