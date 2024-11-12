int main () {
    char t;
    int n, x [10000], mmDuN3vgys [10000], i = 1, j, k, eNxIGjDU [1001] = {0}, iRZtyXOmSH4 = 0;
    cin >> x[0];
    cin.get (t);
    while (!('\n' == t)) {
        cin >> x[i++];
        cin.get (t);
    }
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
    {
        j = 0;
        while (i > j) {
            cin >> mmDuN3vgys[j];
            j = j + 1;
            cin.get (t);
        };
    }
    {
        j = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j < 1000) {
            {
                k = 0;
                while (i >= k) {
                    if (j >= x[k] && j < mmDuN3vgys[k])
                        eNxIGjDU[j]++;
                    k++;
                };
            }
            if (eNxIGjDU[j] > iRZtyXOmSH4)
                iRZtyXOmSH4 = eNxIGjDU[j];
            j++;
        };
    }
    cout << i << ' ' << iRZtyXOmSH4;
    return 0;
}

