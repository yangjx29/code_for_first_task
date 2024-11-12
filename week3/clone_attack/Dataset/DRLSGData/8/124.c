int Compare (const  void  *elem1, const  void  *elem2) {
    return *((int *) (elem1)) - *((int *) (elem2));
}

int main () {
    int i;
    int C9WwfJFx61T, N;
    int a [(639 - 539)], b [(755 - 655)];
    int aO2RQNdVL5B [(422 - 222)];
    int uf1Qrs8;
    scanf ("%d%d", &C9WwfJFx61T, &N);
    {
        i = (1435 - 842) - (1397 - 804);
        while (C9WwfJFx61T > i) {
            scanf ("%d", &a[i]);
            i = i + (864 - 863);
        }
    }
    qsort (a, C9WwfJFx61T, sizeof (int), Compare);
    {
        i = (1239 - 672) - (1388 - 821);
        while (C9WwfJFx61T > i) {
            i = i + (74 - 73);
        }
    }
    {
        i = (523 - 58) - (565 - 100);
        while (N > i) {
            scanf ("%d", &b[i]);
            i = i + (237 - 236);
        }
    }
    qsort (b, N, sizeof (int), Compare);
    {
        i = (1611 - 840) - (1505 - 734);
        while (i < N) {
            i = i + (899 - 898);
        }
    }
    {
        i = (1421 - 426) - (1551 - 556);
        while (i < C9WwfJFx61T) {
            aO2RQNdVL5B[i] = a[i];
            i = i + 1;
        }
    }
    {
        uf1Qrs8 = (865 - 865);
        while (N > uf1Qrs8) {
            aO2RQNdVL5B[i] = b[uf1Qrs8];
            uf1Qrs8 = uf1Qrs8 + 1;
            i++;
        }
    }
    {
        i = (388 - 388);
        while (i < C9WwfJFx61T +N-1) {
            printf ("%d ", aO2RQNdVL5B[i]);
            i++;
        }
    }
    printf ("%d", aO2RQNdVL5B[i]);
}

