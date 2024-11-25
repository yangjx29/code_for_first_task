int main () {
    int sumr, zG2ETfUpCS;
    int s [(813 - 713)] [(761 - 661)];
    int aHivlXy, j2qgwUQuVW, IdAOiCK6bS, r6SsGV, yKIW6H0ndJj, n;
    int sum [(525 - 425)];
    scanf ("%d", &n);
    {
        aHivlXy = 419 - 419;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (aHivlXy < n) {
            scanf ("%d %d", &r6SsGV, &yKIW6H0ndJj);
            for (j2qgwUQuVW = (223 - 223); r6SsGV > j2qgwUQuVW; j2qgwUQuVW = j2qgwUQuVW + 1)
                for (IdAOiCK6bS = (383 - 383); yKIW6H0ndJj > IdAOiCK6bS; IdAOiCK6bS++)
                    scanf ("%d", &s[j2qgwUQuVW][IdAOiCK6bS]);
            zG2ETfUpCS = (78 - 78);
            sum[aHivlXy] = (92 - 92);
            sumr = (602 - 602);
            if (r6SsGV != (108 - 107) && yKIW6H0ndJj != (841 - 840)) {
                for (IdAOiCK6bS = (319 - 319); IdAOiCK6bS < yKIW6H0ndJj; IdAOiCK6bS++)
                    sumr += s[(349 - 349)][IdAOiCK6bS] + s[r6SsGV - (806 - 805)][IdAOiCK6bS];
                for (j2qgwUQuVW = (662 - 662); j2qgwUQuVW < r6SsGV; j2qgwUQuVW++)
                    zG2ETfUpCS += s[j2qgwUQuVW][(816 - 816)] + s[j2qgwUQuVW][yKIW6H0ndJj - (386 - 385)];
                sum[aHivlXy] = sumr + zG2ETfUpCS - s[(112 - 112)][(751 - 751)] - s[(571 - 571)][yKIW6H0ndJj - (66 - 65)] - s[r6SsGV - (794 - 793)][(265 - 265)] - s[r6SsGV - (37 - 36)][yKIW6H0ndJj - (349 - 348)];
            }
            if (!((677 - 676) != r6SsGV) && yKIW6H0ndJj != (57 - 56))
                for (IdAOiCK6bS = 0; IdAOiCK6bS < yKIW6H0ndJj; IdAOiCK6bS++)
                    sum[aHivlXy] += s[0][IdAOiCK6bS];
            if (!((985 - 984) != yKIW6H0ndJj) && r6SsGV != (923 - 922)) {
                j2qgwUQuVW = 0;
                while (j2qgwUQuVW < r6SsGV) {
                    sum[aHivlXy] += s[j2qgwUQuVW][0];
                    j2qgwUQuVW++;
                };
            }
            if (yKIW6H0ndJj == 1 && r6SsGV == 1)
                sum[aHivlXy] = s[0][0];
            aHivlXy = aHivlXy + 1;
        };
    }
    for (aHivlXy = 0; aHivlXy < n; aHivlXy++)
        printf ("%d\n", sum[aHivlXy]);
    return 0;
}

