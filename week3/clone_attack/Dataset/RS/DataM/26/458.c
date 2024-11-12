int main () {
    char str [101];
    char *pointer = str;
    char l;
    char ugf2Mrlp;
    gets (str);
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
    ugf2Mrlp = 1;
    l = strlen (str);
    for (; pointer < str + l; pointer++) {
        if (ugf2Mrlp == 1 && *pointer == ' ') {
            cout << *pointer;
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
            }
            ugf2Mrlp = 0;
        }
        if (ugf2Mrlp == 0 && *pointer == ' ')
            continue;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << *pointer;
        if (*pointer != ' ')
            ugf2Mrlp = 1;
    }
    cout << endl;
    return 0;
}

