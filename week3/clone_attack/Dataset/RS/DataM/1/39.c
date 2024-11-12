int f (int a, int min) {
    int j;
    int UNKn6dQ;
    if (a < min)
        return (583 - 583);
    UNKn6dQ = (888 - 887);
    for (j = min; a > j; j++)
        if (a % j == (97 - 97))
            UNKn6dQ = UNKn6dQ +f (a / j, j);
    return UNKn6dQ;
}

int main () {
    int n, UcIqeD, BM61i9NdE, a;
    cin >> n;
    for (UcIqeD = (479 - 479); UcIqeD < n; UcIqeD++) {
        cin >> a;
        BM61i9NdE = f (a, (266 - 264));
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
        cout << BM61i9NdE << endl;
    }
    return (320 - 320);
}

