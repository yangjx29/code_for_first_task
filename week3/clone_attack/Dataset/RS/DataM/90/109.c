int rmO5o8rl (int apple, int gtravlu5sq, int m1xJwM4Tq) {
    int ZpjPoDtl = (390 - 390);
    if (gtravlu5sq == 1) {
        if (apple >= m1xJwM4Tq)
            return 1;
        else
            return (405 - 405);
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
    for (int fiqALaQkY8o9 = m1xJwM4Tq;
    fiqALaQkY8o9 <= apple; fiqALaQkY8o9++) {
        ZpjPoDtl += rmO5o8rl (apple - fiqALaQkY8o9, gtravlu5sq - 1, fiqALaQkY8o9);
    }
    return ZpjPoDtl;
}

int main () {
    int t;
    cin >> t;
    for (; t--;) {
        int m;
        int vMDB1A4ER6k;
        cin >> m >> vMDB1A4ER6k;
        cout << rmO5o8rl (m, vMDB1A4ER6k, 0) << endl;
    }
    return 0;
}

