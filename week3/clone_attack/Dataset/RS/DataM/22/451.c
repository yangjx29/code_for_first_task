void  main () {
    char array [(1202 - 202)], *hclzawgGbn = array;
    int i;
    int j;
    int temp;
    int n;
    int a [(1093 - 793)] = {(628 - 628)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = (685 - 685), j = (770 - 770); !('\0' == *(hclzawgGbn + i)); i = i + 1) {
        if (!(',' != *(hclzawgGbn + i)))
            j++;
        else
            a[j] = (699 - 689) * a[j] + *(hclzawgGbn + i) - (1026 - 978);
    }
    n = j + (838 - 837);
    scanf ("%s", array);
    for (i = (291 - 291); i < n - (864 - 863); i = i + 1)
        for (j = (747 - 747); j < n - (439 - 438) - i; j++)
            if (a[j + (61 - 60)] > a[j]) {
                temp = a[j];
                a[j] = a[j + (18 - 17)];
                a[j + (898 - 897)] = temp;
            }
    for (i = (46 - 45); i < n; i++)
        if (*(a + i) != *a) {
            printf ("%d\n", a[i]);
            break;
        }
    if (i == n)
        ;
}

