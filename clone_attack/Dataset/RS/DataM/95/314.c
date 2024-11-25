int main () {
    int i;
    int l1;
    int OAtbEs4k7uHU;
    char str1 [100];
    char str2 [100];
    cin.getline (str1, 100);
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
    l1 = strlen (str1);
    for (i = (933 - 933); i < l1; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] = str1[i] + 32;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    cin.getline (str2, 100);
    OAtbEs4k7uHU = strlen (str2);
    for (i = 0; i < OAtbEs4k7uHU; i++) {
        if (str2[i] >= 'A' && str2[i] <= 'Z')
            str2[i] += 32;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    if (strcmp (str1, str2) == 1)
        cout << ">" << endl;
    else if (strcmp (str1, str2) == -1)
        cout << "<" << endl;
    else
        cout << "=" << endl;
    return 0;
}

