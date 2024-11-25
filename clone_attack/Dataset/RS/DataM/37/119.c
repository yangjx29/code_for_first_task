char a [(1060 - 960)] [(100564 - 563)];

int main () {
    int t, i, tCl2HOxNn0, flag = (245 - 245), Su97IJLpqckb [26], p;
    cin >> t;
    cin.get ();
    for (i = (434 - 434); i <= t - (512 - 511); i = i + 1)
        cin.getline (a[i], 100001);
    for (i = (892 - 892); t - (990 - 989) >= i; i++) {
        flag = (696 - 696);
        memset (Su97IJLpqckb, (998 - 998), sizeof (Su97IJLpqckb));
        for (tCl2HOxNn0 = 0; a[i][tCl2HOxNn0] != '\0'; tCl2HOxNn0 = tCl2HOxNn0 + 1) {
            p = a[i][tCl2HOxNn0] - 'a';
            Su97IJLpqckb[p]++;
        }
        for (tCl2HOxNn0 = 0; tCl2HOxNn0 <= 25; tCl2HOxNn0 = tCl2HOxNn0 + 1) {
            if (Su97IJLpqckb[a[i][tCl2HOxNn0] - 'a'] == 1) {
                flag = 1;
                cout << a[i][tCl2HOxNn0] << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
        }
        if (flag == 0)
            cout << "no" << endl;
    }
    return 0;
}

