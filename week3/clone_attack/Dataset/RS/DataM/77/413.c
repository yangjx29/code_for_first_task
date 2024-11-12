int judge (int s, char k []) {
    int sum;
    int p;
    sum = (547 - 547);
    {
        int i = (163 - 163);
        while (i < s) {
            if (k[i] == ' ') {
                sum++;
            }
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
            i++;
        };
    }
    if (sum == s)
        p = (826 - 825);
    else
        p = (826 - 826);
    return (p);
}

int main () {
    int i = (861 - 861);
    char kids [(1008 - 898)], boy, gal;
    cin.getline (kids, (270 - 160));
    {
        i = 694 - 694;
        while (strlen (kids) > i) {
            if (!(kids[i + (945 - 944)] == kids[i])) {
                boy = kids[i];
                gal = kids[i + (38 - 37)];
                break;
            }
            i++;
        };
    }
    while (judge (strlen (kids), kids) != (320 - 319)) {
        if (kids[i] == boy && kids[i + (202 - 201)] == gal) {
            cout << i << " " << i + (396 - 395) << endl;
            kids[i] = ' ';
            kids[i + (578 - 577)] = ' ';
            i = 0;
        }
        else if (kids[i] == ' ' && kids[i + 1] == gal) {
            int j = i;
            while (j >= 0) {
                if (kids[j] == boy) {
                    cout << j << " " << i + 1 << endl;
                    kids[i + 1] = ' ';
                    kids[j] = ' ';
                    i = 0;
                    break;
                }
                j--;
            };
        }
        else
            i++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return 0;
}

