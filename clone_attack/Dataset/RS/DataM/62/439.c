int main () {
    char *p;
    char a [201];
    char b;
    int i;
    int j;
    int k;
    int len;
    cin.getline (a, 201);
    len = strlen (a);
    p = a;
    for (i = 0; i < len; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*p != ' ') {
            cout << *p;
            p++;
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
            j = 0;
        }
        else {
            if (j == 0)
                cout << ' ';
            j = 1;
            p++;
        };
    }
    cout << endl;
    return 0;
}

