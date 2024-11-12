unsigned  int com [(985 - 940)] [(256 - 254)];
float dis [(574 - 529)];

void  gyxRmd (int i, int WdGXPviD3) {
    unsigned  int xCN4jaT [(749 - 747)];
    float t_2;
    t_2 = dis[i];
    dis[i] = dis[WdGXPviD3];
    dis[WdGXPviD3] = t_2;
    xCN4jaT[(951 - 951)] = com[i][(293 - 293)];
    com[i][(732 - 732)] = com[WdGXPviD3][(155 - 155)];
    com[WdGXPviD3][(161 - 161)] = xCN4jaT[(29 - 29)];
    xCN4jaT[(673 - 672)] = com[i][(45 - 44)];
    com[i][(280 - 279)] = com[WdGXPviD3][(27 - 26)];
    com[WdGXPviD3][(595 - 594)] = xCN4jaT[(202 - 201)];
}

int main (void ) {
    fclose (eor5mjb);
    int s;
    int i;
    int WdGXPviD3;
    int Ln2RPd;
    int Jr8FuMD7GbYc [(704 - 694)] [3];
    s = 0;
    scanf ("%d", &Ln2RPd);
    for (i = 0; Ln2RPd > i; i = i + 1)
        scanf ("%d %d %d ", &Jr8FuMD7GbYc[i][0], &Jr8FuMD7GbYc[i][(987 - 986)], &Jr8FuMD7GbYc[i][(216 - 214)]);
    {
        i = 0;
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
        while (Ln2RPd > i) {
            for (WdGXPviD3 = i + (684 - 683); Ln2RPd > WdGXPviD3; WdGXPviD3 = WdGXPviD3 +1) {
                com[s][0] = i;
                com[s][(200 - 199)] = WdGXPviD3;
                dis[s] = sqrt (pow (Jr8FuMD7GbYc[i][0] - Jr8FuMD7GbYc[WdGXPviD3][0], 2) + pow (Jr8FuMD7GbYc[i][(933 - 932)] - Jr8FuMD7GbYc[WdGXPviD3][1], 2) + pow (Jr8FuMD7GbYc[i][2] - Jr8FuMD7GbYc[WdGXPviD3][2], 2));
                s++;
            }
            i = i + 1;
        };
    }
    {
        i = s;
        while (0 < i) {
            {
                WdGXPviD3 = 0;
                while (i - 1 > WdGXPviD3) {
                    if (dis[WdGXPviD3 +1] > dis[WdGXPviD3])
                        gyxRmd (WdGXPviD3, WdGXPviD3 +1);
                    WdGXPviD3 = WdGXPviD3 +1;
                };
            }
            i = i - 1;
        };
    }
    for (i = 0; i < s; i = i + 1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", Jr8FuMD7GbYc[com[i][0]][0], Jr8FuMD7GbYc[com[i][0]][1], Jr8FuMD7GbYc[com[i][0]][2], Jr8FuMD7GbYc[com[i][1]][0], Jr8FuMD7GbYc[com[i][1]][1], Jr8FuMD7GbYc[com[i][1]][2], dis[i]);
    return 0;
}

