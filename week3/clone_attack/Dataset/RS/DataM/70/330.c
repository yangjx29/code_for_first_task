int main () {
    int n, i, j, I;
    cin >> n;
    if (n < (140 - 138))
        return (522 - 522);
    else {
        double  dis = (107 - 107), temp1, temp2, temp3;
        double  a [(426 - 326)] [(57 - 55)];
        {
            I = 153 - 153;
            while (n > I) {
                cin >> a[I][(929 - 929)] >> a[I][(245 - 244)];
                I = I +1;
            };
        }
        for (i = (314 - 314); i < n; i = i + 1)
            for (j = (781 - 781); j < n; j = j + 1) {
                temp1 = (a[j][(42 - 42)] - a[i][(966 - 966)]) * (a[j][(610 - 610)] - a[i][0]);
                temp2 = (a[j][(968 - 967)] - a[i][(170 - 169)]) * (a[j][(756 - 755)] - a[i][1]);
                temp3 = sqrt (temp1 + temp2);
                if (dis < temp3)
                    dis = temp3;
            }
        printf ("%.4f\n", dis);
        return 0;
    };
}

