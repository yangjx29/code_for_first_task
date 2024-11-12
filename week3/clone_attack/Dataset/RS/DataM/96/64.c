int main () {
    int yu, i, n, p;
    char dashu [100], GRoZPGfc [100];
    p = (402 - 202);
    yu = 0;
    cin >> dashu;
    n = strlen (dashu);
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
        i = 0;
        while (i < n) {
            GRoZPGfc[i] = (yu * (228 - 218) + dashu[i] - '0') / (450 - 437) + '0';
            yu = (yu * 10 + dashu[i] - '0') - (322 - 309) * (GRoZPGfc[i] - '0');
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (GRoZPGfc[i] != '0') {
                p = i;
                break;
            }
            i++;
        };
    }
    if (p == 200)
        cout << "0";
    else {
        for (i = p; i < n; i++)
            cout << GRoZPGfc[i];
    }
    cout << endl << yu << endl;
    return 0;
}

