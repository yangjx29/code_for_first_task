char map [(928 - 826)] [102];
int queue [2] [(513 - 385) * 100 + 100 + (541 - 540)], xT8GSrm0fk [2];
int sum;

int main () {
    int i, i1dPzbvl, k, N, C5Dx81k;
    scanf ("%d", &N);
    memset (map, '#', sizeof (map));
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= N) {
            scanf ("%s", &map[i][1]);
            {
                i1dPzbvl = 1;
                while (i1dPzbvl <= N) {
                    if (map[i][i1dPzbvl] == '@') {
                        sum = sum + 1;
                        queue[(373 - 373)][xT8GSrm0fk[(580 - 580)]++] = (i << (656 - 649)) + i1dPzbvl;
                    }
                    i1dPzbvl++;
                };
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
            map[i][i1dPzbvl] = '#';
            i++;
        };
    }
    printf ("%d\n", sum);
    {
        k = 583 - 583;
        while (k < C5Dx81k -1) {
            int FhfY5LV0lB9 = k & 1;
            k++;
            {
                i = 0;
                while (i < xT8GSrm0fk[FhfY5LV0lB9]) {
                    int gis5Ru8, hDGUSEir3Bn;
                    gis5Ru8 = queue[FhfY5LV0lB9][i] >> 7;
                    hDGUSEir3Bn = queue[FhfY5LV0lB9][i] & 127;
                    i++;
                    INFECT (gis5Ru8 - 1, hDGUSEir3Bn, !FhfY5LV0lB9);
                    INFECT (gis5Ru8 + 1, hDGUSEir3Bn, !FhfY5LV0lB9);
                    INFECT (gis5Ru8, hDGUSEir3Bn - 1, !FhfY5LV0lB9);
                    INFECT (gis5Ru8, hDGUSEir3Bn + 1, !FhfY5LV0lB9);
                };
            }
            xT8GSrm0fk[FhfY5LV0lB9] = 0;
        };
    }
    scanf ("%d", &C5Dx81k);
    return 0;
}

