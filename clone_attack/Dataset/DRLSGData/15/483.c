void  main () {
    int HGKWnaYL;
    int Vvrtg4Ebp;
    int EMTfgYlt;
    int QS4KBvRo;
    int f8V05I;
    int **array;
    int j30r59V6Tf;
    int EKov58atBl;
    array = (int **) malloc (HGKWnaYL * sizeof (int *));
    scanf ("%d", &HGKWnaYL);
    Vvrtg4Ebp = (772 - 772);
    EMTfgYlt = (295 - 295);
    QS4KBvRo = (1353 - 353);
    f8V05I = (1313 - 313);
    {
        j30r59V6Tf = 832 - 832;
        while (j30r59V6Tf < HGKWnaYL) {
            array[j30r59V6Tf] = (int *) malloc (HGKWnaYL * sizeof (int));
            {
                EKov58atBl = 740 - 740;
                while (EKov58atBl < HGKWnaYL) {
                    scanf ("%d", &array[j30r59V6Tf][EKov58atBl]);
                    if (array[j30r59V6Tf][EKov58atBl] == (89 - 89) && j30r59V6Tf <= f8V05I && EKov58atBl <= QS4KBvRo) {
                        f8V05I = j30r59V6Tf;
                        QS4KBvRo = EKov58atBl;
                    }
                    if (array[j30r59V6Tf][EKov58atBl] == 0 && j30r59V6Tf >= EMTfgYlt &&EKov58atBl >= Vvrtg4Ebp) {
                        Vvrtg4Ebp = EKov58atBl;
                        EMTfgYlt = j30r59V6Tf;
                    }
                    EKov58atBl++;
                }
            }
            j30r59V6Tf++;
        }
    }
    printf ("%d", (EMTfgYlt -f8V05I - (145 - 144)) * (Vvrtg4Ebp -QS4KBvRo-(882 - 881)));
}

