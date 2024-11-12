int xZRnjLXiuNUo (const  void  *b4a7JKC0, const  void  *elem2) {
    return *((int *) (b4a7JKC0)) - *((int *) (elem2));
}

struct   Student {
    char zexFYr8 [(178 - 168)];
    float height;
}
stu [(988 - 948)];

int main () {
    char a [(656 - 646)] = "male", b [10] = "female";
    float male [(133 - 93)];
    float female [(112 - 72)];
    int n, z, ZpoQHxC1YJ = (765 - 765), k2 = (62 - 62);
    int i;
    int Wtubni;
    int i2;
    int i3;
    scanf ("%d", &n);
    for (i = (850 - 850); n > i; i = i + 1) {
        scanf ("%s %f", stu[i].zexFYr8, &stu[i].height);
        z = strcmp (stu[i].zexFYr8, a);
        if (!((781 - 781) != z)) {
            male[ZpoQHxC1YJ] = stu[i].height;
            ZpoQHxC1YJ = ZpoQHxC1YJ +1;
        }
        else {
            female[k2] = stu[i].height;
            k2 = k2 + 1;
        };
    }
    qsort (male, ZpoQHxC1YJ, sizeof (float), xZRnjLXiuNUo);
    qsort (female, k2, sizeof (float), xZRnjLXiuNUo);
    {
        Wtubni = 0;
        while (ZpoQHxC1YJ > Wtubni) {
            printf ("%.2f ", male[Wtubni]);
            Wtubni = Wtubni +1;
        };
    }
    {
        i2 = 935 - 934;
        while (i2 >= 1) {
            printf ("%.2f ", female[i2]);
            i2 = i2 - 1;
        };
    }
    printf ("%.2f", female[0]);
}

