int main () {
    int NdhpUv6ncG2, su6CYLO, JnihCK, JqWN1Is, m;
    int a [1000];
    scanf ("%d %d", &NdhpUv6ncG2, &su6CYLO);
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
    for (JnihCK = 0; JnihCK < NdhpUv6ncG2; JnihCK = JnihCK +1) {
        scanf ("%d", &a[JnihCK]);
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
    for (JnihCK = 0; JnihCK < NdhpUv6ncG2; JnihCK++) {
        for (JqWN1Is = JnihCK +1; JqWN1Is < NdhpUv6ncG2; JqWN1Is = JqWN1Is +1) {
            m = a[JnihCK] + a[JqWN1Is];
            if (m == su6CYLO) {
                break;
            };
        }
        if (m == su6CYLO)
            break;
        if (JnihCK == NdhpUv6ncG2 -1 && m != su6CYLO)
            ;
    }
    return 0;
}

