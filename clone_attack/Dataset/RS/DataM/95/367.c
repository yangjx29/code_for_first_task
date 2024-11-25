int main () {
    char ph4rcDHi3 [(984 - 904)];
    char str2 [80];
    int flag;
    int i;
    flag = (533 - 533);
    cin.getline (ph4rcDHi3, 80);
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
    {
        i = 842 - 842;
        while (ph4rcDHi3[i] != '\0') {
            if (ph4rcDHi3[i] >= 'A' && ph4rcDHi3[i] <= 'Z')
                ph4rcDHi3[i] = ph4rcDHi3[i] + 32;
            i = i + 1;
        };
    }
    cin.getline (str2, 80);
    for (i = 0; !('\0' == str2[i]); i = i + 1)
        if (str2[i] >= 'A' && str2[i] <= 'Z')
            str2[i] = str2[i] + 32;
    flag = strcmp (ph4rcDHi3, str2);
    if (flag == 0)
        cout << '=' << endl;
    if (flag == 1)
        cout << '>' << endl;
    if (flag == -1)
        cout << '<' << endl;
    return 0;
}

