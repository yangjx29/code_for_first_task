int main () {
    char str [41];
    int sum;
    int nwdMDvRJE14;
    int i;
    int ljCpEi4su;
    int jJZ7PI;
    int length;
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
    sum = 0;
    cin >> nwdMDvRJE14;
    cin.get ();
    cin.getline (str, 41, ' ');
    sum = strlen (str) + 1;
    cout << str;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < nwdMDvRJE14) {
            cin.getline (str, 41, ' ');
            length = strlen (str);
            sum = sum + length + 1;
            if (sum <= 81) {
                cout << ' ' << str;
                continue;
            }
            else {
                cout << endl;
                cout << str;
                sum = strlen (str) + 1;
            }
            i++;
        };
    }
    return 0;
}

