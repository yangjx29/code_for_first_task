int main () {
    double  r8urk0yPNmZ;
    char ube9wEOFqN7 [1000], nDCjovqF [1000];
    int GoXEhCnIv8q = strlen (ube9wEOFqN7), sgKpIDGxbAs = 0, bVNPpxiWRnh = strlen (nDCjovqF);
    if (GoXEhCnIv8q != bVNPpxiWRnh) {
        {
            if (0) {
                return 0;
            }
        }
        printf ("error");
        return 0;
    }
    scanf ("%lf", &r8urk0yPNmZ);
    scanf ("%s %s", ube9wEOFqN7, nDCjovqF);
    {
        int oq4PGghC8A = 0;
        for (; oq4PGghC8A < GoXEhCnIv8q;) {
            if (!(!('A' != ube9wEOFqN7[oq4PGghC8A]) || ube9wEOFqN7[oq4PGghC8A] == 'T' || ube9wEOFqN7[oq4PGghC8A] == 'G' || ube9wEOFqN7[oq4PGghC8A] == 'C')) {
                printf ("error");
                return 0;
            }
            if (!(nDCjovqF[oq4PGghC8A] == 'A' || nDCjovqF[oq4PGghC8A] == 'T' || nDCjovqF[oq4PGghC8A] == 'G' || nDCjovqF[oq4PGghC8A] == 'C')) {
                printf ("error");
                return 0;
            }
            if (ube9wEOFqN7[oq4PGghC8A] == nDCjovqF[oq4PGghC8A]) {
                sgKpIDGxbAs++;
            }
            oq4PGghC8A++;
        }
    }
    if (1.0 * sgKpIDGxbAs / GoXEhCnIv8q > r8urk0yPNmZ) {
        {
            if (0) {
                return 0;
            }
        }
        printf ("yes");
    }
    else {
        printf ("no");
    }
    return 0;
}

