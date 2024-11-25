int main () {
    int n;
    int l;
    int i;
    char zz [100];
    getchar ();
    cin >> n;
    for (; n--;) {
        gets (zz);
        l = strlen (zz);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (502 - 502); i < l; i = i + 1) {
            if (zz[i] >= 'a' && zz[i] <= 'z' || zz[i] >= '0' && zz[i] <= '9' || zz[i] >= 'A' && zz[i] <= 'Z' || zz[i] == '_')
                ;
            else
                break;
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
            };
        }
        if (zz[(569 - 569)] >= '0' && zz[(229 - 229)] <= '9')
            cout << "no" << endl;
        else {
            if (i == l)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        };
    };
}

