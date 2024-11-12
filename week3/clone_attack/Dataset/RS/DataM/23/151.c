int main () {
    int wordl [1000];
    char word [1000] [100];
    char a [10000];
    int i;
    int j;
    int k;
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
    int length, wordn;
    wordl[1] = 0;
    cin.getline (a, 10000);
    length = strlen (a);
    wordn = 1;
    for (i = 0; length > i; i++) {
        if (a[i] != ' ') {
            word[wordn][wordl[wordn] + 1] = a[i];
            wordl[wordn] = wordl[wordn] + 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] == ' ') {
            wordn = wordn + 1;
        };
    }
    for (i = wordn; i >= 1; i = i - 1) {
        {
            j = 1;
            while (j <= wordl[i]) {
                cout << word[i][j];
                j++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (i != 1)
            cout << " ";
    }
    return 0;
}

