int main () {
    int UUygXCQvwM [(917 - 816)] = {0};
    int Fw6qoXOG, g6ZYyURv, j, num = 1;
    UUygXCQvwM[0] = 1;
    cin >> Fw6qoXOG;
    for (g6ZYyURv = 0; Fw6qoXOG > g6ZYyURv; g6ZYyURv = g6ZYyURv + 1) {
        for (j = 0; num > j; j = j + 1) {
            UUygXCQvwM[j] = UUygXCQvwM[j] * 2;
        }
        for (j = 0; num > j; j++) {
            if (10 <= UUygXCQvwM[j]) {
                UUygXCQvwM[j] -= 10;
                UUygXCQvwM[j + 1]++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (UUygXCQvwM[num] == 1)
            num = num + 1;
    }
    for (g6ZYyURv = num - 1; g6ZYyURv >= 0; g6ZYyURv--)
        cout << UUygXCQvwM[g6ZYyURv];
    return 0;
}

