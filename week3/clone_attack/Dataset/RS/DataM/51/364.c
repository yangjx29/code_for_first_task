int i6Fiv3OVr, ZaBmVoEn, cSTLlwsjVe36, j, V2WPknEriML [(1947 - 947)], fNIX8BwL9k3, tn, tt;
char c [1000];

int nk38JH62a (int RHFsUEa45vX, int b3ZJS5DA) {
    int VKHNXs8;
    {
        VKHNXs8 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i6Fiv3OVr > VKHNXs8) {
            if (!(c[b3ZJS5DA + VKHNXs8] == c[RHFsUEa45vX +VKHNXs8]))
                return 0;
            VKHNXs8 = VKHNXs8 +1;
        };
    }
    return 1;
}

int main () {
    scanf ("%d%s", &i6Fiv3OVr, c);
    ZaBmVoEn = strlen (c);
    {
        cSTLlwsjVe36 = ZaBmVoEn -i6Fiv3OVr;
        while (0 <= cSTLlwsjVe36) {
            {
                j = cSTLlwsjVe36;
                tt = 0;
                while (ZaBmVoEn -i6Fiv3OVr >= j) {
                    if (nk38JH62a (cSTLlwsjVe36, j))
                        tt = tt + 1;
                    j++;
                };
            }
            if (tt > fNIX8BwL9k3)
                V2WPknEriML[0] = 1, V2WPknEriML[1] = cSTLlwsjVe36, fNIX8BwL9k3 = tt;
            else {
                if (tt == fNIX8BwL9k3)
                    V2WPknEriML[++V2WPknEriML[0]] = cSTLlwsjVe36;
            }
            cSTLlwsjVe36 = cSTLlwsjVe36 - 1;
        };
    }
    if (fNIX8BwL9k3 > 1) {
        printf ("%d\n", fNIX8BwL9k3);
        {
            cSTLlwsjVe36 = 0;
            while (cSTLlwsjVe36) {
                {
                    j = 0;
                    while (j < i6Fiv3OVr) {
                        printf ("%c", c[V2WPknEriML[cSTLlwsjVe36] + j]);
                        j++;
                    };
                }
                cSTLlwsjVe36--;
                printf ("\n");
            };
        };
    }
    else
        printf ("NO");
    return 0;
}

