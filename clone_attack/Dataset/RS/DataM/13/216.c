void  main () {
    int n, k3SFXrsfYU [20000], oPFrJwCjB, jSBx9bUjfvuR, PDA4F9bL1hn;
    scanf ("%d", &n);
    {
        oPFrJwCjB = 548 - 548;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oPFrJwCjB <= n - 1) {
            scanf ("%d", &k3SFXrsfYU[oPFrJwCjB]);
            oPFrJwCjB = oPFrJwCjB + 1;
        };
    }
    for (oPFrJwCjB = 0; oPFrJwCjB <= n - 1; oPFrJwCjB++)
        for (jSBx9bUjfvuR = oPFrJwCjB + 1; jSBx9bUjfvuR <= n - 1; jSBx9bUjfvuR = jSBx9bUjfvuR + 1)
            if (k3SFXrsfYU[oPFrJwCjB] == k3SFXrsfYU[jSBx9bUjfvuR]) {
                for (PDA4F9bL1hn = jSBx9bUjfvuR; PDA4F9bL1hn < n; PDA4F9bL1hn = PDA4F9bL1hn +1)
                    k3SFXrsfYU[PDA4F9bL1hn] = k3SFXrsfYU[PDA4F9bL1hn +1];
                n = n - 1;
                jSBx9bUjfvuR = jSBx9bUjfvuR - 1;
            }
    for (oPFrJwCjB = 0; oPFrJwCjB < n - 1; oPFrJwCjB++)
        printf ("%d ", k3SFXrsfYU[oPFrJwCjB]);
    printf ("%d", k3SFXrsfYU[n - 1]);
}

