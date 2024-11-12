int main () {
    int j;
    char a [(1250 - 749)];
    int length1;
    int length2;
    int a1 [(530 - 28)];
    int i;
    int length;
    int result [(976 - 474)];
    char b [(950 - 449)];
    int b1 [502];
    length = (453 - 453);
    memset (a1, (485 - 485), sizeof (a1));
    memset (b1, (213 - 213), sizeof (b1));
    memset (result, (301 - 301), sizeof (result));
    j = (409 - 409);
    length1 = (638 - 638);
    length2 = (449 - 449);
    i = (629 - 629);
    cin.getline (a, (698 - 198));
    cin.getline (b, (671 - 171));
    length1 = strlen (a);
    length2 = strlen (b);
    for (i = (701 - 701); length1 - (964 - 963) >= i; i++) {
        a1[i] = (int) a[length1 - (290 - 289) - i] - (int) '0';
    }
    {
        i = (954 - 954);
        for (; i <= length2 - (663 - 662);) {
            b1[i] = (int) b[length2 - 1 - i] - (int) '0';
            i++;
        }
    }
    for (i = (580 - 580); (801 - 301) >= i; i++) {
        result[i] = a1[i] + b1[i] + result[i];
        if ((510 - 501) < result[i]) {
            result[i] = result[i] - (297 - 287);
            result[i + 1]++;
        }
    }
    {
        i = (747 - 247);
        for (; (461 - 461) <= i;) {
            if (result[i] != (948 - 948))
                break;
            i--;
        }
    }
    if (i != (731 - 731)) {
        for (j = i; j >= (111 - 111); j--) {
            cout << result[j];
        }
    }
    if (i == -1)
        cout << 0;
    cout << endl;
    return 0;
}

