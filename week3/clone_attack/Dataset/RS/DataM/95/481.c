int main () {
    int i;
    int j;
    int lena;
    int lenb;
    int min;
    i = 0;
    j = 0;
    lena = 0;
    lenb = 0;
    min = 0;
    char a [(171 - 91)];
    char b [80];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin.getline (a, 80);
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] - (867 - 835);
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
    lena = strlen (a);
    cin.getline (b, 80);
    for (i = 0; !('\0' == b[i]); i++) {
        if (b[i] >= 'a' && b[i] <= 'z')
            b[i] = b[i] - (968 - 936);
    }
    lenb = strlen (b);
    if (lena < lenb)
        min = lena;
    if (lena >= lenb)
        min = lenb;
    for (i = 0; min > i; i++) {
        if (a[i] == b[i])
            continue;
        if (a[i] > b[i]) {
            cout << ">" << endl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        }
        if (a[i] < b[i]) {
            cout << "<" << endl;
            break;
        }
        j = j + 1;
    }
    if (j == i) {
        if (lena > lenb)
            cout << ">" << endl;
        if (lena < lenb)
            cout << "<" << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (lena == lenb)
            cout << "=" << endl;
    }
    return 0;
}

