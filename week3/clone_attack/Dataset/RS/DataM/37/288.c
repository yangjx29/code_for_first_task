int main () {
    char a [(100312 - 312)];
    int k;
    int t;
    int i;
    int j;
    int jj;
    int flag;
    k = (898 - 898);
    cin >> t;
    cin.get ();
    for (i = 0; i < t; i++) {
        cin.getline (a, 100000);
        k = 0;
        for (j = 0; strlen (a) > j; j++) {
            flag = 1;
            {
                jj = 0;
                while (strlen (a) > jj) {
                    if ((a[j] == a[jj]) && (j != jj)) {
                        flag = 0;
                        break;
                    }
                    jj++;
                };
            }
            if (flag == 1) {
                k = 1;
                cout << a[j] << endl;
                break;
            };
        }
        memset (a, 0, sizeof (a));
        if (k == 0)
            cout << "no" << endl;
    }
    return 0;
}

