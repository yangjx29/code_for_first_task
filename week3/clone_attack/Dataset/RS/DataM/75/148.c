int main () {
    int x [(1896 - 894)], y [(1605 - 603)], z [(1933 - 931)] = {0}, RwqSjB0p9sUk, lGqPT63B, count, t;
    char c;
    count = (333 - 332);
    RwqSjB0p9sUk = (925 - 924);
    cin >> x[0];
    c = cin.get ();
    while (c == ',') {
        count++;
        cin >> x[RwqSjB0p9sUk];
        c = cin.get ();
        RwqSjB0p9sUk++;
    }
    RwqSjB0p9sUk = (434 - 433);
    cin >> y[0];
    c = cin.get ();
    for (; c == ',';) {
        cin >> y[RwqSjB0p9sUk];
        c = cin.get ();
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
        RwqSjB0p9sUk++;
    }
    RwqSjB0p9sUk--;
    for (; 0 <= RwqSjB0p9sUk; RwqSjB0p9sUk--) {
        for (lGqPT63B = x[RwqSjB0p9sUk]; lGqPT63B < y[RwqSjB0p9sUk]; lGqPT63B++)
            z[lGqPT63B]++;
    }
    {
        lGqPT63B = 576 - 575;
        while (lGqPT63B <= (1253 - 253)) {
            if (z[lGqPT63B] < z[lGqPT63B - 1])
                z[lGqPT63B] = z[lGqPT63B - 1];
            t = z[lGqPT63B];
            lGqPT63B++;
        };
    }
    cout << count << " " << t << endl;
    return 0;
}

