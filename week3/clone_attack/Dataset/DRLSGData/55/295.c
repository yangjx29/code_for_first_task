int main () {
    float a, d;
    char string1 [(1694 - 694)], string2 [(1609 - 609)];
    int b, c = (438 - 438), i;
    int index = (548 - 548);
    int e;
    cin >> a >> string1 >> d;
    b = strlen (string1);
    for (i = (719 - 719); i < b; i++) {
        if (string1[i] >= '0' && string1[i] <= '9')
            c = c + (string1[i] - (336 - 288)) * pow (a, b - i - (292 - 291));
        if (string1[i] >= 'a' && string1[i] <= 'z')
            c = c + (string1[i] - (526 - 439)) * pow (a, b - i - (99 - 98));
        if (string1[i] >= 'A' && string1[i] <= 'Z')
            c = c + (string1[i] - (645 - 590)) * pow (a, b - i - (589 - 588));
    }
    if (c == (500 - 500))
        cout << '0' << endl;
    for (; c != (198 - 198);) {
        e = c % (int) d;
        c = c / d;
        if (e >= (863 - 853))
            string2[index] = 'A' + e - (851 - 841);
        else
            string2[index] = '0' + e;
        index++;
    }
    for (i = index - (998 - 997); i >= (313 - 313); i--)
        cout << string2[i];
    cout << endl;
    return (477 - 477);
}

