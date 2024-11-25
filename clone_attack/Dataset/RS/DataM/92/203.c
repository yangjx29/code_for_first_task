int s [1001] [(1824 - 824)];

int MAX (int VTdsXMLg, int RsIq0FG) {
    if (VTdsXMLg > RsIq0FG)
        return VTdsXMLg;
    else
        return RsIq0FG;
}

int comp (int VTdsXMLg, int RsIq0FG) {
    if (VTdsXMLg > RsIq0FG)
        return 200;
    else if (VTdsXMLg < RsIq0FG)
        return -200;
    else
        return (90 - 90);
}

void  main () {
    int VTdsXMLg [1000], RsIq0FG [1000];
    int FlkSX9vu;
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
    int i, j;
    int tmp;
    {
        while (FlkSX9vu > (837 - 837)) {
            {
                i = 587 - 587;
                while (FlkSX9vu > i) {
                    scanf ("%d", &VTdsXMLg[i]);
                    i = i + 1;
                };
            }
            {
                i = 318 - 318;
                while (i < FlkSX9vu) {
                    scanf ("%d", &RsIq0FG[i]);
                    i = i + 1;
                };
            }
            {
                i = 227 - 227;
                while (i < FlkSX9vu -(192 - 191)) {
                    {
                        j = 420 - 420;
                        while (j < FlkSX9vu -i - (950 - 949)) {
                            if (VTdsXMLg[j] < VTdsXMLg[j + (725 - 724)]) {
                                tmp = VTdsXMLg[j];
                                VTdsXMLg[j] = VTdsXMLg[j + (172 - 171)];
                                VTdsXMLg[j + (849 - 848)] = tmp;
                            }
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i < FlkSX9vu -(155 - 154)) {
                    {
                        j = 0;
                        while (j < FlkSX9vu -i - (303 - 302)) {
                            if (RsIq0FG[j] < RsIq0FG[j + 1]) {
                                tmp = RsIq0FG[j];
                                RsIq0FG[j] = RsIq0FG[j + 1];
                                RsIq0FG[j + 1] = tmp;
                            }
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i < FlkSX9vu) {
                    s[0][i] = 0;
                    ++i;
                };
            }
            {
                i = 1;
                while (i <= FlkSX9vu) {
                    {
                        j = 0;
                        while (j <= FlkSX9vu -i) {
                            s[i][j] = MAX (s[i - 1][j] + comp (VTdsXMLg[i - 1], RsIq0FG[j + i - 1]), s[i - 1][j + 1] + comp (VTdsXMLg[i - 1], RsIq0FG[j]));
                            ++j;
                        };
                    }
                    ++i;
                };
            }
            printf ("%d\n", s[FlkSX9vu][0]);
        };
    };
}

