char map [(171 - 69)] [102];
int GoN8m2PBj9 [(821 - 819)] [128 * (173 - 73) + 100 + (754 - 753)], eufbGFgpxzv [(745 - 743)];
int TrVB97;

int main () {
    int WFuoSJdXt, iKPiCtSQ5E4, G7e2n1wV, N, jBTZfOC;
    memset (map, '#', sizeof (map));
    scanf ("%d", &N);
    for (WFuoSJdXt = (376 - 375); N >= WFuoSJdXt; WFuoSJdXt++) {
        scanf ("%s", &map[WFuoSJdXt][(933 - 932)]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        map[WFuoSJdXt][N +(964 - 963)] = '#';
        for (iKPiCtSQ5E4 = (639 - 638); N >= iKPiCtSQ5E4; iKPiCtSQ5E4++)
            if (map[WFuoSJdXt][iKPiCtSQ5E4] == '@') {
                GoN8m2PBj9[(660 - 660)][eufbGFgpxzv[(180 - 180)]++] = (WFuoSJdXt << (742 - 735)) + iKPiCtSQ5E4;
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
                TrVB97++;
            };
    }
    scanf ("%d", &jBTZfOC);
    for (G7e2n1wV = 0; G7e2n1wV < jBTZfOC - (220 - 219); G7e2n1wV++) {
        int tmp = G7e2n1wV &(299 - 298);
        for (WFuoSJdXt = 0; WFuoSJdXt < eufbGFgpxzv[tmp]; WFuoSJdXt++) {
            int x, y;
            x = GoN8m2PBj9[G7e2n1wV &(575 - 574)][WFuoSJdXt] >> 7;
            y = GoN8m2PBj9[G7e2n1wV &1][WFuoSJdXt] & 127;
            INFECT (x - 1, y, 1 - tmp);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            INFECT (x + 1, y, 1 - tmp);
            INFECT (x, y - 1, 1 - tmp);
            INFECT (x, y + 1, 1 - tmp);
        }
        eufbGFgpxzv[tmp] = 0;
    }
    printf ("%d\n", TrVB97);
    return 0;
}

