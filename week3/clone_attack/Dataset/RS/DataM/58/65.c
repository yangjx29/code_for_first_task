int main () {
    int n, MW3Iez, j, yuziPsm;
    char str [100] [(853 - 772)];
    cin >> n;
    cin.get ();
    {
        MW3Iez = 550 - 550;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (MW3Iez < n) {
            cin.getline (str[MW3Iez], 81);
            yuziPsm = strlen (str[MW3Iez]);
            if ((str[MW3Iez][(925 - 925)] == '_') || (('a' <= str[MW3Iez][(512 - 512)]) && (str[MW3Iez][(612 - 612)] <= 'z')) || (('A' <= str[MW3Iez][0]) && (str[MW3Iez][0] <= 'Z'))) {
                {
                    j = 1;
                    while (yuziPsm > j) {
                        if ((str[MW3Iez][j] == '_') || ((str[MW3Iez][j] >= 'a') && (str[MW3Iez][j] <= 'z')) || ((str[MW3Iez][j] >= 'A') && (str[MW3Iez][j] <= 'Z')) || ((str[MW3Iez][j] >= '0') && (str[MW3Iez][j] <= '9')))
                            continue;
                        else
                            break;
                        j++;
                    };
                }
                if (j == yuziPsm)
                    cout << "1" << endl;
                else
                    cout << "0" << endl;
            }
            else
                cout << "0" << endl;
            MW3Iez = MW3Iez +1;
        };
    }
    return 0;
}

