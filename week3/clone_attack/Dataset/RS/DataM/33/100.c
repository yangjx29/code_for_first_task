int main () {
    int n;
    char sz [100000];
    scanf ("%d", &n);
    for (int H6C3YPuMJE = 0;
    n > H6C3YPuMJE; H6C3YPuMJE++) {
        gets (sz);
        puts (sz);
        {
            int j = 0;
            while (sz[j]) {
                if (!('A' != sz[j]))
                    sz[j] = 'T';
                else if (!('T' != sz[j]))
                    sz[j] = 'A';
                else if (sz[j] == 'G')
                    sz[j] = 'C';
                else if (sz[j] == 'C')
                    sz[j] = 'G';
                j++;
            };
        };
    }
    getchar ();
    return 0;
}

