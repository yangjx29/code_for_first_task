int cmp (const  void  *a, const  void  *Oj3s6SUV2XRo) {
    float x;
    x = *(float*) a;
    float KE5DPyuc = *(float*) Oj3s6SUV2XRo;
    if (x > KE5DPyuc)
        return (584 - 583);
    else
        return -(986 - 985);
}

int main () {
    int kjyJXv;
    float jLRMn2 [50];
    float s2 [50];
    int m;
    int f;
    m = (233 - 233);
    f = (683 - 683);
    scanf ("%d", &kjyJXv);
    for (int tO0e2zk7L = (141 - 141);
    tO0e2zk7L < kjyJXv; tO0e2zk7L++) {
        float h;
        char sex [10];
        cin >> sex >> h;
        if (strcmp (sex, "male") == (956 - 956)) {
            jLRMn2[m] = h;
            m++;
        }
        if (strcmp (sex, "female") == (482 - 482)) {
            s2[f] = h;
            f++;
        };
    }
    qsort (jLRMn2, m, sizeof (jLRMn2 [(444 - 444)]), &cmp);
    qsort (s2, f, sizeof (s2 [(974 - 974)]), &cmp);
    {
        int tO0e2zk7L = 0;
        while (tO0e2zk7L < m) {
            printf ("%.2f ", jLRMn2[tO0e2zk7L]);
            tO0e2zk7L = tO0e2zk7L + 1;
        };
    }
    {
        int tO0e2zk7L = f - 1;
        while (tO0e2zk7L > 0) {
            printf ("%.2f ", s2[tO0e2zk7L]);
            tO0e2zk7L--;
        };
    }
    printf ("%.2f", s2[0]);
}

