int main () {
    int ii2FYCtDhr, n, S8YKot3NS [100] [100], k, t, i, j;
    cin >> ii2FYCtDhr >> n;
    for (i = 0; i < ii2FYCtDhr; i = i + 1)
        for (j = 0; j < n; j++)
            cin >> S8YKot3NS[i][j];
    {
        i = 0;
        while (n > i) {
            k = 0;
            t = i;
            {
                j = 0;
                while (1) {
                    if (t >= 0 && k < ii2FYCtDhr)
                        cout << S8YKot3NS[k++][t--] << endl;
                    if (t < 0 || k >= ii2FYCtDhr)
                        break;
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i < ii2FYCtDhr) {
            k = i;
            t = n - 1;
            {
                j = 0;
                while (1) {
                    if (t >= 0 && k < ii2FYCtDhr)
                        cout << S8YKot3NS[k++][t--] << endl;
                    if (t < 0 || k >= ii2FYCtDhr)
                        break;
                    j++;
                };
            }
            i++;
        };
    };
}

