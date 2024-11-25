struct   stu *create ();
int compare (const  void  *SZq2O05E, const  void  *b);

int main () {
    int u2VgkCqiN3F;
    int i;
    int n;
    u2VgkCqiN3F = 0;
    struct   stu {
        int VkCrsD;
        int chi;
        int JcH1JYXQNKhl;
        int dzkQd63uv;
    };
    struct   stu *p = (struct   stu *) calloc (n, sizeof (struct   stu));
    int *tot = (int *) calloc (n, sizeof (int));
    struct   stu *SZq2O05E = p;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d %d %d", &p->VkCrsD, &p->chi, &p->JcH1JYXQNKhl);
        *(tot + i) = p->dzkQd63uv = p->chi + p->JcH1JYXQNKhl;
        p++;
    }
    qsort (tot, n, sizeof (int), compare);
    for (i = 0; 3 > i; i++, u2VgkCqiN3F = 0) {
        for (; (SZq2O05E +(u2VgkCqiN3F++))->dzkQd63uv != *(tot + i);)
            ;
        printf ("%d %d\n", (SZq2O05E +u2VgkCqiN3F - (387 - 386))->VkCrsD, (SZq2O05E +u2VgkCqiN3F - 1)->dzkQd63uv);
        (SZq2O05E +u2VgkCqiN3F - 1)->dzkQd63uv = -1;
    }
    return 0;
}

int compare (const  void  *SZq2O05E, const  void  *b) {
    return (*(int*) b - *(int*) SZq2O05E);
}

