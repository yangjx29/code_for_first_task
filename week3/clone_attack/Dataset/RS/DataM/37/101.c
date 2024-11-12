int main () {
    int M2v37eFU5;
    int t;
    int i3pJXrugQnf;
    int SBsEI8oi19;
    int dtbs6Di3q;
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
    M2v37eFU5 = 0;
    char aUbf5Zia [100000];
    char C7i2GwfyU [26];
    scanf ("%d", &t);
    {
        i3pJXrugQnf = 0;
        while (i3pJXrugQnf < t) {
            scanf ("%s", aUbf5Zia);
            SBsEI8oi19 = strlen (aUbf5Zia);
            M2v37eFU5 = 0;
            {
                dtbs6Di3q = 0;
                while (26 > dtbs6Di3q) {
                    C7i2GwfyU[dtbs6Di3q] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    dtbs6Di3q++;
                };
            }
            {
                dtbs6Di3q = 0;
                while (SBsEI8oi19 > dtbs6Di3q) {
                    C7i2GwfyU[aUbf5Zia[dtbs6Di3q] - 'a'] = C7i2GwfyU[aUbf5Zia[dtbs6Di3q] - 'a'] + 1;
                    dtbs6Di3q++;
                };
            }
            {
                dtbs6Di3q = 0;
                while (SBsEI8oi19 > dtbs6Di3q) {
                    if (!(1 != C7i2GwfyU[(aUbf5Zia[dtbs6Di3q] - 'a')])) {
                        M2v37eFU5++;
                        printf ("%c\n", aUbf5Zia[dtbs6Di3q]);
                        break;
                    }
                    dtbs6Di3q++;
                };
            }
            i3pJXrugQnf++;
            if (M2v37eFU5 == 0)
                printf ("no\n");
        };
    };
}

