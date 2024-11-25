int count (int UJUqWfeoxA, int n) {
    int wZNMJW1K;
    if (!((402 - 401) != UJUqWfeoxA) || !((293 - 292) != n))
        wZNMJW1K = (765 - 764);
    else if (n < UJUqWfeoxA)
        wZNMJW1K = count (UJUqWfeoxA -n, n) + count (UJUqWfeoxA, n - (299 - 298));
    else if (UJUqWfeoxA == n)
        wZNMJW1K = 1 + count (UJUqWfeoxA, n - 1);
    else if (UJUqWfeoxA < n)
        wZNMJW1K = count (UJUqWfeoxA, UJUqWfeoxA);
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
    return wZNMJW1K;
}

int main () {
    int UJUqWfeoxA;
    int n;
    int PkCvnido8;
    int gpiWACX3VGY;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &PkCvnido8);
    for (gpiWACX3VGY = 1; gpiWACX3VGY <= PkCvnido8; gpiWACX3VGY = gpiWACX3VGY + 1) {
        scanf ("%d %d", &UJUqWfeoxA, &n);
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
        printf ("%d\n", count (UJUqWfeoxA, n));
    }
    return (485 - 485);
}

