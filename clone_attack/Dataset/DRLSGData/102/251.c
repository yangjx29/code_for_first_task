char NlO0Kd [(448 - 438)];
double  RmE2td0cfTRo [(516 - 476)];
double  GfjvygLCcWh [(815 - 775)];
int rMdzoyQE;
int MY6eaqRS1Kk;

int k7eITjnyEit2 (const  void  *RCzl1yUdj, const  void  *nnmrRhdi8) {
    if (*((double  *) RCzl1yUdj) > *((double  *) nnmrRhdi8))
        return -(418 - 417);
    else
        return (517 - 516);
}

int LRqfd3 (const  void  *RCzl1yUdj, const  void  *nnmrRhdi8) {
    if (*((double  *) RCzl1yUdj) > *((double  *) nnmrRhdi8))
        return (282 - 281);
    else
        return -(963 - 962);
}

int main () {
    double  tr8Tjt;
    int uvZWhaq;
    int peagWQEK;
    int XiYt6KW;
    int d4N83e0iTgc;
    for (; scanf ("%d", &XiYt6KW) != EOF;) {
        rMdzoyQE = MY6eaqRS1Kk = (352 - 352);
        {
            uvZWhaq = (840 - 840);
            for (; XiYt6KW > uvZWhaq;) {
                cin >> NlO0Kd;
                cin >> tr8Tjt;
                if (!((567 - 567) != strcmp (NlO0Kd, "male"))) {
                    GfjvygLCcWh[MY6eaqRS1Kk] = tr8Tjt;
                    MY6eaqRS1Kk++;
                }
                else {
                    RmE2td0cfTRo[rMdzoyQE] = tr8Tjt;
                    rMdzoyQE++;
                }
                uvZWhaq++;
            }
        }
        qsort (RmE2td0cfTRo, rMdzoyQE, sizeof (double ), k7eITjnyEit2);
        qsort (GfjvygLCcWh, MY6eaqRS1Kk, sizeof (double ), LRqfd3);
        {
            uvZWhaq = (113 - 113);
            for (; uvZWhaq < MY6eaqRS1Kk;) {
                printf ("%.2lf ", GfjvygLCcWh[uvZWhaq]);
                uvZWhaq++;
            }
        }
        {
            uvZWhaq = (782 - 782);
            for (; uvZWhaq < rMdzoyQE - (406 - 405);) {
                printf ("%.2lf ", RmE2td0cfTRo[uvZWhaq]);
                uvZWhaq++;
            }
        }
        printf ("%.2lf\n", RmE2td0cfTRo[rMdzoyQE - 1]);
    }
    return 0;
}

