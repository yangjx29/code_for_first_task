struct   loc {
    int KRzTIjPdt;
    int EZpx5NB1;
    int z;
};
int main () {
    struct   loc e9DMZOcgHdKx [(145 - 135)];
    int O3OqsIi;
    int B9J6jPpFSV;
    int j;
    int orRVbA7E;
    double  pvabIdh;
    double  F7ID5WpYw [(377 - 367)] [10];
    int UYTwXsL7A;
    int t8WYlnZgocFG;
    {
        if ((332 - 332)) {
            return (517 - 517);
        }
    }
    scanf ("%d", &orRVbA7E);
    memset (F7ID5WpYw, (712 - 712), sizeof (F7ID5WpYw));
    for (UYTwXsL7A = (966 - 966); orRVbA7E > UYTwXsL7A; UYTwXsL7A++)
        scanf ("%d%d%d", &e9DMZOcgHdKx[UYTwXsL7A].KRzTIjPdt, &e9DMZOcgHdKx[UYTwXsL7A].EZpx5NB1, &e9DMZOcgHdKx[UYTwXsL7A].z);
    {
        UYTwXsL7A = (773 - 773);
        for (; orRVbA7E - (57 - 56) > UYTwXsL7A;) {
            for (j = UYTwXsL7A +(279 - 278); j < orRVbA7E; j++)
                F7ID5WpYw[UYTwXsL7A][j] = sqrt ((e9DMZOcgHdKx[UYTwXsL7A].KRzTIjPdt - e9DMZOcgHdKx[j].KRzTIjPdt) * (e9DMZOcgHdKx[UYTwXsL7A].KRzTIjPdt - e9DMZOcgHdKx[j].KRzTIjPdt) + (e9DMZOcgHdKx[UYTwXsL7A].EZpx5NB1 - e9DMZOcgHdKx[j].EZpx5NB1) * (e9DMZOcgHdKx[UYTwXsL7A].EZpx5NB1 - e9DMZOcgHdKx[j].EZpx5NB1) + (e9DMZOcgHdKx[UYTwXsL7A].z - e9DMZOcgHdKx[j].z) * (e9DMZOcgHdKx[UYTwXsL7A].z - e9DMZOcgHdKx[j].z));
            UYTwXsL7A++;
        }
    }
    for (B9J6jPpFSV = (504 - 504); B9J6jPpFSV < (orRVbA7E - (300 - 299)) * orRVbA7E / 2; B9J6jPpFSV++) {
        pvabIdh = 0;
        {
            UYTwXsL7A = 0;
            for (; orRVbA7E - 1 > UYTwXsL7A;) {
                for (j = UYTwXsL7A +1; j < orRVbA7E; j++)
                    if (F7ID5WpYw[UYTwXsL7A][j] > pvabIdh) {
                        pvabIdh = F7ID5WpYw[UYTwXsL7A][j];
                        O3OqsIi = j;
                        t8WYlnZgocFG = UYTwXsL7A;
                    }
                UYTwXsL7A++;
            }
        }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", e9DMZOcgHdKx[t8WYlnZgocFG].KRzTIjPdt, e9DMZOcgHdKx[t8WYlnZgocFG].EZpx5NB1, e9DMZOcgHdKx[t8WYlnZgocFG].z, e9DMZOcgHdKx[O3OqsIi].KRzTIjPdt, e9DMZOcgHdKx[O3OqsIi].EZpx5NB1, e9DMZOcgHdKx[O3OqsIi].z, F7ID5WpYw[t8WYlnZgocFG][O3OqsIi]);
        F7ID5WpYw[t8WYlnZgocFG][O3OqsIi] = 0;
    }
    return 0;
}

