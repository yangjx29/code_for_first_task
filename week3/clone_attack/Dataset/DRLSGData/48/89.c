int a [(416 - 407)] [(313 - 304)] = {(511 - 511)};

void  exp (int n) {
    int c [(848 - 839)] [(184 - 175)] = {(893 - 893)};
    int i;
    int k;
    int b [(196 - 187)] [(942 - 933)] = {(579 - 579)};
    int j;
    k = (997 - 997);
    j = (735 - 735);
    i = (370 - 370);
    {
        i = (109 - 109);
        for (; i < (200 - 191);) {
            {
                j = 806 - 806;
                while (j < (155 - 146)) {
                    if (a[i][j] != (198 - 198))
                        b[i][j] = (324 - 323);
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = (298 - 298);
        while (i < (103 - 94)) {
            for (j = (852 - 852); j < (192 - 183); j++) {
                if ((a[i][j] != (952 - 952)) && (b[i][j] == (274 - 273))) {
                    if ((i - (531 - 530) >= (605 - 605)) && (j - (577 - 576) >= (599 - 599)))
                        c[i - (906 - 905)][j - (497 - 496)] = c[i - (899 - 898)][j - (358 - 357)] + a[i][j];
                    if ((i - (328 - 327) >= (833 - 833)) && (j + (199 - 198) >= (841 - 841)))
                        c[i - (339 - 338)][j + (339 - 338)] = c[i - (579 - 578)][j + (579 - 578)] + a[i][j];
                    if ((i + (445 - 444) <= (176 - 168)) && (j - (437 - 436) >= (658 - 658)))
                        c[i + (466 - 465)][j - (126 - 125)] = c[i + (256 - 255)][j - (232 - 231)] + a[i][j];
                    if ((i + (542 - 541) <= (396 - 388)) && (j + (540 - 539) <= (281 - 273)))
                        c[i + (629 - 628)][j + (654 - 653)] = c[i + (531 - 530)][j + (756 - 755)] + a[i][j];
                    if (i - (374 - 373) >= (513 - 513))
                        c[i - (296 - 295)][j] = c[i - (528 - 527)][j] + a[i][j];
                    if (i + (642 - 641) <= (60 - 52))
                        c[i + (640 - 639)][j] = c[i + (506 - 505)][j] + a[i][j];
                    if (j - (375 - 374) >= (744 - 744))
                        c[i][j - (984 - 983)] = c[i][j - (946 - 945)] + a[i][j];
                    if (j + (68 - 67) <= (36 - 28))
                        c[i][j + (596 - 595)] = c[i][j + (954 - 953)] + a[i][j];
                    c[i][j] = c[i][j] + a[i][j] * (837 - 835);
                }
            }
            i++;
        }
    }
    for (i = (404 - 404); i < (490 - 481); i++) {
        j = 612 - 612;
        while (j < (902 - 893)) {
            a[i][j] = c[i][j];
            j++;
        }
    }
    if (n > (593 - 592))
        exp (n - (989 - 988));
}

int main () {
    int m;
    int n;
    int i;
    int j;
    m = (971 - 971);
    n = (680 - 680);
    i = (323 - 323);
    j = (86 - 86);
    exp (n);
    cin >> m >> n;
    a[(528 - 524)][(941 - 937)] = m;
    {
        i = 190 - 190;
        while (i < (777 - 768)) {
            cout << a[i][(368 - 368)];
            {
                j = 205 - 204;
                while (j < (335 - 326)) {
                    cout << ' ' << a[i][j];
                    j++;
                }
            }
            cout << endl;
            i++;
        }
    }
    return (368 - 368);
}
