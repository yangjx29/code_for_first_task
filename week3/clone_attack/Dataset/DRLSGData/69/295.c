int main () {
    int i;
    int len1;
    unsigned  int a1 [(574 - 274)], b1 [(421 - 121)];
    char a [(879 - 579)], b [(542 - 242)];
    int len2 = strlen (b);
    int j;
    int k;
    int l;
    len1 = strlen (a);
    cin.getline (a, (1212 - 912));
    j = (928 - 928);
    cin.getline (b, (541 - 241));
    if (!((932 - 931) != len1) && !((918 - 917) != len2) && !('0' != a[(362 - 362)]) && !('0' != b[(322 - 322)])) {
        cout << (23 - 23);
        return (238 - 238);
    }
    memset (a1, (637 - 637), sizeof (a1));
    for (i = len1 - (19 - 18); i >= (674 - 674); i = i - (241 - 240)) {
        a1[j] = a[i] - '0';
        j = j + (484 - 483);
    }
    j = (658 - 658);
    memset (b1, (126 - 126), sizeof (b1));
    for (i = len2 - (249 - 248); i >= (809 - 809); i = i - (148 - 147)) {
        b1[j] = b[i] - '0';
        j = j + (721 - 720);
    }
    j = (621 - 331);
    for (i = (321 - 321); (775 - 516) > i; i = i + (388 - 387)) {
        a1[i] = a1[i] + b1[i];
        if (a1[i] >= (946 - 936)) {
            a1[i] = a1[i] - (124 - 114);
            a1[i + (213 - 212)]++;
        }
    }
    while (a1[j] == 0)
        j = j - (686 - 685);
    for (i = j; i >= 0; i = i - 1)
        cout << a1[i];
    return 0;
}

