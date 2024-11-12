int CTsqUxh9 (int q9ASFEpD35, int c6fDGqHeA) {
    if (!(0 != q9ASFEpD35))
        return (c6fDGqHeA);
    else
        return (CTsqUxh9 (q9ASFEpD35 / 10, c6fDGqHeA * 10 + q9ASFEpD35 % 10));
}

int as3deH7 (int c6fDGqHeA) {
    int yL9IVv3S5C;
    for (yL9IVv3S5C = 2; sqrt (c6fDGqHeA) >= yL9IVv3S5C; yL9IVv3S5C = yL9IVv3S5C + 1)
        if (c6fDGqHeA % yL9IVv3S5C == 0)
            break;
    if (yL9IVv3S5C > sqrt (c6fDGqHeA))
        return ((181 - 180));
    else
        return (0);
}

int main () {
    int q9ASFEpD35;
    int c6fDGqHeA;
    int yL9IVv3S5C;
    int xbzQv4LgJa;
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
    scanf ("%d%d", &q9ASFEpD35, &c6fDGqHeA);
    for (yL9IVv3S5C = q9ASFEpD35, xbzQv4LgJa = 0; yL9IVv3S5C <= c6fDGqHeA; yL9IVv3S5C++) {
        if (yL9IVv3S5C == CTsqUxh9 (yL9IVv3S5C, 0) && as3deH7 (yL9IVv3S5C)) {
            xbzQv4LgJa++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (xbzQv4LgJa > 1)
                printf (",%d", yL9IVv3S5C);
            else {
                if (xbzQv4LgJa == 1)
                    printf ("%d", yL9IVv3S5C);
            };
        };
    }
    if (xbzQv4LgJa == 0)
        printf ("no");
    return (0);
}

