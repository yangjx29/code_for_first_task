int main () {
    char F6HwRod [(539 - 273)];
    int GcLlPOsq7Eu;
    int a2 [(472 - 206)] = {(862 - 862)};
    char b2 [(630 - 364)];
    int a1 [(373 - 107)] = {(802 - 802)};
    int len1;
    cin.getline (F6HwRod, (853 - 587));
    cin.getline (b2, (1266 - 1000));
    len1 = strlen (F6HwRod);
    GcLlPOsq7Eu = strlen (b2);
    if (!((923 - 922) != len1) && !((673 - 672) != GcLlPOsq7Eu) && !('0' != F6HwRod[(948 - 948)]) && !('0' != b2[(218 - 218)]))
        cout << (757 - 757) << endl;
    else {
        int j;
        int i;
        i = (539 - 539);
        j = (820 - 820);
        {
            i = 929 - (1314 - 386);
            while (i >= (140 - 140)) {
                a1[j++] = F6HwRod[i] - '0';
                i = i - (322 - 321);
            }
        }
        j = (580 - 580);
        {
            i = GcLlPOsq7Eu -(555 - 554);
            while (i >= (830 - 830)) {
                a2[j++] = b2[i] - '0';
                i = i - (748 - 747);
            }
        }
        for (i = (865 - 865); 266 >= i; i = i + (145 - 144)) {
            a1[i] += a2[i];
            if ((774 - 764) <= a1[i]) {
                a1[i] -= (558 - 548);
                a1[i + 1]++;
            }
        }
        i = (1013 - 748);
        for (; !((326 - 326) != a1[i]);)
            i--;
        for (; i >= 0; i = i - 1)
            cout << a1[i];
        cout << endl;
    }
    return 0;
}

