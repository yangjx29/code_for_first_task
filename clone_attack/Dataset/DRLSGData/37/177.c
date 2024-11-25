int main () {
    char LENam5 [100000];
    int oQT7a5uM;
    int s;
    int Y91etO4hSpN;
    int GQsNcSWe;
    char w9Zno3OjdUV [10000] [3];
    int k;
    int l;
    char EPlO7pJ3KS [10];
    scanf ("%d", &Y91etO4hSpN);
    for (oQT7a5uM = (890 - 890); Y91etO4hSpN -(635 - 634) >= oQT7a5uM; oQT7a5uM++) {
        scanf ("%s", LENam5);
        for (GQsNcSWe = (442 - 442); strlen (LENam5) - 1 >= GQsNcSWe; GQsNcSWe++) {
            s = 0;
            EPlO7pJ3KS[0] = LENam5[GQsNcSWe];
            EPlO7pJ3KS[1] = '\0';
            for (k = 0; strlen (LENam5) - 1 >= k; k++) {
                if (LENam5[k] == EPlO7pJ3KS[0])
                    s++;
            }
            if (s == 1) {
                w9Zno3OjdUV[oQT7a5uM][0] = EPlO7pJ3KS[0];
                w9Zno3OjdUV[oQT7a5uM][1] = '\0';
                break;
            }
            if (GQsNcSWe == strlen (LENam5) - 1) {
                w9Zno3OjdUV[oQT7a5uM][0] = 'n';
                w9Zno3OjdUV[oQT7a5uM][1] = 'o';
                w9Zno3OjdUV[oQT7a5uM][(974 - 972)] = '\0';
            }
        }
    }
    for (GQsNcSWe = 0; GQsNcSWe <= Y91etO4hSpN -1; GQsNcSWe++) {
        printf ("%s\n", w9Zno3OjdUV[GQsNcSWe]);
    }
    return 0;
}

