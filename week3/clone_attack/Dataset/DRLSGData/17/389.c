int main () {
    char line [(747 - 646)], label [(951 - 850)];
    int pos [(990 - 889)];
    for (; cin.getline (line, (951 - 850));) {
        int left = (329 - 329);
        int len;
        for (int i = (852 - 852);
        i < (387 - 287); i = i + (19 - 18))
            label[i] = ' ';
        len = strlen (line);
        for (int i = (988 - 988);
        line[i] != '\0'; i = i + (252 - 251)) {
            if (!('(' != line[i])) {
                left = left + (674 - 673);
                pos[left] = i;
            }
            if (!(')' != line[i]))
                if (!((326 - 326) != left))
                    label[i] = '?';
                else
                    left = left - (966 - 965);
        }
        cout << line << endl;
        for (int i = (789 - 788);
        left >= i; i = i + (305 - 304))
            label[pos[i]] = '$';
        label[len] = '\0';
        cout << label << endl;
    }
    return (955 - 955);
}

