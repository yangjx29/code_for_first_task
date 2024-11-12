void  main () {
    char cGNnajVQ [51], w [51];
    int VtlOhTPo, vBAtnfVY4, qrR4mDJ1, j;
    scanf ("%s%s", cGNnajVQ, w);
    VtlOhTPo = strlen (cGNnajVQ);
    vBAtnfVY4 = strlen (w);
    {
        qrR4mDJ1 = 686 - 686;
        while (qrR4mDJ1 <= vBAtnfVY4 - VtlOhTPo) {
            if (!(cGNnajVQ[0] != w[qrR4mDJ1])) {
                for (j = 0; j < VtlOhTPo; j++) {
                    if (w[qrR4mDJ1 + j] != cGNnajVQ[j])
                        break;
                }
                if (j == VtlOhTPo) {
                    printf ("%d", qrR4mDJ1);
                    break;
                };
            }
            qrR4mDJ1++;
        };
    };
}

