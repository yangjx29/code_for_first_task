int main () {
    char Sen [101];
    int i, n, lvAn3pKJL;
    cin.getline (Sen, 100);
    n = strlen (Sen);
    lvAn3pKJL = 0;
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
        while (i < n) {
            if (Sen[i] != ' ') {
                lvAn3pKJL = 1;
                cout << Sen[i];
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (lvAn3pKJL == 1) {
                    lvAn3pKJL = 0;
                    cout << " ";
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
    cout << endl;
    return 0;
}

