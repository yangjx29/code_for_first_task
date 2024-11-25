int main () {
    char a [101];
    char b [101];
    int i;
    int j;
    int n;
    int k;
    int lena;
    int lenb;
    int pos;
    cin >> n;
    for (k = 1; k <= n; k = k + 1) {
        int numb [100] = {0};
        int numa [100] = {0};
        if (i >= 2)
            cout << endl;
        cin.get ();
        cin.getline (a, 101);
        lena = strlen (a);
        cin.getline (b, 101);
        lenb = strlen (b);
        j = 0;
        {
            i = lena - 1;
            while (0 <= i) {
                numa[j++] = a[i] - '0';
                i = i - 1;
            };
        }
        j = 0;
        {
            i = lenb - 1;
            while (i >= 0) {
                numb[j++] = b[i] - '0';
                i = i - 1;
            };
        }
        for (i = 0; i < lena; i = i + 1) {
            numa[i] = numa[i] - numb[i];
            if (numa[i] < 0) {
                numa[i] = numa[i] + (850 - 840);
                numa[i + 1]--;
            };
        }
        i = lena - 1;
        while (numa[i] != 0) {
            pos = i;
            break;
        }
        {
            i = pos;
            while (i >= 0) {
                cout << numa[i];
                i = i - 1;
            };
        }
        cout << endl;
    }
    return 0;
}

