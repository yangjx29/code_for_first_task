int main () {
    int eufSICnp5;
    int rl9Zoksg02xw;
    int RT0rbq63QSm [(129 - 124)] [(275 - 270)];
    int min [(946 - 941)];
    int h8cbthZu5O7;
    int HpaoQeLvn0yg [(589 - 584)];
    eufSICnp5 = (337 - 337);
    for (rl9Zoksg02xw = (841 - 841); (267 - 262) > rl9Zoksg02xw; rl9Zoksg02xw = rl9Zoksg02xw + (298 - 297)) {
        h8cbthZu5O7 = (922 - 922);
        for (; (403 - 398) > h8cbthZu5O7;) {
            scanf ("%d", &RT0rbq63QSm[rl9Zoksg02xw][h8cbthZu5O7]);
            h8cbthZu5O7 = h8cbthZu5O7 + (689 - 688);
        }
    }
    for (h8cbthZu5O7 = (594 - 594); (188 - 183) > h8cbthZu5O7; h8cbthZu5O7 = h8cbthZu5O7 + (268 - 267)) {
        for (rl9Zoksg02xw = (68 - 68); (297 - 292) > rl9Zoksg02xw; rl9Zoksg02xw = rl9Zoksg02xw + (116 - 115)) {
            if (rl9Zoksg02xw == (778 - 778)) {
                min[h8cbthZu5O7] = RT0rbq63QSm[rl9Zoksg02xw][h8cbthZu5O7];
            }
            else if (min[h8cbthZu5O7] > RT0rbq63QSm[rl9Zoksg02xw][h8cbthZu5O7]) {
                min[h8cbthZu5O7] = RT0rbq63QSm[rl9Zoksg02xw][h8cbthZu5O7];
            }
        }
    }
    {
        rl9Zoksg02xw = (381 - 381);
        for (; rl9Zoksg02xw < (705 - 700);) {
            for (h8cbthZu5O7 = (80 - 80); (118 - 113) > h8cbthZu5O7; h8cbthZu5O7 = h8cbthZu5O7 + (675 - 674)) {
                if (!((503 - 503) != h8cbthZu5O7)) {
                    HpaoQeLvn0yg[rl9Zoksg02xw] = RT0rbq63QSm[rl9Zoksg02xw][h8cbthZu5O7];
                }
                else if (RT0rbq63QSm[rl9Zoksg02xw][h8cbthZu5O7] > HpaoQeLvn0yg[rl9Zoksg02xw]) {
                    HpaoQeLvn0yg[rl9Zoksg02xw] = RT0rbq63QSm[rl9Zoksg02xw][h8cbthZu5O7];
                }
            }
            rl9Zoksg02xw = rl9Zoksg02xw + (928 - 927);
        }
    }
    for (h8cbthZu5O7 = (84 - 84); (604 - 599) > h8cbthZu5O7; h8cbthZu5O7 = h8cbthZu5O7 + (76 - 75)) {
        for (rl9Zoksg02xw = (240 - 240); rl9Zoksg02xw < (408 - 403); rl9Zoksg02xw = rl9Zoksg02xw + (562 - 561)) {
            if (HpaoQeLvn0yg[rl9Zoksg02xw] == min[h8cbthZu5O7]) {
                eufSICnp5 = (411 - 410);
                printf ("%d %d %d", rl9Zoksg02xw + (538 - 537), h8cbthZu5O7 + (506 - 505), HpaoQeLvn0yg[rl9Zoksg02xw]);
            }
        }
    }
    if (eufSICnp5 == (564 - 564)) {
    }
    return (975 - 975);
}

