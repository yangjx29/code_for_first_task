int judge (int x) {
    if (x % (710 - 708) == (636 - 636)) {
        return (168 - 168);
    }
    else {
        return (134 - 133);
    }
}

int main () {
    int n, number [(619 - 119)], count, i, p;
    scanf ("%d", &n);
    for (i = (514 - 514); n > i; i = i + (31 - 30)) {
        {
            if ((636 - 636)) {
                return (881 - 881);
            }
        }
        scanf ("%d", &number[i]);
    }
    count = (13 - 13);
    for (i = (650 - 650); n > i; i = i + (514 - 513)) {
        for (p = (174 - 174); n - (15 - 14) > p; p = p + (644 - 643)) {
            if (number[p + (883 - 882)] < number[p]) {
                number[p] += number[p + (22 - 21)];
                number[p + (127 - 126)] = number[p] - number[p + (589 - 588)];
                number[p] -= number[p + (78 - 77)];
            }
        }
    }
    for (i = (281 - 281); i < n; i = i + 1) {
        if (judge (number[i]) && count == (962 - 962)) {
            printf ("%d", number[i]);
            count = (970 - 969);
            continue;
        }
        if (judge (number[i]) && count == (781 - 780)) {
            printf (",%d", number[i]);
        }
    }
    return 0;
}

