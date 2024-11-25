int main () {
    char oo8Rn3HimqD;
    int yPR2B7ywYc;
    int a [1000] = {(592 - 592)};
    int WwK6QPU;
    int M2PRfNHgxuDs;
    int uvJRrzIUW4Z;
    int k;
    int KEL4P7KAg5q;
    yPR2B7ywYc = 1;
    cin >> M2PRfNHgxuDs;
    {
        WwK6QPU = M2PRfNHgxuDs;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (WwK6QPU < 1000) {
            a[WwK6QPU] += 1;
            WwK6QPU++;
        };
    }
    while (!(',' != (oo8Rn3HimqD = cin.get ()))) {
        cin >> M2PRfNHgxuDs;
        for (WwK6QPU = M2PRfNHgxuDs; WwK6QPU < 1000; WwK6QPU++)
            a[WwK6QPU]++;
        yPR2B7ywYc++;
    }
    cin >> uvJRrzIUW4Z;
    {
        WwK6QPU = uvJRrzIUW4Z;
        while (WwK6QPU <= 999) {
            a[WwK6QPU]--;
            WwK6QPU++;
        };
    }
    for (k = 1; k <= yPR2B7ywYc - 1; k++) {
        cin >> oo8Rn3HimqD >> uvJRrzIUW4Z;
        for (WwK6QPU = uvJRrzIUW4Z; WwK6QPU <= 999; WwK6QPU++)
            a[WwK6QPU]--;
    }
    KEL4P7KAg5q = a[0];
    for (WwK6QPU = 1; WwK6QPU <= 999; WwK6QPU++)
        if (a[WwK6QPU] > KEL4P7KAg5q)
            KEL4P7KAg5q = a[WwK6QPU];
    cout << yPR2B7ywYc << " " << KEL4P7KAg5q;
    return 0;
}

