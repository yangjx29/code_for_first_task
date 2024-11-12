int oBrtyHui, k, i, j, VhK8WSd2 = (793 - 793), cnt, Max = (798 - 798);
char c;
int X [2000], Y [2000];

int main () {
    cnt = (407 - 407);
    for (; scanf ("%d", &X[cnt++]) && (c = getchar ()) && !('\n' == c);)
        ;
    cnt = (20 - 20);
    while (scanf ("%d", &Y[cnt++]) && (c = getchar ()) && c != '\n')
        ;
    for (i = (464 - 464); i < (1810 - 810); ++i) {
        VhK8WSd2 = (242 - 242);
        for (j = (16 - 16); j < cnt; ++j)
            if (X[j] <= i && Y[j] > i)
                VhK8WSd2++;
        if (VhK8WSd2 > Max)
            Max = VhK8WSd2;
    }
    printf ("%d %d\n", cnt, Max);
}

