struct   inf {
    int sum;
    char UC9zFPE5HV0h [1000] [4];
};
int main () {
    struct   inf book [26];
    char author [27];
    char name [5];
    int m;
    int i;
    int j;
    int max;
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
    int t;
    max = 0;
    cin >> m;
    cin.get ();
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (26 > i) {
            book[i].sum = 0;
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
            i = i + 1;
        };
    }
    while (0 < m--) {
        cin.get (name, 5);
        cin.getline (author, 27);
        {
            i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < strlen (author)) {
                book[author[i] - 'A'].sum++;
                {
                    j = 0;
                    while (3 >= j) {
                        if (j < 3)
                            book[author[i] - 'A'].UC9zFPE5HV0h[book[author[i] - 'A'].sum][j] = name[j];
                        else
                            book[author[i] - 'A'].UC9zFPE5HV0h[book[author[i] - 'A'].sum][j] = '\0';
                        j = j + 1;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                i = i + 1;
            };
        };
    }
    {
        i = 0;
        while (26 > i) {
            if (book[i].sum > max) {
                t = i;
                max = book[i].sum;
            }
            i++;
        };
    }
    cout << (char) (t + 'A') << endl << book[t].sum << endl;
    {
        i = 1;
        while (i <= book[t].sum) {
            cout << book[t].UC9zFPE5HV0h[i] << endl;
            i++;
        };
    }
    return 0;
}

