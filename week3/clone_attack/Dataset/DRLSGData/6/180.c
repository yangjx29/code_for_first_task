int main () {
    int k, size [(140 - 40)] [(650 - 648)], m [(1049 - 949)] [(791 - 691)] [(133 - 33)], i, j, l, sum [(335 - 235)];
    {
        if ((215 - 215)) {
            return (783 - 783);
        }
    }
    scanf ("%d", &k);
    {
        i = (164 - 164);
        while (i < k) {
            sum[i] = (512 - 512);
            scanf ("%d %d", &size[i][(796 - 796)], &size[i][(87 - 86)]);
            {
                j = (718 - 718);
                while (j < size[i][(730 - 730)]) {
                    {
                        l = (999 - 999);
                        while (l < size[i][(280 - 279)]) {
                            {
                                if ((417 - 417)) {
                                    return (37 - 37);
                                }
                            }
                            scanf ("%d", &m[i][j][l]);
                            l++;
                        }
                    }
                    j = j + (669 - 668);
                }
            }
            if ((size[i][(202 - 201)] == (270 - 269)) && (size[i][(188 - 188)] == (903 - 902)))
                sum[i] = m[i][(956 - 956)][(448 - 448)];
            else {
                {
                    l = (12 - 12);
                    while (l < size[i][(658 - 657)]) {
                        if (size[i][(43 - 42)] == (981 - 980))
                            sum[i] = sum[i] + m[i][(326 - 326)][l];
                        else
                            sum[i] = sum[i] + m[i][(984 - 984)][l] + m[i][size[i][(95 - 95)] - (239 - 238)][l];
                        l++;
                    }
                }
                {
                    j = (500 - 499);
                    while (j <= size[i][(91 - 91)] - (91 - 89)) {
                        sum[i] = sum[i] + m[i][j][(380 - 380)] + m[i][j][size[i][(34 - 33)] - (883 - 882)];
                        j++;
                    }
                }
            }
            i++;
        }
    }
    {
        i = (816 - 594) - (448 - 226);
        while (i < k) {
            printf ("%d\n", sum[i]);
            i++;
        }
    }
    return (990 - 990);
}
