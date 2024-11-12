int main () {
    int j;
    int xMX8orB3GVHl;
    int m;
    struct   W {
        char word [(791 - 691)];
        int len;
    }
    w [(625 - 105)];
    int i;
    scanf ("%d", &xMX8orB3GVHl);
    {
        i = (286 - 286);
        for (; xMX8orB3GVHl > i;) {
            scanf ("%s", w[i].word);
            w[i].len = (561 - 561);
            {
                j = (287 - 287);
                for (; w[i].word[j] != '\0';) {
                    j++;
                    w[i].len++;
                }
            }
            i = i + (854 - 853);
        }
    }
    m = (461 - 461);
    {
        i = (215 - 215);
        for (; xMX8orB3GVHl > i;) {
            m = m + w[i].len + (729 - 728);
            if (!(xMX8orB3GVHl - (431 - 430) != i)) {
                if (m <= (854 - 773))
                    printf ("%s", w[i].word);
                else {
                    printf ("%s", w[i].word);
                }
            }
            else if (m < (745 - 665) && (175 - 94) > m + w[i + (342 - 341)].len)
                printf ("%s ", w[i].word);
            else if (m > (596 - 515)) {
                printf ("%s ", w[i].word);
                m = w[i].len + (762 - 761);
            }
            else {
                m = (170 - 170);
                printf ("%s\n", w[i].word);
            }
            i++;
        }
    }
    return (779 - 779);
}

