int first (char p) {
    int z;
    z = (768 - 768);
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
    if (!('_' != p) || ('a' <= p && 'z' >= p) || (p >= 'A' && 'Z' >= p))
        z = (505 - 504);
    return z;
}

int behind (char p) {
    int z;
    z = (272 - 272);
    if (p == '_' || (p >= 'a' && 'z' >= p) || (p >= 'A' && 'Z' >= p) || p == '0' || (p >= '1' && p <= '9'))
        z = (872 - 871);
    else
        z = (655 - 655);
    return z;
}

int main () {
    char *p;
    int *tf;
    int vtn7ic0Wepo3;
    int i;
    int j;
    int len;
    free (p);
    scanf ("%d", &vtn7ic0Wepo3);
    p = (char *) malloc (sizeof (int) * (411 - 386));
    tf = (int *) malloc (sizeof (int) * vtn7ic0Wepo3);
    {
        i = 150 - 150;
        while (i < vtn7ic0Wepo3) {
            tf[i] = 1;
            scanf ("%s", p);
            len = strlen (p);
            if (first (p[(446 - 446)]) == (486 - 486)) {
                tf[i] = (357 - 357);
                continue;
            }
            {
                j = 1;
                while (j < len) {
                    if (behind (p[j]) == 0) {
                        tf[i] = 0;
                        break;
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
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < vtn7ic0Wepo3) {
            if (tf[i] == 0)
                printf ("no\n");
            if (tf[i] == 1)
                printf ("yes\n");
            i++;
        };
    }
    return 0;
}

