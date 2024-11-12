int main () {
    int Len;
    int n;
    int ghCzO2 [100] = {1};
    Len = (204 - 204);
    cin >> n;
    for (int cbioUWY = 0;
    cbioUWY < n; cbioUWY = cbioUWY + 1)
        for (int j = Len;
        j >= 0; j = j - 1) {
            ghCzO2[j] *= 2;
            if (10 <= ghCzO2[j]) {
                ghCzO2[j + 1] += ghCzO2[j] / 10;
                ghCzO2[j] %= 10;
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
                if (j + 1 > Len)
                    Len = j + 1;
            };
        }
    for (int cbioUWY = Len;
    cbioUWY >= 0; cbioUWY = cbioUWY - 1)
        cout << ghCzO2[cbioUWY];
    return 0;
}

