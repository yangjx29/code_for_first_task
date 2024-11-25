int main () {
    float vqpl42y [45];
    int n;
    int bQKr0c;
    int ZgImfkEyN = 0, W9FRzJ2vOGD5 = 0;
    char R2UXb9sw [10];
    float vHLVPBeIGlJ [(275 - 230)];
    float em8nRpQUf [45];
    int VMwVUQC3h;
    int uDjh5ZmCwLpr;
    float gbETn7FkR0;
    scanf ("%d", &n);
    for (bQKr0c = 0; n > bQKr0c; bQKr0c = bQKr0c + 1) {
        vHLVPBeIGlJ[bQKr0c] = 0;
        vqpl42y[bQKr0c] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        em8nRpQUf[bQKr0c] = 0;
    }
    for (bQKr0c = 0; n > bQKr0c; bQKr0c = bQKr0c + 1) {
        scanf ("%s%f", R2UXb9sw, &vHLVPBeIGlJ[bQKr0c]);
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
        if (!strcmp (R2UXb9sw, "male")) {
            vqpl42y[ZgImfkEyN] = vHLVPBeIGlJ[bQKr0c];
            ZgImfkEyN = ZgImfkEyN +1;
        }
        else {
            em8nRpQUf[W9FRzJ2vOGD5] = vHLVPBeIGlJ[bQKr0c];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            W9FRzJ2vOGD5++;
        };
    }
    uDjh5ZmCwLpr = W9FRzJ2vOGD5;
    VMwVUQC3h = ZgImfkEyN;
    for (bQKr0c = 0; bQKr0c < VMwVUQC3h -1; bQKr0c = bQKr0c + 1)
        for (ZgImfkEyN = VMwVUQC3h -1; ZgImfkEyN > bQKr0c; ZgImfkEyN = ZgImfkEyN -1) {
            if (vqpl42y[ZgImfkEyN -1] > vqpl42y[ZgImfkEyN]) {
                gbETn7FkR0 = vqpl42y[ZgImfkEyN];
                vqpl42y[ZgImfkEyN] = vqpl42y[ZgImfkEyN -1];
                vqpl42y[ZgImfkEyN -1] = gbETn7FkR0;
            };
        }
    for (bQKr0c = 0; bQKr0c < uDjh5ZmCwLpr - 1; bQKr0c = bQKr0c + 1)
        for (ZgImfkEyN = uDjh5ZmCwLpr - 1; ZgImfkEyN > bQKr0c; ZgImfkEyN--) {
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
            if (em8nRpQUf[ZgImfkEyN] > em8nRpQUf[ZgImfkEyN -1]) {
                gbETn7FkR0 = em8nRpQUf[ZgImfkEyN];
                em8nRpQUf[ZgImfkEyN] = em8nRpQUf[ZgImfkEyN -1];
                em8nRpQUf[ZgImfkEyN -1] = gbETn7FkR0;
            };
        }
    for (bQKr0c = 0; bQKr0c < VMwVUQC3h; bQKr0c = bQKr0c + 1)
        printf ("%.2f ", vqpl42y[bQKr0c]);
    for (bQKr0c = 0; bQKr0c < uDjh5ZmCwLpr - 1; bQKr0c++)
        printf ("%.2f ", em8nRpQUf[bQKr0c]);
    printf ("%.2f", em8nRpQUf[bQKr0c]);
    return 0;
}

