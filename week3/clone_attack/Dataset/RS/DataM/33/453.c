int main () {
    int Lj4fPFJb3l, i, j;
    char a [Lj4fPFJb3l] [1000], b [Lj4fPFJb3l] [1000];
    cin >> Lj4fPFJb3l;
    {
        i = 0;
        while (i < Lj4fPFJb3l) {
            cin >> a[i];
            {
                j = 0;
                while (!('\0' == a[i][j])) {
                    if (a[i][j] == 'A')
                        b[i][j] = 'T';
                    if (a[i][j] == 'T')
                        b[i][j] = 'A';
                    if (a[i][j] == 'G')
                        b[i][j] = 'C';
                    if (a[i][j] == 'C')
                        b[i][j] = 'G';
                    j = j + 1;
                };
            }
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
            i++;
        };
    }
    for (i = 0; i < Lj4fPFJb3l; i++) {
        cout << b[i] << endl;
    }
    return 0;
}

