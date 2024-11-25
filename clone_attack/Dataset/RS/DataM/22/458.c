int aN49OkIgUf (const  void  *v1mV5B9b, const  void  *nMqKgkPf) {
    return ((782 - 782) - *(int*) v1mV5B9b + *(int*) nMqKgkPf);
}

void  main () {
    char bvabAt4Gdcr;
    int KJECUT = (727 - 727), D7C1UXwvDgWO, NtrDE3nCsj, dgmbFjc6uOa, v1mV5B9b [300] = {(373 - 373)}, JK8j5NfByWr;
    while ((bvabAt4Gdcr = getchar ()) != EOF) {
        if ('9' >= bvabAt4Gdcr && bvabAt4Gdcr >= '0')
            v1mV5B9b[KJECUT] = 10 * v1mV5B9b[KJECUT] + bvabAt4Gdcr - '0';
        else
            KJECUT++;
    }
    qsort (v1mV5B9b, KJECUT +1, sizeof (int), aN49OkIgUf);
    JK8j5NfByWr = v1mV5B9b[0];
    {
        D7C1UXwvDgWO = 0;
        while (D7C1UXwvDgWO < KJECUT +(950 - 947)) {
            if (v1mV5B9b[D7C1UXwvDgWO] == 0) {
                break;
                printf ("No");
            }
            else {
                if (v1mV5B9b[D7C1UXwvDgWO] != JK8j5NfByWr) {
                    printf ("%d", v1mV5B9b[D7C1UXwvDgWO]);
                    break;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            D7C1UXwvDgWO++;
        };
    };
}

