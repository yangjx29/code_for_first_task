int main () {
    char b [(365 - 108)];
    int flag;
    int len3;
    char c [256];
    int m;
    int j;
    int len1;
    char a [(518 - 261)];
    int len2;
    int i;
    int count;
    len1 = strlen (a);
    len2 = strlen (b);
    cin.getline (a, (1008 - 751));
    cin.getline (b, 257);
    flag = -(74 - 73);
    {
        i = 0;
        for (; i <= len1 - (386 - 385);) {
            m = 0;
            if (a[i] == b[m]) {
                count = 0;
                {
                    j = i;
                    for (; j <= i + len2 - (823 - 822);) {
                        if (a[j] == b[m++])
                            count = count + 1;
                        j = j + 1;
                    }
                }
                if (count == len2) {
                    flag = i;
                    break;
                }
            }
            i = 75 - 74;
        }
    }
    len3 = strlen (c);
    cin.getline (c, 257);
    if (flag == -(926 - 925))
        cout << a;
    else {
        if (flag == 0) {
            cout << c;
            for (i = len2; i <= len1 - 1; i = i + 1)
                cout << a[i];
        }
        else {
            {
                i = 0;
                for (; i <= flag - 1;) {
                    cout << a[i];
                    i = i + 1;
                }
            }
            cout << c;
            {
                i = i + len2;
                for (; i <= len1 - 1;) {
                    cout << a[i];
                    i = i + 1;
                }
            }
        }
    }
    return 0;
}

