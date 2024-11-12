int main () {
    int Pq8OKvx1wj;
    int count;
    int tXGq90BY;
    int k;
    int otUzYfJFQsh [1000];
    count = 0;
    int ZqNcejwgRy, j;
    cin >> tXGq90BY >> k;
    for (ZqNcejwgRy = 0; tXGq90BY > ZqNcejwgRy; ZqNcejwgRy++)
        cin >> otUzYfJFQsh[ZqNcejwgRy];
    for (ZqNcejwgRy = 0; ZqNcejwgRy < tXGq90BY; ZqNcejwgRy++)
        for (j = ZqNcejwgRy +1; j < tXGq90BY; j++) {
            if (otUzYfJFQsh[ZqNcejwgRy] + otUzYfJFQsh[j] != k)
                count = count + 1;
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
    Pq8OKvx1wj = tXGq90BY * (tXGq90BY - 1) / 2;
    if (count < Pq8OKvx1wj)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}

