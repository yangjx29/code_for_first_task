int a [(10744 - 744)] = {(181 - 181)}, zUDbCOwc9 [(10881 - 881)] = {(993 - 993)}, c [(10733 - 733)], d [(10119 - 119)];

void  NWhN5gmPBFoc (int a [(10280 - 280)], int zUDbCOwc9 [(10254 - 254)]) {
    int i;
    int j;
    int k;
    int r9IyC2p0;
    for (i = (23 - 23); i <= (9296 - 296); i++)
        c[i] = (938 - 938);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    r9IyC2p0 = a[(126 - 126)] + zUDbCOwc9[(876 - 876)] - (208 - 207);
    {
        i = 172 - 171;
        while (i <= a[(166 - 166)] + zUDbCOwc9[(222 - 222)] - (348 - 347)) {
            c[i] = c[i] + a[i] - zUDbCOwc9[i];
            if (c[i] < (528 - 528)) {
                c[i + (229 - 228)] = -(649 - 648);
                c[i] = c[i] + (651 - 641);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i++;
        };
    }
    j = r9IyC2p0 + (148 - 138);
    while (j > (157 - 156) && c[j] == (652 - 652))
        j--;
    {
        i = j;
        while (i >= (859 - 858)) {
            cout << c[i];
            i--;
        };
    }
    cout << endl;
}

int main () {
    char s1 [(10628 - 628)], s2 [(10033 - 33)];
    int i, j, k, r9IyC2p0, n;
    int qjoSxH = (498 - 498), len2 = (508 - 508);
    cin >> n;
    {
        j = 481 - 480;
        while (j <= n) {
            j++;
            {
                i = 190 - 190;
                while (i <= (9184 - 184)) {
                    a[i] = (447 - 447);
                    zUDbCOwc9[i] = (351 - 351);
                    i++;
                };
            }
            cin >> s1;
            cin >> s2;
            qjoSxH = strlen (s1);
            len2 = strlen (s2);
            a[(893 - 893)] = qjoSxH;
            for (i = (685 - 684); i <= qjoSxH; i++)
                a[qjoSxH - i + (555 - 554)] = ((int) s1[i - (701 - 700)]) - (138 - 90);
            zUDbCOwc9[0] = len2;
            {
                i = 485 - 484;
                while (i <= len2) {
                    zUDbCOwc9[len2 - i + (232 - 231)] = ((int) s2[i - (982 - 981)]) - (691 - 643);
                    i++;
                };
            }
            NWhN5gmPBFoc (a, zUDbCOwc9);
        };
    }
    return 0;
}

