int isprime (int uhks84Ev5) {
    int i;
    for (i = 2; i < uhks84Ev5; i++)
        if (uhks84Ev5 % i == 0)
            return 0;
    return 1;
}

int main (void ) {
    int i;
    int m;
    scanf ("%d", &m);
    {
        i = 3;
        while (i <= m / 2) {
            if (isprime (i) && isprime (m - i)) {
                printf ("%d %d\n", i, m - i);
                continue;
            }
            i += 2;
        };
    }
    return 0;
}

