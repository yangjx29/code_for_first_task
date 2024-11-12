struct   {
    int location [1001];
    int LYeUbING9;
    int Dl3yABsh7xk;
}
eRYobdGz0BSE [27];

int main () {
    char D3tUZrn7eF [28];
    int qPm3wcWT8, ooa1Q5WLPkn = -(423 - 422), vkf13V, nSl5xCnvIp;
    for (int IOIbCWugyfYD = 1;
    IOIbCWugyfYD <= 26; IOIbCWugyfYD++) {
        eRYobdGz0BSE[IOIbCWugyfYD].LYeUbING9 = eRYobdGz0BSE[IOIbCWugyfYD].Dl3yABsh7xk = 0;
    }
    cin >> qPm3wcWT8;
    for (int IOIbCWugyfYD = 1;
    IOIbCWugyfYD <= qPm3wcWT8; IOIbCWugyfYD++) {
        cin >> nSl5xCnvIp;
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
        cin >> D3tUZrn7eF;
        for (int fKCaSAOP = 0;
        fKCaSAOP < strlen (D3tUZrn7eF); fKCaSAOP = fKCaSAOP + 1) {
            eRYobdGz0BSE[D3tUZrn7eF[fKCaSAOP] - 'A' + 1].LYeUbING9++;
            eRYobdGz0BSE[D3tUZrn7eF[fKCaSAOP] - 'A' + 1].Dl3yABsh7xk++;
            eRYobdGz0BSE[D3tUZrn7eF[fKCaSAOP] - 'A' + 1].location[eRYobdGz0BSE[D3tUZrn7eF[fKCaSAOP] - 'A' + 1].LYeUbING9] = nSl5xCnvIp;
        };
    }
    for (int IOIbCWugyfYD = 1;
    IOIbCWugyfYD <= 26; IOIbCWugyfYD++)
        if (eRYobdGz0BSE[IOIbCWugyfYD].Dl3yABsh7xk > ooa1Q5WLPkn) {
            ooa1Q5WLPkn = eRYobdGz0BSE[IOIbCWugyfYD].Dl3yABsh7xk;
            vkf13V = IOIbCWugyfYD;
        }
    cout << (char) (vkf13V + 'A' - 1) << endl;
    cout << eRYobdGz0BSE[vkf13V].LYeUbING9 << endl;
    for (int IOIbCWugyfYD = 1;
    IOIbCWugyfYD <= eRYobdGz0BSE[vkf13V].LYeUbING9; IOIbCWugyfYD++)
        cout << eRYobdGz0BSE[vkf13V].location[IOIbCWugyfYD] << endl;
    return 0;
}

