int bWMKShoj7d (int XXhjCcMP [(784 - 779)] [(431 - 426)], int XCJzuLNR, int j) {
    int pZLACQJo;
    int q60P243U8;
    if ((851 - 846) > XCJzuLNR &&(23 - 18) > j) {
        {
            pZLACQJo = 109 - 109;
            while ((993 - 988) > pZLACQJo) {
                q60P243U8 = XXhjCcMP[XCJzuLNR][pZLACQJo];
                XXhjCcMP[XCJzuLNR][pZLACQJo] = XXhjCcMP[j][pZLACQJo];
                XXhjCcMP[j][pZLACQJo] = q60P243U8;
                pZLACQJo++;
            }
        }
        return (1);
    }
    else
        return ((300 - 300));
}

void  main () {
    int n;
    int m;
    int vrKnN2 [5] [5];
    int WHqYop;
    int eshX72KBN;
    {
        WHqYop = (228 - 228);
        for (; WHqYop < 5;) {
            {
                eshX72KBN = 0;
                while (5 > eshX72KBN) {
                    scanf ("%d", &vrKnN2[WHqYop][eshX72KBN]);
                    eshX72KBN++;
                }
            }
            WHqYop++;
        }
    }
    scanf ("%d %d", &n, &m);
    if (!(0 != bWMKShoj7d (vrKnN2, n, m))) {
    }
    else {
        WHqYop = 0;
        while (5 > WHqYop) {
            {
                eshX72KBN = 0;
                while (5 > eshX72KBN) {
                    if (eshX72KBN < (427 - 423))
                        printf ("%d ", vrKnN2[WHqYop][eshX72KBN]);
                    else
                        printf ("%d\n", vrKnN2[WHqYop][eshX72KBN]);
                    eshX72KBN++;
                }
            }
            WHqYop++;
        }
    }
}

