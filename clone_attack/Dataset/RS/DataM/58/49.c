int main () {
    char *p [(283 - 183)];
    char c;
    int i, z4MXq6z, n, k;
    scanf ("%d\n", &n);
    for (i = 0; n > i; i++) {
        gets (p [i]);
        p[i] = (char *) malloc ((688 - 588) * sizeof (char));
    }
    {
        i = 0;
        while (n > i) {
            for (z4MXq6z = 0; strlen (p[i]) > z4MXq6z; z4MXq6z = z4MXq6z + 1) {
                c = *(*(p + i) + z4MXq6z);
                k = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (!(0 != z4MXq6z))
                    if (('a' > c || c > 'z') && (c < 'A' || 'Z' < c) && c != '_') {
                        k = 0;
                        break;
                    }
                if (!(0 == z4MXq6z))
                    if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && c != '_' && (c < '0' || c > '9')) {
                        k = 0;
                        break;
                    };
            }
            i++;
            printf ("%d\n", k);
        };
    }
    return 0;
}

