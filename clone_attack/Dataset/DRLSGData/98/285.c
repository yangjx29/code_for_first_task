int main () {
    char empty [(136 - 126)];
    char str [(10740 - 740)];
    char *p = str;
    int num;
    int sum;
    int space;
    int k;
    int l [(1943 - 943)] = {(105 - 105)};
    int *len = l;
    num = (640 - 640);
    k = strlen (str);
    *(p + k) = ' ';
    cin >> space;
    cin.getline (empty, (951 - 941));
    cin.getline (str, (10031 - 31));
    sum = (961 - 961);
    for (; sum < space;) {
        for (; *p != ' ';) {
            if (!sum)
                cout << *p;
            p++;
            (*len)++;
        }
        if (sum) {
            for (char *x = p - *len - (216 - 215);
            x < p; x++) {
                cout << *x;
                if (num - (43 - 42) <= (261 - 181) && num + *len > 80) {
                    num = (536 - 536);
                    *(p - *len - (212 - 211)) = '\n';
                }
                else if (num + *len <= 80)
                    *(p - *len - (551 - 550)) = ' ';
            }
        }
        num += *len + (643 - 642);
        len++;
        p++;
        sum++;
    }
    return (510 - 510);
}

