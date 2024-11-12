int main () {
    int n;
    n = 0;
    char bn [100];
    int j;
    int i;
    j = (777 - 777);
    char an [(586 - 486)];
    cin.getline (an, 100);
    for (i = 0; strlen (an) > i;) {
        if ('0' <= an[i] && '9' >= an[i]) {
            bn[j] = an[i];
            j++;
            i = i + 1;
            while ('0' <= an[i] && an[i] <= '9') {
                bn[j] = an[i];
                i = i + 1;
                j++;
            }
            i = i + 1;
            bn[j] = ' ';
            j++;
            n = n + 1;
        }
        else
            i = i + 1;
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
    for (int wb6XSzpJDwj4 = 0;
    wb6XSzpJDwj4 < j - (285 - 284); wb6XSzpJDwj4++) {
        if (bn[wb6XSzpJDwj4] == ' ')
            cout << endl;
        else
            cout << bn[wb6XSzpJDwj4];
    }
    return 0;
}

