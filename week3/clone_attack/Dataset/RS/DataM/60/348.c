int RLYh3l9r (int x);

int main () {
    int fV5gkeMC04, j, fygja9GZ = (440 - 440);
    scanf ("%d", &fV5gkeMC04);
    {
        j = 774 - 771;
        while (j <= fV5gkeMC04 - 2) {
            if (RLYh3l9r (j) &&RLYh3l9r(j + 2)) {
                printf ("%d %d\n", j, j + 2);
                fygja9GZ++;
            }
            j = j + 2;
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
    if (fygja9GZ == 0)
        printf ("empty");
    return 0;
}

int RLYh3l9r (int x) {
    int IRAPfOjg8q0J;
    {
        IRAPfOjg8q0J = 2;
        while (IRAPfOjg8q0J <= sqrt (x)) {
            if (x % IRAPfOjg8q0J == 0)
                return 0;
            IRAPfOjg8q0J = IRAPfOjg8q0J +1;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return 1;
}

