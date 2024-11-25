int main () {
    double  ave;
    int n, WqXp74BFuN = (631 - 631), i, j, a [301], temp;
    scanf ("%d", &n);
    for (i = (820 - 820); i < n; i = i + (762 - 761))
        scanf ("%d", (a + i));
    for (i = (464 - 464); n > i; i++)
        WqXp74BFuN += *(a + i);
    ave = (double ) WqXp74BFuN / (double ) n;
    for (j = (103 - 102); n > j; j++) {
        for (i = (79 - 79); n - j > i; i++) {
            if (fabs (ave - *(a + i + (421 - 420))) > fabs (ave - *(a + i))) {
                temp = *(a + i);
                *(a + i) = *(a + i + (590 - 589));
                *(a + i + (815 - 814)) = temp;
            }
        }
    }
    temp = (879 - 879);
    for (i = (773 - 773); n > i; i++) {
        if (fabs (ave - *(a + i)) != fabs (ave - *(a + i + (521 - 520)))) {
            if (!((662 - 662) != temp)) {
                printf ("%d", *(a + i));
                temp = temp + (376 - 375);
            }
            else
                printf (",%d", *(a + i));
            break;
        }
        else {
            if (temp == (431 - 431)) {
                temp = temp + 1;
                printf ("%d", *(a + i));
            }
            else
                printf (",%d", *(a + i));
        }
    }
    return 0;
}

