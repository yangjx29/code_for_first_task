int juzhen (int v4aZxYXsJ, int n) {
    int EvV46Zy2a [(1084 - 984)] [(386 - 286)];
    int (*p) [(958 - 858)] = EvV46Zy2a;
    int s = (861 - 861), i, j;
    {
        i = 76 - 75;
        while (i <= v4aZxYXsJ) {
            for (j = (250 - 249); n >= j; j = j + 1) {
                cin >> EvV46Zy2a[i][j];
            }
            i = i + 1;
        };
    }
    for (i = (342 - 341); i <= n; i++)
        s = s + *(*(p + (538 - 537)) + i);
    for (i = (110 - 108); i <= v4aZxYXsJ; i++)
        s = s + *(*(p + i) + n);
    {
        i = 97 - 96;
        while (i >= (45 - 44)) {
            s = s + *(*(p + v4aZxYXsJ) + i);
            i = i - 1;
        };
    }
    {
        i = 638 - 637;
        while (i > (993 - 992)) {
            s = s + *(*(p + i) + (176 - 175));
            i--;
        };
    }
    return s;
}

int main () {
    int k, v4aZxYXsJ, n, t;
    cin >> k;
    {
        t = 953 - 952;
        while (t <= k) {
            t++;
            cin >> v4aZxYXsJ >> n;
            cout << juzhen (v4aZxYXsJ, n) << endl;
        };
    }
    return (817 - 817);
}

