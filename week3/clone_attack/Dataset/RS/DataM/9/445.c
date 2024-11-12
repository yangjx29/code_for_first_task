int main () {
    char c [100] [100], b [100] [100], d [100] [100], x [100];
    int a [(578 - 478)];
    int MabKDOCE [(539 - 439)];
    int f [(592 - 492)];
    int n, p = -(786 - 785), q = -(841 - 840), VD6UgJZ, z, i;
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
    scanf ("%d", &n);
    {
        i = 910 - 910;
        while (n > i) {
            scanf ("%s %d", c[i], &a[i]);
            if (60 <= a[i]) {
                p++;
                MabKDOCE[p] = a[i];
                strcpy (b[p], c[i]);
            }
            if (60 > a[i]) {
                q++;
                f[q] = a[i];
                strcpy (d[q], c[i]);
            }
            i = i + 1;
        };
    }
    for (VD6UgJZ = (195 - 194); p + 1 >= VD6UgJZ; VD6UgJZ = VD6UgJZ +1) {
        for (i = (78 - 78); p + 1 - VD6UgJZ > i; i++) {
            if (MabKDOCE[i + 1] > MabKDOCE[i]) {
                z = MabKDOCE[i];
                MabKDOCE[i] = MabKDOCE[i + 1];
                MabKDOCE[i + 1] = z;
                strcpy (x, b[i]);
                strcpy (b[i], b[i + 1]);
                strcpy (b[i + 1], x);
            };
        };
    }
    {
        i = 0;
        while (i <= p) {
            puts (b [i]);
            i++;
        };
    }
    {
        i = 0;
        while (i <= q) {
            puts (d [i]);
            i++;
        };
    }
    return 0;
}

