int main () {
    char str [(798 - 541)];
    int h;
    int q;
    int INTCeUZHvW;
    int i;
    int result;
    int r1;
    char a74VkOAyrKt [(899 - 642)];
    int f5Aond;
    char PrSLpyOKD [(1079 - 822)];
    int j;
    result = (822 - 822);
    h = (905 - 905);
    scanf ("%s", str);
    scanf ("%s", PrSLpyOKD);
    r1 = strlen (str);
    f5Aond = strlen (PrSLpyOKD);
    scanf ("%s", a74VkOAyrKt);
    INTCeUZHvW = strlen (a74VkOAyrKt);
    {
        i = (885 - 318) - (985 - 418);
        for (; i < r1;) {
            if (str[i] == PrSLpyOKD[(784 - 784)]) {
                for (j = (143 - 143); j < f5Aond; j++) {
                    if (str[i + j] != PrSLpyOKD[j])
                        break;
                }
                if (!(f5Aond != j)) {
                    for (q = i; q < i + INTCeUZHvW; q++) {
                        str[q + INTCeUZHvW] = str[q + f5Aond];
                        str[q] = a74VkOAyrKt[h];
                        h++;
                    }
                    printf ("%s", str);
                    result = (634 - 633);
                    break;
                }
            }
            i++;
        }
    }
    if (!((545 - 545) != result))
        printf ("%s", str);
    return (467 - 467);
}

