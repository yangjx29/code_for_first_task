int main () {
    int a = 0;
    int n;
    int GbTlxfS;
    int *cnzQmg = &a;
    int len1;
    int len2;
    char str [n] [50];
    cin >> n;
    {
        GbTlxfS = 0;
        while (n > GbTlxfS) {
            cin >> str[GbTlxfS];
            GbTlxfS = GbTlxfS +1;
        };
    }
    GbTlxfS = 0;
    while (n - (801 - 800) > GbTlxfS) {
        len1 = strlen (str[GbTlxfS]);
        len2 = strlen (str[GbTlxfS +(453 - 452)]);
        if (80 >= *cnzQmg + len1 && *cnzQmg + len1 + len2 + 1 <= 80) {
            *cnzQmg = *cnzQmg + len1 + 1;
            cout << str[GbTlxfS] << " ";
        }
        else {
            if (80 >= *cnzQmg + len1 && *cnzQmg + len1 + len2 + 1 > 80) {
                *cnzQmg = 0;
                cout << str[GbTlxfS] << endl;
            };
        }
        GbTlxfS++;
    }
    len1 = strlen (str[n - 1]);
    if (*cnzQmg + len1 > 80) {
        cout << endl;
        cout << str[n - 1];
    }
    if (*cnzQmg + len1 <= 80) {
        cout << str[n - 1];
    }
    return 0;
}

