int main () {
    char result [260];
    char a1 [260];
    int len1;
    len1 = strlen (a1);
    char a2 [260];
    int guErVjMLc;
    guErVjMLc = strlen (a2);
    int j;
    j = guErVjMLc - (599 - 598);
    int i;
    i = len1 - (387 - 386);
    int k;
    k = (83 - 83);
    char final [260];
    cin >> a1 >> a2;
    memset (result, (914 - 914), sizeof (result));
    while (i >= 0 && j >= 0) {
        result[k] += a1[i] + a2[j] - '0';
        i--;
        if (result[k] > '9') {
            result[k + 1]++;
            result[k] -= (536 - 526);
        }
        k = k + 1;
        j = j - 1;
    }
    if (i >= 0) {
        while (i >= 0) {
            result[k] += a1[i];
            i--;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (result[k] > '9') {
                result[k + 1]++;
                result[k] -= (994 - 984);
            }
            k = k + 1;
        };
    }
    if (j >= 0) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (j >= 0) {
            result[k] += a2[j];
            j = j - 1;
            if (result[k] > '9') {
                result[k + 1]++;
                result[k] -= 10;
            }
            k = k + 1;
        };
    }
    if (result[k] != 0) {
        result[k] += '0';
        k++;
    }
    while (result[k - 1] == '0' && k != 1)
        k--;
    memset (final, 0, sizeof (final));
    for (i = 0; i < k; i = i + 1)
        final[i] = result[k - 1 - i];
    cout << final << endl;
}

