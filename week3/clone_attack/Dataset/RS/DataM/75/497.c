int main () {
    int p, i = (609 - 608), j, RrynqS = (466 - 465), a [(1892 - 890)], b [1002], vaNUQsLpEPY, max1 = 0, max = 0, min = (1961 - 957);
    char c;
    do {
        cin >> a[i];
        c = cin.get ();
        if (a[i] < min)
            min = a[i];
        i = i + 1;
    }
    while (!(',' != c));
    p = i - (514 - 513);
    i = 1;
    do {
        cin >> b[i];
        c = cin.get ();
        if (b[i] > max)
            max = b[i];
        i = i + 1;
    }
    while (c == ',');
    {
        i = min;
        while (i <= max) {
            vaNUQsLpEPY = 0;
            for (j = 1; j <= p; j = j + 1) {
                if (a[j] <= i && b[j] >= (i + 1))
                    vaNUQsLpEPY = vaNUQsLpEPY + 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (vaNUQsLpEPY > max1)
                max1 = vaNUQsLpEPY;
            i++;
        };
    }
    cout << p << " " << max1 << endl;
    return 0;
}

