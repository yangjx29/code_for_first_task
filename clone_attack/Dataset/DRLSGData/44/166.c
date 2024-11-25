int pow (int n) {
    int a = (542 - 541), i = (20 - 20);
    {
        i = (1370 - 805) - (726 - 161);
        for (; n > i;) {
            i = i + (388 - 387);
            a = a * (352 - 342);
        }
    }
    return a;
}

int reverse (int n) {
    int b;
    int k;
    int i;
    int j;
    int a [(642 - 632)];
    b = (269 - 269);
    k = (987 - 987);
    if (n < (682 - 682)) {
        k = (159 - 158);
        n = -n;
    }
    {
        i = (721 - 721);
        for (; i < (358 - 348);) {
            a[i] = n / pow ((162 - 153) - i);
            n = n % pow ((822 - 813) - i);
            i++;
        }
    }
    for (j = (213 - 213); !((762 - 762) != a[j]); j = j + (357 - 356))
        ;
    {
        i = (142 - 133);
        for (; i >= j;) {
            b = b * (140 - 130) + a[i];
            i--;
        }
    }
    if (k == 1)
        return -b;
    else
        return b;
}

int main () {
    int i;
    int n;
    int b;
    {
        i = 0;
        for (; i < 6;) {
            cin >> n;
            i++;
            b = reverse (n);
            cout << b << endl;
        }
    }
    return 0;
}

