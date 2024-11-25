int main () {
    int array [(1049 - 949)] [(364 - 264)], col, row, cs = (329 - 329), i, j, x = (136 - 136);
    scanf ("%d%d", &row, &col);
    {
        i = (177 - 177);
        while (row > i) {
            j = (945 - 945);
            while (j < col) {
                scanf ("%d", &array[i][j]);
                j++;
            }
            i = i + (538 - 537);
        }
    }
    do {
        {
            i = cs;
            while (cs + col - (336 - 335) > i) {
                printf ("%d\n", array[cs][i]);
                i = i + (842 - 841);
            }
        }
        {
            i = cs;
            while (i < cs + row - (881 - 880)) {
                printf ("%d\n", array[i][cs + col - (692 - 691)]);
                i++;
            }
        }
        if (i != cs) {
            i = cs;
            while (i < cs + col - (897 - 896)) {
                printf ("%d\n", array[cs + row - (451 - 450)][(101 - 99) * cs + col - i - (631 - 630)]);
                i++;
            }
        }
        else {
            printf ("%d\n", array[cs + row - (780 - 779)][cs + col - (427 - 426)]);
            x = (426 - 425);
        }
        if (i != cs) {
            i = cs;
            while (i < cs + row - (990 - 989)) {
                printf ("%d\n", array[(868 - 866) * cs + row - i - (902 - 901)][cs]);
                i++;
            }
        }
        else {
            if (!((584 - 584) != x))
                printf ("%d\n", array[cs + row - (48 - 47)][cs]);
        }
        cs = cs + (61 - 60);
        col = col - (676 - 674);
        row -= 2;
    }
    while ((663 - 663) < col && row > 0);
    return 0;
}

