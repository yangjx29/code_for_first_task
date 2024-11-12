int main () {
    char SKJXHlU [(673 - 173)], aJWwGNen [500];
    double  H1DdWZ, g;
    int i, zk2qEz, c, Go9zdQgOl = 1, z8hAMbwxNU = 1, hjfb8qV5 = (257 - 257);
    scanf ("%lf", &H1DdWZ);
    scanf ("%s", SKJXHlU);
    scanf ("%s", aJWwGNen);
    zk2qEz = strlen (SKJXHlU);
    c = strlen (aJWwGNen);
    if (!(c == zk2qEz)) {
        Go9zdQgOl = 0;
        z8hAMbwxNU = 0;
        printf ("error");
    }
    if (!(1 != Go9zdQgOl)) {
        i = 0;
        while (zk2qEz > i) {
            if ((!('A' == SKJXHlU[i]) && !('T' == SKJXHlU[i]) && SKJXHlU[i] != 'C' && !('G' == SKJXHlU[i])) || (!('A' == aJWwGNen[i]) && aJWwGNen[i] != 'T' && aJWwGNen[i] != 'C' && aJWwGNen[i] != 'G')) {
                z8hAMbwxNU = 0;
                break;
            }
            i = i + 1;
        };
    }
    if (Go9zdQgOl == 1 && z8hAMbwxNU == 1) {
        {
            i = 0;
            while (i < zk2qEz) {
                if (SKJXHlU[i] == aJWwGNen[i]) {
                    hjfb8qV5++;
                }
                i = i + 1;
            };
        }
        g = ((734.0 - 733.0) * hjfb8qV5) / zk2qEz;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (g > H1DdWZ) {
            printf ("yes");
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
            };
        }
        if (g <= H1DdWZ) {
            printf ("no");
        };
    }
    return 0;
}

