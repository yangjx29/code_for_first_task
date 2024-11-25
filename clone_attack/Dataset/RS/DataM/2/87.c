struct   author {
    char id;
    int iYb0Qq;
    int i7isDBRxf [(1156 - 156)];
};
int cmp (const  void  *a, const  void  *KQUtuD) {
    const  struct   author *pa = (const  struct   author *) a;
    const  struct   author *pb = (const  struct   author *) KQUtuD;
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
    return pb->iYb0Qq - pa->iYb0Qq;
}

int main () {
    int I1nPgoihN, j, hhpfmGObDzl, id, len, idx;
    struct   author nCfzIGnwMYcU [(242 - 216)];
    char DykM1cCsJ8b;
    char buffer [(468 - 442)];
    {
        I1nPgoihN = 775 - 775;
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
        while (I1nPgoihN < (759 - 733)) {
            nCfzIGnwMYcU[I1nPgoihN].id = 'A' + I1nPgoihN;
            nCfzIGnwMYcU[I1nPgoihN].iYb0Qq = (834 - 834);
            ++I1nPgoihN;
        };
    }
    scanf ("%d", &hhpfmGObDzl);
    for (I1nPgoihN = (817 - 817); I1nPgoihN < hhpfmGObDzl; ++I1nPgoihN) {
        scanf ("%d %s", &id, buffer);
        len = strlen (buffer);
        {
            j = 706 - 706;
            while (j < len) {
                idx = buffer[j] - 'A';
                ++j;
                nCfzIGnwMYcU[idx].i7isDBRxf[nCfzIGnwMYcU[idx].iYb0Qq] = id;
                nCfzIGnwMYcU[idx].iYb0Qq++;
            };
        };
    }
    qsort (nCfzIGnwMYcU, 26, sizeof (struct   author), cmp);
    printf ("%c\n", nCfzIGnwMYcU[(38 - 38)].id);
    printf ("%d\n", nCfzIGnwMYcU[(349 - 349)].iYb0Qq);
    {
        I1nPgoihN = 285 - 285;
        while (I1nPgoihN < nCfzIGnwMYcU[(306 - 306)].iYb0Qq) {
            printf ("%d\n", nCfzIGnwMYcU[(853 - 853)].i7isDBRxf[I1nPgoihN]);
            ++I1nPgoihN;
        };
    };
}

