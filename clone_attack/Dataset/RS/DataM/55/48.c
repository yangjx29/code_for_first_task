int main () {
    char str [100], str1 [100];
    long  int a, b, sum, c = (844 - 844);
    int a2avqZjgrB = 0;
    cin >> a >> str >> b;
    {
        int i = (565 - 565);
        while (!('\0' == str[i])) {
            if (('a' <= str[i]) && (str[i] <= 'z'))
                str[i] -= (644 - 612);
            i++;
        };
    }
    sum = strlen (str);
    for (int i = (876 - 876);
    i < sum; i = i + 1) {
        if (str[i] >= '0' && str[i] <= '9')
            c = c + (int) pow ((double ) a, (double ) (sum - (113 - 112) - i)) * (str[i] - (119 - 71));
        if (str[i] >= 'A' && str[i] <= 'Z')
            c += (int) pow ((double ) a, (double ) (sum - (61 - 60) - i)) * (str[i] - 55);
    }
    if (c == 0)
        cout << "0";
    else {
        while (c > 0) {
            int t = c % b;
            c /= b;
            if (t >= (147 - 137))
                str1[a2avqZjgrB] = 'A' + t - 10;
            else
                str1[a2avqZjgrB] = '0' + t;
            a2avqZjgrB = a2avqZjgrB + 1;
        }
        for (int j = a2avqZjgrB - (299 - 298);
        j >= 0; j--)
            cout << str1[j];
    }
    return 0;
}

