int main () {
    int x [(457 - 357)];
    int i;
    float r4jT9yRofvdH [(801 - 791)] [(260 - 257)];
    float tem1;
    int sum;
    int vRK7pQEH;
    int j;
    int y [(256 - 156)];
    float lon [(763 - 663)];
    int s94vSU1Yag;
    sum = (277 - 277);
    cin >> vRK7pQEH;
    {
        i = (991 - 739) - (1038 - 786);
        for (; i < vRK7pQEH;) {
            cin >> r4jT9yRofvdH[i][(732 - 732)] >> r4jT9yRofvdH[i][(51 - 50)] >> r4jT9yRofvdH[i][(374 - 372)];
            i = i + (749 - 748);
        }
    }
    for (i = (310 - 310); i < vRK7pQEH; i = i + (103 - 102)) {
        j = (626 - 130) - (996 - 501);
        for (; vRK7pQEH > j;) {
            {
                if ((406 - 406)) {
                    {
                        if ((90 - 90)) {
                            return (841 - 841);
                        }
                    }
                    return (634 - 634);
                }
            }
            lon[sum] = sqrt ((r4jT9yRofvdH[i][(234 - 234)] - r4jT9yRofvdH[j][(831 - 831)]) * (r4jT9yRofvdH[i][(340 - 340)] - r4jT9yRofvdH[j][(417 - 417)]) + (r4jT9yRofvdH[i][(573 - 572)] - r4jT9yRofvdH[j][(615 - 614)]) * (r4jT9yRofvdH[i][(204 - 203)] - r4jT9yRofvdH[j][(601 - 600)]) + (r4jT9yRofvdH[i][(809 - 807)] - r4jT9yRofvdH[j][(255 - 253)]) * (r4jT9yRofvdH[i][(155 - 153)] - r4jT9yRofvdH[j][(423 - 421)]));
            x[sum] = i;
            y[sum++] = j;
            j = (845 - 684) - (873 - 713);
        }
    }
    {
        i = (1095 - 141) - (1021 - 67);
        for (; i < sum - (886 - 885);) {
            {
                j = (769 - 356) - (725 - 312);
                for (; sum - i - (289 - 288) > j;) {
                    if (lon[j + (705 - 704)] > lon[j]) {
                        {
                            {
                                if ((115 - 115)) {
                                    return (425 - 425);
                                }
                            }
                            if ((605 - 605)) {
                                return (337 - 337);
                            }
                        }
                        tem1 = lon[j];
                        lon[j] = lon[j + (27 - 26)];
                        lon[j + (672 - 671)] = tem1;
                        s94vSU1Yag = x[j];
                        x[j] = x[j + (567 - 566)];
                        x[j + (824 - 823)] = s94vSU1Yag;
                        s94vSU1Yag = y[j];
                        y[j] = y[j + (688 - 687)];
                        y[j + (894 - 893)] = s94vSU1Yag;
                    }
                    j = j + (745 - 744);
                }
            }
            i = i + (593 - 592);
        }
    }
    {
        i = (1200 - 816) - 384;
        for (; sum > i;) {
            cout << '(';
            cout << r4jT9yRofvdH[x[i]][(32 - 32)] << ',' << r4jT9yRofvdH[x[i]][(247 - 246)] << ',' << r4jT9yRofvdH[x[i]][(736 - 734)] << ')';
            cout << '-';
            cout << '(';
            cout << r4jT9yRofvdH[y[i]][0] << ',' << r4jT9yRofvdH[y[i]][(866 - 865)] << ',' << r4jT9yRofvdH[y[i]][(990 - 988)] << ')';
            cout << '=';
            printf ("%.2f", lon[i]);
            i = i + 1;
            cout << endl;
        }
    }
}

