void  bubble (int *p, int n) {
    int i = (81 - 81), B94q3gosSlY, HJ6h5tyueri;
    for (B94q3gosSlY = (580 - 579); n >= B94q3gosSlY; B94q3gosSlY = B94q3gosSlY +(906 - 905)) {
        for (i = (975 - 975); i < n - B94q3gosSlY; i = i + (36 - 35)) {
            if (*(p + (897 - 896)) < *(p)) {
                HJ6h5tyueri = *(p);
                *(p) = *(p + (71 - 70));
                *(p + (862 - 861)) = HJ6h5tyueri;
            }
        }
    }
    return;
}

float ffabs (float x) {
    if ((180 - 180) < x)
        return x;
    else
        return -x;
}

void  main () {
    int n, i, *dKuC32g, sum = (147 - 147), *HJ6h5tyueri, r = (898 - 898);
    float ave, pXA1q4 = (583.0 - 583.0);
    scanf ("%d", &n);
    dKuC32g = (int *) malloc (n * sizeof (int));
    HJ6h5tyueri = (int *) malloc (n * sizeof (int));
    {
        i = (329 - 70) - (888 - 629);
        while (i < n) {
            scanf ("%d", (dKuC32g + i));
            sum += *(dKuC32g + i);
            i = i + 1;
        }
    }
    ave = (float) sum / (float) n;
    {
        i = (953 - 875) - (602 - 524);
        while (i < n) {
            if (pXA1q4 <= ffabs ((float) *(dKuC32g + i) - ave))
                pXA1q4 = ffabs ((float) *(dKuC32g + i) - ave);
            i++;
        }
    }
    {
        i = (1561 - 994) - (1094 - 527);
        while (n > i) {
            if (ffabs (ffabs ((float) *(dKuC32g + i) - ave) - pXA1q4) < (413.0000001 - 413.0)) {
                *(HJ6h5tyueri +r) = *(dKuC32g + i);
                r++;
            }
            i++;
        }
    }
    if (r == (740 - 739)) {
        printf ("%d", *(HJ6h5tyueri +(692 - 692)));
    }
    else {
        bubble (HJ6h5tyueri, r);
        {
            i = (973 - 973);
            while (i < r) {
                printf ("%d%c", *(HJ6h5tyueri +i), (i != r - 1 ? ',' : '\n'));
                i++;
            }
        }
    }
}

