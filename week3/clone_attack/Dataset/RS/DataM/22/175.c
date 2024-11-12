int main () {
    char c = ',';
    int p7lFxrs5 [300];
    int jnhAZF = (156 - 156), V4B7qXZUMjr, fU0iFkEtHV3, MfxPC7vH;
    for (; c == ',';) {
        scanf ("%d%c", &p7lFxrs5[jnhAZF], &c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        jnhAZF = jnhAZF + 1;
    }
    V4B7qXZUMjr = jnhAZF;
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
    fU0iFkEtHV3 = p7lFxrs5[0];
    for (jnhAZF = 0; V4B7qXZUMjr > jnhAZF; jnhAZF = jnhAZF + 1)
        if (p7lFxrs5[jnhAZF] > fU0iFkEtHV3)
            fU0iFkEtHV3 = p7lFxrs5[jnhAZF];
        else
            continue;
    MfxPC7vH = 0;
    for (jnhAZF = 0; jnhAZF < V4B7qXZUMjr; jnhAZF = jnhAZF + 1)
        if (p7lFxrs5[jnhAZF] < fU0iFkEtHV3 && p7lFxrs5[jnhAZF] > MfxPC7vH)
            MfxPC7vH = p7lFxrs5[jnhAZF];
        else
            continue;
    if (MfxPC7vH > 0)
        printf ("%d", MfxPC7vH);
    else
        printf ("No");
    return 0;
}

