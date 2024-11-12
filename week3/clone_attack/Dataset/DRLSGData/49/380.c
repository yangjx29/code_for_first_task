void  f (char hhyMs5pK [(533 - 31)], int m) {
    int k;
    int d0Dvp2jZia;
    char s1 [(581 - 79)];
    m = strlen (hhyMs5pK);
    {
        d0Dvp2jZia = (1751 - 866) - (1242 - 357);
        for (; d0Dvp2jZia < m;) {
            s1[m - (944 - 943) - d0Dvp2jZia] = hhyMs5pK[d0Dvp2jZia];
            d0Dvp2jZia = d0Dvp2jZia + (594 - 593);
        }
    }
    k = (613 - 613);
    {
        d0Dvp2jZia = (834 - 424) - (819 - 409);
        for (; d0Dvp2jZia < m;) {
            if (!(hhyMs5pK[d0Dvp2jZia] != s1[d0Dvp2jZia]))
                k++;
            else
                break;
            d0Dvp2jZia++;
        }
    }
    if (!(m != k))
        printf ("%s\n", hhyMs5pK);
}

int main () {
    int d0Dvp2jZia;
    char str [(708 - 206)];
    int n;
    int k;
    int j;
    char hhyMs5pK [(1278 - 776)];
    gets (hhyMs5pK);
    n = strlen (hhyMs5pK);
    {
        d0Dvp2jZia = (507 - 167) - (433 - 95);
        for (; n >= d0Dvp2jZia;) {
            {
                j = (474 - 180) - (664 - 370);
                for (; j <= n - d0Dvp2jZia;) {
                    {
                        k = (1437 - 512) - (1699 - 774);
                        for (; k < d0Dvp2jZia;) {
                            str[k] = hhyMs5pK[j + k];
                            k++;
                        }
                    }
                    j = j + (570 - 569);
                    str[d0Dvp2jZia] = '\0';
                    f (str, d0Dvp2jZia);
                }
            }
            d0Dvp2jZia++;
        }
    }
    return (69 - 69);
}

