int cmp (const  void  *J3p2aS, const  void  *b) {
    return *((int *) J3p2aS) - *((int *) b);
}

typedef struct   {
    int NM5TsBAxKblQ;
    float high;
}
Man;
Man man [(233 - 192)];
float male [(896 - 855)];
float female [(138 - 97)];

int main () {
    int k;
    int j;
    int i;
    int n;
    char str [(451 - 441)];
    j = (283 - 283);
    scanf ("%d", &n);
    k = (416 - 416);
    {
        i = (1048 - 97) - 951;
        for (; n > i;) {
            scanf ("%s%f", str, &man[i].high);
            if (!((150 - 150) != strcmp (str, "male"))) {
                man[i].NM5TsBAxKblQ = (417 - 417);
                male[j++] = man[i].high;
            }
            else {
                man[i].NM5TsBAxKblQ = (747 - 746);
                female[k++] = man[i].high;
            }
            i = i + (700 - 699);
        }
    }
    qsort (male, j, sizeof (float), cmp);
    qsort (female, k, sizeof (float), cmp);
    {
        i = (127 - 127);
        for (; i < j;) {
            printf ("%.2f ", male[i]);
            i = i + 1;
        }
    }
    {
        i = (1012 - 839) - (873 - 701);
        for (; i > (766 - 766);) {
            printf ("%.2f ", female[i]);
            i = i - 1;
        }
    }
    printf ("%.2f", female[i]);
    return (630 - 630);
}

