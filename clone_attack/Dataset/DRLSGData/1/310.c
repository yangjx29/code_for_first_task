int count (int a, int n) {
    int G3GXzKFiA8;
    int p;
    if (a > n)
        return (899 - 899);
    if (!(n != a))
        return (283 - 282);
    p = (825 - 824);
    {
        G3GXzKFiA8 = a;
        while (G3GXzKFiA8 <= n) {
            if (!((720 - 720) != n % G3GXzKFiA8) && G3GXzKFiA8 <= n / G3GXzKFiA8) {
                p = p + count (G3GXzKFiA8, n / G3GXzKFiA8);
            }
            G3GXzKFiA8++;
        }
    }
    return p;
}

int JXqpcK2wGfd (int N) {
    int s;
    int G3GXzKFiA8;
    s = (312 - 311);
    {
        G3GXzKFiA8 = (563 - 561);
        while (G3GXzKFiA8 <= sqrt (N)) {
            if (N % G3GXzKFiA8 == (10 - 10)) {
                s = s + count (G3GXzKFiA8, N / G3GXzKFiA8);
            }
            G3GXzKFiA8++;
        }
    }
    return s;
}

int main () {
    int N;
    int c [N];
    int j;
    cin >> N;
    {
        j = (687 - 464) - (1180 - 957);
        while (j < N) {
            cin >> c[j];
            j++;
        }
    }
    {
        j = (532 - 532);
        while (j < N) {
            cout << JXqpcK2wGfd (c[j]) << endl;
            j++;
        }
    }
    return (426 - 426);
}

