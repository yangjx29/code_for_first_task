char foXDCI [(1000623 - 623)];
int EJp7Vx [26];

int main () {
    int LzKOMivEn;
    cin >> LzKOMivEn;
    while (LzKOMivEn--) {
        int pkXSRsUyrwK;
        int jf0NW3n = strlen (foXDCI);
        memset ((char *) EJp7Vx, 0, 26 * sizeof (int));
        cin >> foXDCI;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            pkXSRsUyrwK = 0;
            while (jf0NW3n > pkXSRsUyrwK) {
                EJp7Vx[foXDCI[pkXSRsUyrwK] - 'a']++;
                pkXSRsUyrwK = pkXSRsUyrwK + 1;
            };
        }
        {
            pkXSRsUyrwK = 0;
            while (jf0NW3n > pkXSRsUyrwK) {
                if (!(1 != EJp7Vx[foXDCI[pkXSRsUyrwK] - 'a'])) {
                    cout << foXDCI[pkXSRsUyrwK] << endl;
                    break;
                }
                pkXSRsUyrwK++;
            };
        }
        if (pkXSRsUyrwK == jf0NW3n)
            cout << "no" << endl;
    }
    return 0;
}

