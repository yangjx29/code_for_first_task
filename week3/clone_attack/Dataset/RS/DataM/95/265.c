int main () {
    int i;
    char str1 [80], str2 [80];
    cin.getline (str1, 80);
    for (i = 0; i < strlen (str1); i = i + 1) {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] += 32;
        else
            continue;
    }
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
    cin.getline (str2, 80);
    {
        i = 0;
        while (strlen (str2) > i) {
            if ('A' <= str2[i] && str2[i] <= 'Z')
                str2[i] += 32;
            else
                continue;
            i++;
        };
    }
    if (strcmp (str1, str2) > 0)
        cout << ">" << endl;
    else if (strcmp (str1, str2) == 0)
        cout << "=" << endl;
    else
        cout << "<" << endl;
    return 0;
}

