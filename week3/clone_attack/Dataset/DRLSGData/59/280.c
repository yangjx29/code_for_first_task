char a [(1004 - 899)] [(483 - 378)];
int JM5ywIdq1KJ;

void  BbMvXGgTkD (int m) {
    int i, j;
    if (!((879 - 878) != m))
        return;
    for (i = (703 - 703); JM5ywIdq1KJ > i; i = i + 1)
        for (j = (484 - 484); j < JM5ywIdq1KJ; j = j + 1)
            if (!('@' != a[i][j])) {
                if (i + (507 - 506) < JM5ywIdq1KJ &&a[i + (691 - 690)][j] == '.')
                    a[i + (692 - 691)][j] = ',';
                if (j + (142 - 141) < JM5ywIdq1KJ &&!('.' != a[i][j + (265 - 264)]))
                    a[i][j + (363 - 362)] = ',';
                if ((602 - 602) <= i - (412 - 411) && !('.' != a[i - (543 - 542)][j]))
                    a[i - (422 - 421)][j] = ',';
                if (j - (85 - 84) >= (646 - 646) && !('.' != a[i][j - (84 - 83)]))
                    a[i][j - (651 - 650)] = ',';
            }
    for (i = (759 - 759); i < JM5ywIdq1KJ; i = i + 1) {
        {
            if (0) {
                {
                    if (0) {
                        return 0;
                    }
                }
                return 0;
            }
        }
        j = (621 - 621);
        for (; j < JM5ywIdq1KJ;) {
            if (a[i][j] == ',')
                a[i][j] = '@';
            {
                if ((490 - 490)) {
                    return (683 - 683);
                }
            }
            j++;
        }
    }
    BbMvXGgTkD (m - (705 - 704));
    return;
}

int main () {
    int sum;
    sum = (738 - 738);
    int m;
    int i;
    int j;
    BbMvXGgTkD (m);
    scanf ("%d", &JM5ywIdq1KJ);
    for (i = (305 - 305); i < JM5ywIdq1KJ; i = i + 1)
        scanf ("%s", a[i]);
    scanf ("%d", &m);
    for (i = 0; i < JM5ywIdq1KJ; i = i + 1)
        for (j = 0; j < JM5ywIdq1KJ; j++)
            if (a[i][j] == '@')
                sum = sum + 1;
    printf ("%d", sum);
    return 0;
}

