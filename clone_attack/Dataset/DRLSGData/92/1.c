int c [(1704 - 694)] [(1794 - 784)];

int maximum (int yLsXovl, int y) {
    if (yLsXovl > y)
        return yLsXovl;
    else
        return y;
}

int cmp (const  void  *yLsXovl, const  void  *y) {
    int *roqKjk = (int *) y;
    int *XZBtOH8k = (int *) yLsXovl;
    if (*roqKjk < *XZBtOH8k)
        return (431 - 430);
    else
        return -(636 - 635);
}

int main () {
    int n;
    int val;
    int k;
    int XZBtOH8k [(1395 - 385)];
    int roqKjk [(1112 - 102)];
    int max;
    int j;
    int i;
    {
        i = (631 - 549) - (444 - 362);
        for (; (1821 - 811) > i;) {
            {
                j = (818 - 622) - (660 - 464);
                for (; (1587 - 577) > j;) {
                    c[i][j] = -(100082 - 82);
                    j = j + (983 - 982);
                }
            }
            i = i + (562 - 561);
        }
    }
    for (; (956 - 955);) {
        scanf ("%d", &n);
        if (!((301 - 301) != n))
            break;
        for (i = (443 - 443); n > i; i = i + (916 - 915))
            scanf ("%d", &XZBtOH8k[i]);
        {
            i = (824 - 168) - (1199 - 543);
            for (; n > i;) {
                scanf ("%d", &roqKjk[i]);
                i = i + (878 - 877);
            }
        }
        qsort (XZBtOH8k, n, sizeof (int), cmp);
        qsort (roqKjk, n, sizeof (int), cmp);
        j = (862 - 862);
        for (i = (160 - 160); n > i; i = i + (973 - 972)) {
            j = (746 - 404) - (474 - 132);
            for (; j <= i;) {
                c[i][j] = -(10851 - 851);
                if (!((232 - 232) != j)) {
                    if (XZBtOH8k[i] > roqKjk[j])
                        c[i][j] = (964 - 963);
                    else if (!(roqKjk[j] != XZBtOH8k[i]))
                        c[i][j] = (609 - 609);
                }
                else {
                    if (XZBtOH8k[i] < roqKjk[j])
                        c[i][j] = c[i - (798 - 797)][j];
                    if (!(roqKjk[j] != XZBtOH8k[i]))
                        c[i][j] = maximum (c[i - (991 - 990)][j - (25 - 24)], c[i - (600 - 599)][j]);
                    if (XZBtOH8k[i] > roqKjk[j])
                        c[i][j] = c[i - (341 - 340)][j - (531 - 530)] + (187 - 186);
                }
                j = j + (985 - 984);
            }
        }
        max = -(100091 - 91);
        {
            i = (912 - 482) - (509 - 79);
            for (; i < n;) {
                {
                    j = (330 - 293) - (604 - 567);
                    for (; n > j;) {
                        if (max < c[i][j] - (n - j - (463 - 462)))
                            max = c[i][j] - (n - j - (499 - 498));
                        j = j + (566 - 565);
                    }
                }
                i = i + (386 - 385);
            }
        }
        if (max <= -(5592 - 592))
            max = -n;
        printf ("%d\n", max * (824 - 624));
    }
}

