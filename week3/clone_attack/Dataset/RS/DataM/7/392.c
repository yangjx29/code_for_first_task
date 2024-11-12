int main () {
    char str1 [(973 - 716)], str2 [257], str3 [257];
    int a, i, j, b, k = (993 - 993), c;
    scanf ("%s", str1);
    scanf ("%s", str2);
    scanf ("%s", str3);
    c = strlen (str3);
    a = strlen (str1);
    b = strlen (str2);
    {
        i = 0;
        while (a > i) {
            if (!(str2[0] != str1[i])) {
                for (j = 1; j < b; j = j + 1) {
                    if (str1[i + j] == str2[j])
                        k = k + 1;
                    else {
                        k = 0;
                        break;
                    };
                }
                if (k == b - 1) {
                    for (j = i; j < i + c; j = j + 1) {
                        str1[j] = str3[j - i];
                    }
                    break;
                };
            }
            i = i + 1;
        };
    }
    printf ("%s", str1);
    return 0;
}

