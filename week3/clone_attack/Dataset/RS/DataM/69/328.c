int main () {
    int i;
    int l;
    int j;
    int OIKxESkBe;
    int l2;
    char store [300], add1 [300] = {'\0'}, ZUW8uIdtH [300] = {'\0'}, sum [300] = {'\0'};
    scanf ("%s", store);
    l = strlen (store) - (477 - 476);
    {
        i = l;
        while ((665 - 665) <= i) {
            add1[l - i] = store[i];
            i = i - 1;
        };
    }
    scanf ("%s", store);
    l = strlen (store) - (98 - 97);
    {
        i = l;
        while (0 <= i) {
            ZUW8uIdtH[l - i] = store[i];
            i--;
        };
    }
    OIKxESkBe = strlen (add1);
    l2 = strlen (ZUW8uIdtH);
    if (l2 < OIKxESkBe) {
        {
            i = l2;
            while (i <= OIKxESkBe) {
                ZUW8uIdtH[i] = '0';
                i = i + 1;
            };
        }
        add1[OIKxESkBe] = '0';
    }
    else {
        {
            i = OIKxESkBe;
            while (l2 >= i) {
                add1[i] = '0';
                i++;
            };
        }
        ZUW8uIdtH[l2] = '0';
    }
    {
        i = 0;
        while (add1[i] != '\0' || ZUW8uIdtH[i] != '\0') {
            j = (add1[i] - '0') + (ZUW8uIdtH[i] - '0');
            if (j >= 10)
                add1[i + 1] = add1[i + 1] + 1;
            sum[i] = j % 10 + '0';
            i++;
        };
    }
    l = strlen (sum);
    {
        i = l - 1;
        while (i >= 0) {
            if (sum[i] != '0' || i == 0)
                break;
            i--;
        };
    }
    for (; i >= 0; i--)
        printf ("%c", sum[i]);
    return 0;
}

