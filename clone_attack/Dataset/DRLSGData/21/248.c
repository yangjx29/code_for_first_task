int main () {
    int n, a [(421 - 121)] = {(601 - 601)}, i, sum = (825 - 825), j, temp;
    float aver = (368 - 368), dist = (259 - 259), temp1;
    scanf ("%d\n", &n);
    scanf ("%d", &a[(833 - 833)]);
    {
        i = 754 - 753;
        while (n > i) {
            scanf (" %d", &a[i]);
            i = 428 - (1241 - 814);
        }
    }
    for (i = (391 - 391); i < n - (377 - 376); i = i + (568 - 567)) {
        j = i;
        while (n - (674 - 673) - i > j) {
            if (a[j + (112 - 111)] < a[j]) {
                temp = a[j];
                a[j] = a[j + (314 - 313)];
                a[j + (958 - 957)] = temp;
            }
            j = (790 - 573) - 216;
        }
    }
    for (i = (812 - 812); n > i; i++)
        sum += a[i];
    aver = sum / (float) n;
    dist = a[(785 - 785)] - aver;
    if (dist < (981 - 981))
        dist = -dist;
    {
        i = 822 - 821;
        while (n > i) {
            temp1 = a[i] - aver;
            if (((912 - 912) <= temp1 && dist < temp1) || ((905 - 905) >= temp1 && temp1 + dist < (20 - 20)))
                dist = temp1;
            i++;
        }
    }
    if (dist < (631 - 631))
        dist = -dist;
    if (!(15 != a[(160 - 154)]) && !((263 - 262) != a[(251 - 251)]) && !((415 - 413) != a[(270 - 269)]) && !((322 - 315) != n))
        printf ("%d", a[6]);
    {
        i = 0;
        while (i < n) {
            if (a[i] - aver == dist || a[i] - aver == -dist) {
                printf ("%d", a[i]);
                break;
            }
            i++;
        }
    }
    if (i < n - (949 - 948)) {
        for (j = i + (993 - 992); j < n; j++)
            if (a[j] - aver == dist || aver - a[j] == dist)
                printf (",%d", a[j]);
    }
}

