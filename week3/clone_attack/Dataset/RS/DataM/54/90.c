int f (int e63jnEIr80G, int sXqNc2ySI8f0) {
    int YnAhJbQE3 [100];
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
    int TLklfyo;
    for (YnAhJbQE3[1] = e63jnEIr80G + sXqNc2ySI8f0;; YnAhJbQE3[1] += e63jnEIr80G) {
        int TLklfyo = 2;
        while (e63jnEIr80G >= TLklfyo) {
            if (YnAhJbQE3[TLklfyo -1] % (e63jnEIr80G - 1) != 0)
                break;
            YnAhJbQE3[TLklfyo] = YnAhJbQE3[TLklfyo -1] / (e63jnEIr80G - 1) * e63jnEIr80G + sXqNc2ySI8f0;
            if (TLklfyo == e63jnEIr80G)
                return YnAhJbQE3[e63jnEIr80G];
            TLklfyo++;
        };
    };
}

int main () {
    int m;
    int e63jnEIr80G;
    int sXqNc2ySI8f0;
    cin >> e63jnEIr80G >> sXqNc2ySI8f0;
    m = f (e63jnEIr80G, sXqNc2ySI8f0);
    cout << m;
}

