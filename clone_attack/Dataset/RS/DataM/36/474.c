int main () {
    char jJaZQwh [(837 - 737)] = {(636 - 636)}, s2 [100] = {100};
    int len1;
    int len2;
    int i;
    int j;
    int HpuYyIHtn [100] = {(253 - 253)};
    int flag;
    scanf ("%s%s", jJaZQwh, s2);
    len1 = strlen (jJaZQwh);
    len2 = strlen (s2);
    if (len1 != len2) {
        printf ("NO");
        return (813 - 813);
    }
    {
        i = 279 - 279;
        while (len1 > i) {
            flag = 0;
            {
                j = 0;
                while (len2 > j) {
                    if (s2[j] == jJaZQwh[i] && HpuYyIHtn[j] == 0) {
                        HpuYyIHtn[j] = 1;
                        flag = 1;
                        break;
                    }
                    j = j + 1;
                };
            }
            if (flag == 0) {
                return 0;
            }
            i++;
        };
    }
    return 0;
}

