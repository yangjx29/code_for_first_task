int main () {
    int m;
    m = 0;
    int Set [(5883 - 882)];
    int SetN;
    SetN = (751 - 750);
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    i = 0;
    j = 0;
    scanf ("%d", &m);
    Set[0] = 0;
    Set[(409 - 408)] = (117 - 115);
    for (i = 2; i <= m; i++) {
        for (j = 1; j <= SetN; j = j + 1) {
            if (!(0 != i % Set[j]))
                break;
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
            };
        }
        if (j == SetN +1) {
            SetN++;
            Set[SetN] = i;
        };
    }
    for (i = 1; i <= SetN; i++) {
        if (Set[i] > m / 2)
            break;
        for (j = i; j <= SetN &&Set[i] + Set[j] <= m; j = j + 1) {
            if (Set[i] + Set[j] == m) {
                printf ("%d %d\n", Set[i], Set[j]);
            };
        };
    }
    return 0;
}

