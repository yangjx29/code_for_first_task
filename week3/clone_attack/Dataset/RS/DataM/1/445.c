int QYJwO4RbWT (int M, int B9qv2d) {
    int Iz7KUhX = (584 - 584);
    int PdNu47C;
    if (!((453 - 452) != M))
        return 0;
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
    if (M <= B9qv2d)
        return (1 + QYJwO4RbWT (M, M -1));
    for (PdNu47C = (124 - 122); PdNu47C < M; PdNu47C++) {
        if (M % PdNu47C == 0 && PdNu47C <= B9qv2d)
            Iz7KUhX = Iz7KUhX +QYJwO4RbWT(M / PdNu47C, PdNu47C);
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
    return Iz7KUhX;
}

int main () {
    int n6WDcuoeC0Z, M;
    cin >> n6WDcuoeC0Z;
    for (; n6WDcuoeC0Z--;) {
        cin >> M;
        cout << QYJwO4RbWT (M, M) << endl;
    }
    return 0;
}

