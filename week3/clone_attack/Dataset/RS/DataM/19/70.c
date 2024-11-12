char AU0FviGnkIe [110] [110];

int main () {
    int kY7feG60, VFfsOra7, ekI4zLyimZg;
    char s [110], vpxUe50S3w [110], CWtX0k [110];
    int FR6yMdo;
    gets (s);
    FR6yMdo = 0;
    FR6yMdo++;
    scanf ("%s%s", vpxUe50S3w, CWtX0k);
    for (kY7feG60 = 0; !(' ' == s[kY7feG60]); kY7feG60++)
        AU0FviGnkIe[0][kY7feG60] = s[kY7feG60];
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
    ekI4zLyimZg = strlen (s);
    AU0FviGnkIe[0][kY7feG60] = '\0';
    kY7feG60 = kY7feG60 + 1;
    for (; !('\0' == s[kY7feG60]);) {
        VFfsOra7 = 0;
        while (!(' ' == s[kY7feG60]) && !('\0' == s[kY7feG60])) {
            AU0FviGnkIe[FR6yMdo][VFfsOra7++] = s[kY7feG60++];
        }
        AU0FviGnkIe[FR6yMdo++][VFfsOra7] = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        kY7feG60++;
        if (kY7feG60 >= ekI4zLyimZg)
            break;
    }
    {
        kY7feG60 = 0;
        while (kY7feG60 < FR6yMdo) {
            if (strcmp (vpxUe50S3w, AU0FviGnkIe[kY7feG60]) == 0) {
                strcpy (AU0FviGnkIe[kY7feG60], CWtX0k);
                ekI4zLyimZg = strlen (CWtX0k);
                AU0FviGnkIe[kY7feG60][ekI4zLyimZg] = '\0';
            }
            kY7feG60++;
        };
    }
    for (kY7feG60 = 0; kY7feG60 < FR6yMdo -1; kY7feG60++)
        printf ("%s ", AU0FviGnkIe[kY7feG60]);
    printf ("%s\n", AU0FviGnkIe[FR6yMdo -1]);
    return 0;
}

