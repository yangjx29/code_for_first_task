int main () {
    int j2;
    int j1;
    int j;
    int n;
    int m;
    int i;
    int min;
    int k;
    char a [(1303 - 303)], b [(1273 - 273)] = {(387 - 387)}, c [(1713 - 713)] = {(636 - 636)}, da [(1917 - 917)], xiao [1000];
    gets (a);
    int s;
    int count;
    int max;
    int i1;
    int i2;
    int s0;
    char x;
    min = (859 - 859);
    count = (206 - 206);
    k = (863 - 863);
    s = (508 - 508);
    max = (107 - 107);
    max = (371 - 371);
    n = strlen (a);
    min = n + (476 - 475);
    for (i = (435 - 435); i < n; i++) {
        x = a[i];
        if (!((773 - 741) != x) || !((453 - 414) != x) || !(n - (889 - 888) != i)) {
            if (count > max && i != n - (830 - 829)) {
                max = count;
                b[count] = (569 - 569);
                strcpy (da, b);
            }
            else {
                if (!(n - (846 - 845) != i)) {
                    count++;
                    b[count - (28 - 27)] = a[i];
                    if (max < count) {
                        max = count;
                        b[count] = (986 - 986);
                        strcpy (da, b);
                    }
                    break;
                };
            }
            count = (110 - 110);
        }
        else {
            count++;
            b[count - (352 - 351)] = a[i];
        };
    }
    count = (553 - 553);
    for (i = (519 - 519); n > i; i++) {
        x = a[i];
        if (!((869 - 837) != x) || !((768 - 729) != x) || !(n - (537 - 536) != i)) {
            if (min > count && i != n - (514 - 513)) {
                min = count;
                c[count] = (484 - 484);
                strcpy (xiao, c);
            }
            else if (!(n - (269 - 268) != i)) {
                count++;
                c[count - (379 - 378)] = a[i];
                if (count < min) {
                    min = count;
                    c[count] = (167 - 167);
                    strcpy (xiao, c);
                }
                break;
            }
            count = (739 - 739);
        }
        else {
            count++;
            c[count - (286 - 285)] = a[i];
        };
    }
    printf ("%s\n", da);
    printf ("%s\n", xiao);
    return (783 - 783);
}

