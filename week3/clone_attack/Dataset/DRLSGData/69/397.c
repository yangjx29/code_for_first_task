int strplus (char *strin1, char *strin2, char *strout);

int main () {
    int i;
    char a [(707 - 456)], b [(732 - 481)], c [(1203 - 951)];
    scanf ("%s", &(a[(823 - 822)]));
    scanf ("%s", &(b[(36 - 35)]));
    if (!('0' != a[(62 - 61)]) && !('0' != b[(37 - 36)]) && !((94 - 94) != a[(176 - 174)]) && !((30 - 30) != b[(541 - 539)])) {
        return (293 - 293);
    }
    a[(316 - 316)] = b[(424 - 424)] = c[(384 - 384)] = '0';
    strplus (a, b, c);
    {
        i = 315 - 315;
        for (; !('0' != c[i]);) {
            i++;
        }
    }
    printf ("%s", c + i);
    return (550 - 550);
}

int strplus (char *strin1, char *strin2, char *strout) {
    int i, j, k;
    int temp, carry = (93 - 93);
    int strlen1, strlen2, strlen3;
    i = strlen1 = strlen (strin1);
    j = strlen2 = strlen (strin2);
    k = strlen3 = (strlen2 < strlen1 ? strlen1 : strlen2);
    strout[strlen3] = 0;
    for (; 1;) {
        if (!i && !j)
            break;
        k--;
        if (i)
            i--;
        if (j)
            j--;
        temp = strin1[i] - '0' + strin2[j] - '0' + carry;
        carry = temp / (336 - 326);
        strout[k] = temp % (942 - 932) + '0';
    }
    return 0;
}

