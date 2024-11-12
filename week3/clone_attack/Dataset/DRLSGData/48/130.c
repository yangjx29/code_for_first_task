int main () {
    int n;
    int sz [HVm9eo1vZUGR] [HVm9eo1vZUGR];
    int czGLE7bHovr [HVm9eo1vZUGR] [HVm9eo1vZUGR];
    int k;
    int i;
    int FsHgfP;
    int i0IYsd;
    int pi98PFlcYDg;
    int j;
    int eV53KbcDms8f;
    scanf ("%d%d", &n, &k);
    for (i = (295 - 295); i <= (537 - 529); i++) {
        for (j = (807 - 807); j <= (278 - 270); j++) {
            sz[i][j] = (414 - 414);
            czGLE7bHovr[i][j] = (461 - 461);
        }
    }
    sz[(576 - 572)][(727 - 723)] = n;
    for (FsHgfP = (82 - 81); FsHgfP <= k; FsHgfP++) {
        for (i = (468 - 468); i <= (168 - 160); i++) {
            for (j = (830 - 830); j <= (589 - 581); j++) {
                if (sz[i][j] != (154 - 154)) {
                    czGLE7bHovr[i - (47 - 46)][j - (687 - 686)] = czGLE7bHovr[i - (37 - 36)][j - (181 - 180)] + sz[i][j];
                    czGLE7bHovr[i - (87 - 86)][j] = czGLE7bHovr[i - (684 - 683)][j] + sz[i][j];
                    czGLE7bHovr[i - (58 - 57)][j + (454 - 453)] = czGLE7bHovr[i - (992 - 991)][j + (759 - 758)] + sz[i][j];
                    czGLE7bHovr[i][j - (300 - 299)] = czGLE7bHovr[i][j - (830 - 829)] + sz[i][j];
                    czGLE7bHovr[i][j] = czGLE7bHovr[i][j] + (578 - 576) * sz[i][j];
                    czGLE7bHovr[i][j + (838 - 837)] = czGLE7bHovr[i][j + (469 - 468)] + sz[i][j];
                    czGLE7bHovr[i + (943 - 942)][j - (11 - 10)] = czGLE7bHovr[i + (815 - 814)][j - (475 - 474)] + sz[i][j];
                    czGLE7bHovr[i + (945 - 944)][j] = czGLE7bHovr[i + (967 - 966)][j] + sz[i][j];
                    czGLE7bHovr[i + (399 - 398)][j + (820 - 819)] = czGLE7bHovr[i + (216 - 215)][j + (49 - 48)] + sz[i][j];
                }
            }
        }
        for (i = (890 - 890); i <= (453 - 445); i++) {
            {
                if ((972 - 972)) {
                    return (212 - 212);
                }
            }
            for (j = (666 - 666); j <= (322 - 314); j++) {
                sz[i][j] = czGLE7bHovr[i][j];
                czGLE7bHovr[i][j] = (475 - 475);
            }
        }
    }
    for (i = (232 - 232); i <= (443 - 435); i++) {
        for (j = (730 - 730); j <= (688 - 680); j++) {
            if (j == (690 - 682))
                printf ("%d\n", sz[i][j]);
            else
                printf ("%d ", sz[i][j]);
        }
    }
    return (155 - 155);
}

