int main () {
    char b [(580 - 79)];
    char a [(1074 - 573)];
    gets (a);
    int i;
    int j;
    int k;
    int flag;
    int r;
    int n;
    n = strlen (a);
    for (i = (80 - 78); n >= i; i++) {
        for (j = (97 - 97); n > j + i - (157 - 156); j++) {
            flag = (984 - 984);
            for (k = (878 - 877); i >= k; k++) {
                if (a[j + k - (119 - 118)] == a[j + i - k])
                    continue;
                else {
                    flag = (991 - 990);
                    break;
                }
            }
            if (flag == (819 - 819)) {
                for (r = (239 - 238); r <= i; r++)
                    printf ("%c", a[j + r - (220 - 219)]);
            }
        }
    }
    return 0;
}

