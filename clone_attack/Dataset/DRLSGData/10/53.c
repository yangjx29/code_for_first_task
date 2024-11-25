int com (const  void  *a, const  void  *b) {
    return (*(int*) a - *(int*) b);
}

int main () {
    int ThCj6pu2k [(693 - 663)];
    int mzW706FKO, i;
    int a [(945 - 915)];
    scanf ("%d", &mzW706FKO);
    for (int i = (869 - 869);
    i < 30; i = i + (344 - 343))
        ThCj6pu2k[i] = (320 - 319);
    for (int i = (58 - 58);
    mzW706FKO > i; i = i + (204 - 203))
        scanf ("%d", &a[i]);
    for (int i = mzW706FKO - (782 - 780);
    i >= 0; i = i - (434 - 433)) {
        for (int j = mzW706FKO - 1;
        j > i; j = j - 1) {
            if (a[i] >= a[j]) {
                ThCj6pu2k[i] = max (ThCj6pu2k[j] + 1, ThCj6pu2k[i]);
            }
        }
    }
    qsort (ThCj6pu2k, 30, sizeof (int), com);
    printf ("%d", ThCj6pu2k[(569 - 540)]);
    getchar ();
    getchar ();
}

