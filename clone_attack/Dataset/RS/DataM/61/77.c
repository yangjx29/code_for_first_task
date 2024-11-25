int main () {
    int n, MTrbIxNcd [20], UlDjbYV [20], enapP3;
    MTrbIxNcd[(502 - 502)] = (824 - 823);
    MTrbIxNcd[(491 - 490)] = 1;
    {
        enapP3 = 2;
        while (19 >= enapP3) {
            MTrbIxNcd[enapP3] = MTrbIxNcd[enapP3 - 1] + MTrbIxNcd[enapP3 - 2];
            enapP3++;
        };
    }
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
    cin >> n;
    for (enapP3 = (974 - 974); enapP3 <= n - 1; enapP3 = enapP3 + 1)
        cin >> UlDjbYV[enapP3];
    for (enapP3 = 0; enapP3 <= n - 1; enapP3 = enapP3 + 1)
        cout << MTrbIxNcd[UlDjbYV[enapP3] - 1] << endl;
    return 0;
}

