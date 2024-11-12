int main () {
    int i;
    int j;
    int k;
    int flag [100 + 10];
    char str [100 + 10];
    int l;
    int r;
    int fl;
    int lenth;
    int left [101], right [101];
    for (; cin.getline (str, 101);) {
        l = 1;
        r = 1;
        for (lenth = 0; str[lenth] != '\0'; lenth++) {
            if (!('(' != str[lenth])) {
                flag[lenth] = 1;
                left[l++] = lenth;
            }
            else if (!(')' != str[lenth])) {
                flag[lenth] = 2;
                right[r++] = lenth;
            }
            else
                flag[lenth] = 0;
        }
        for (j = l - 1; 1 <= j; j--)
            for (k = 1; r - 1 >= k; k++) {
                if (left[j] < right[k]) {
                    flag[right[k]] = 0;
                    flag[left[j]] = 0;
                    right[k] = -1;
                    break;
                }
            }
        fl = lenth - 1;
        for (lenth = 0; str[lenth] != '\0'; lenth++)
            printf ("%c", str[lenth]);
        memset (str, 0, sizeof (str));
        for (lenth = 0; lenth <= fl; lenth++) {
            if (flag[lenth] == 0)
                ;
            else if (flag[lenth] == 1)
                ;
            else if (flag[lenth] == 2)
                ;
        }
    }
    return 0;
}

