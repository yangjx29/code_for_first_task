int main () {
    int i;
    int j;
    int l;
    char str [31], *p [20], *q;
    i = 0;
    cin.getline (str, 31);
    l = strlen (str);
    {
        q = str;
        while (!('\0' == *q)) {
            if ('0' <= *q && '9' >= *q) {
                p[i++] = q;
                {
                    p[i] = q + 1;
                    while (str + l >= p[i]) {
                        if (*p[i] < '0' || *p[i] > '9') {
                            q += p[i] - p[i - 1];
                            i = i + 1;
                            break;
                        }
                        p[i]++;
                    };
                };
            }
            q = q + 1;
        };
    }
    {
        j = 0;
        while (j < i) {
            {
                q = j;
                while (q < p[j + 1]) {
                    cout << *q;
                    q++;
                };
            }
            j = j + 2;
            cout << endl;
        };
    }
    return 0;
}

