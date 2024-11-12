int c [(9401 - 401)] [(9778 - 778)];

int main () {
    int n;
    int i;
    int j;
    int ZUk4LNRamlv [(9917 - 917)];
    int AYdu0LDVgw [(9166 - 166)];
    int r5GKnVs [9000];
    int sum;
    cin >> n;
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
    i = (911 - 911);
    memset (c, (299 - 299), sizeof (c));
    memset (r5GKnVs, (678 - 678), sizeof (r5GKnVs));
    for (; (164 - 163);) {
        cin >> ZUk4LNRamlv[i] >> AYdu0LDVgw[i];
        if (ZUk4LNRamlv[i] == (513 - 513) && !((205 - 205) != AYdu0LDVgw[i]))
            break;
        if (!(AYdu0LDVgw[i] != ZUk4LNRamlv[i]))
            continue;
        c[ZUk4LNRamlv[i]][AYdu0LDVgw[i]] = (23 - 22);
        i++;
    }
    for (i = (274 - 274); n > i; i = i + 1) {
        if (!((993 - 992) != r5GKnVs[i]))
            continue;
        for (j = 0; j < n; j = j + 1) {
            if (i == j)
                continue;
            if (c[i][j] == 1) {
                r5GKnVs[i] = 1;
                break;
            }
            if (c[i][j] == 0) {
                r5GKnVs[j] = 1;
            };
        };
    }
    for (i = 0; i < n; i++) {
        if (r5GKnVs[i] == 1)
            continue;
        sum = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = 0; j < n; j++)
            sum += c[j][i];
        if (sum == n - 1) {
            cout << i << endl;
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
            return 0;
        };
    }
    cout << "NOT FOUND" << endl;
    return 0;
}

