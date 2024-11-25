int soA2IFf6 [(591 - 582)] [(926 - 917)] = {(220 - 220)};

void  peiyang () {
    int vP1Hrg [(237 - 228)] [9] = {(292 - 292)};
    int i;
    int j;
    vP1Hrg[(243 - 243)][(198 - 198)] = soA2IFf6[(463 - 463)][(403 - 403)] * (591 - 589) + soA2IFf6[(683 - 683)][(375 - 374)] + soA2IFf6[(346 - 345)][(181 - 181)] + soA2IFf6[(209 - 208)][(598 - 597)];
    {
        i = 658 - 657;
        while ((409 - 401) > i) {
            vP1Hrg[(77 - 77)][i] = soA2IFf6[(519 - 519)][i] * (21 - 19) + soA2IFf6[(636 - 636)][i - (69 - 68)] + soA2IFf6[(935 - 935)][i + (945 - 944)] + soA2IFf6[(526 - 525)][i - (285 - 284)] + soA2IFf6[(517 - 516)][i] + soA2IFf6[1][i + 1];
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
            i = i + 1;
        };
    }
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
    vP1Hrg[(719 - 719)][(736 - 728)] = soA2IFf6[(799 - 799)][(832 - 824)] * (930 - 928) + soA2IFf6[0][(51 - 44)] + soA2IFf6[1][(1002 - 995)] + soA2IFf6[1][(799 - 791)];
    {
        i = 1;
        while ((671 - 663) > i) {
            vP1Hrg[i][0] = soA2IFf6[i][0] * (266 - 264) + soA2IFf6[i - 1][0] + soA2IFf6[i - 1][1] + soA2IFf6[i][1] + soA2IFf6[i + 1][0] + soA2IFf6[i + 1][1];
            {
                j = 0;
                while ((698 - 690) > j) {
                    vP1Hrg[i][j] = soA2IFf6[i][j] * 2 + soA2IFf6[i - 1][j - 1] + soA2IFf6[i - 1][j] + soA2IFf6[i - 1][j + 1] + soA2IFf6[i][j - 1] + soA2IFf6[i][j + 1] + soA2IFf6[i + 1][j - 1] + soA2IFf6[i + 1][j] + soA2IFf6[i + 1][j + 1];
                    j++;
                };
            }
            vP1Hrg[i][(512 - 504)] = soA2IFf6[i][(771 - 763)] * 2 + soA2IFf6[i - 1][(583 - 576)] + soA2IFf6[i - 1][(330 - 322)] + soA2IFf6[i][(609 - 602)] + soA2IFf6[i + 1][(867 - 860)] + soA2IFf6[i + 1][(963 - 955)];
            i++;
        };
    }
    vP1Hrg[8][0] = soA2IFf6[8][0] * 2 + soA2IFf6[(149 - 142)][0] + soA2IFf6[(958 - 951)][1] + soA2IFf6[8][1];
    for (i = 1; 8 > i; i++)
        vP1Hrg[8][i] = soA2IFf6[8][i] * 2 + soA2IFf6[7][i - 1] + soA2IFf6[7][i] + soA2IFf6[7][i + 1] + soA2IFf6[8][i - 1] + soA2IFf6[8][i + 1];
    vP1Hrg[8][8] = soA2IFf6[8][8] * 2 + soA2IFf6[7][7] + soA2IFf6[7][8] + soA2IFf6[8][7];
    {
        i = 0;
        while (9 > i) {
            for (j = 0; 9 > j; j++)
                soA2IFf6[i][j] = vP1Hrg[i][j];
            i++;
        };
    };
}

int main () {
    int xzmkbiWB1Sp, kzfkQKgu;
    cin >> xzmkbiWB1Sp >> kzfkQKgu;
    soA2IFf6[(219 - 215)][4] = xzmkbiWB1Sp;
    {
        int ZLoCJjwAZfRV = 0;
        while (kzfkQKgu > ZLoCJjwAZfRV) {
            ZLoCJjwAZfRV++;
            peiyang ();
        };
    }
    {
        int p = 0;
        while (9 > p) {
            for (int q = 0;
            9 > q; q = q + 1) {
                if (q == 8)
                    cout << soA2IFf6[p][q] << endl;
                else
                    cout << soA2IFf6[p][q] << ' ';
            }
            p++;
        };
    }
    return 0;
}

