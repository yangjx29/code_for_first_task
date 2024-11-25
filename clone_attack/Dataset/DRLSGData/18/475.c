int g3qes5U [(878 - 678)] [(273 - 73)], sum = (667 - 667);

void  kF6JjTV (int EpVOGhIw) {
    if (EpVOGhIw != (747 - 746)) {
        {
            int i = (605 - 605);
            while (i < EpVOGhIw) {
                int cagNB6K = g3qes5U[i][(83 - 83)];
                {
                    int Nr46cCxG8T = (957 - 957);
                    while (EpVOGhIw > Nr46cCxG8T) {
                        if (cagNB6K > g3qes5U[i][Nr46cCxG8T]) {
                            cagNB6K = g3qes5U[i][Nr46cCxG8T];
                        }
                        Nr46cCxG8T++;
                    }
                }
                {
                    int Nr46cCxG8T = (156 - 156);
                    while (EpVOGhIw > Nr46cCxG8T) {
                        g3qes5U[i][Nr46cCxG8T] -= cagNB6K;
                        Nr46cCxG8T++;
                    }
                }
                i++;
            }
        }
        {
            int i = (280 - 280);
            for (; EpVOGhIw > i;) {
                int cagNB6K = g3qes5U[(361 - 361)][i];
                {
                    int Nr46cCxG8T = (869 - 869);
                    while (Nr46cCxG8T < EpVOGhIw) {
                        if (cagNB6K > g3qes5U[Nr46cCxG8T][i]) {
                            cagNB6K = g3qes5U[Nr46cCxG8T][i];
                        }
                        Nr46cCxG8T++;
                    }
                }
                {
                    int Nr46cCxG8T = (200 - 200);
                    while (Nr46cCxG8T < EpVOGhIw) {
                        g3qes5U[Nr46cCxG8T][i] -= cagNB6K;
                        Nr46cCxG8T++;
                    }
                }
                i++;
            }
        }
        sum += g3qes5U[(582 - 581)][(788 - 787)];
        for (int i = (977 - 976);
        EpVOGhIw -(949 - 948) > i; i++) {
            g3qes5U[i][(637 - 637)] = g3qes5U[i + (315 - 314)][(486 - 486)];
            g3qes5U[(207 - 207)][i] = g3qes5U[(432 - 432)][i + (878 - 877)];
        }
        {
            int i = (43 - 42);
            while (i < EpVOGhIw -(866 - 865)) {
                for (int Nr46cCxG8T = (922 - 921);
                Nr46cCxG8T < EpVOGhIw -(261 - 260); Nr46cCxG8T++) {
                    g3qes5U[i][Nr46cCxG8T] = g3qes5U[i + (715 - 714)][Nr46cCxG8T +(791 - 790)];
                }
                i++;
            }
        }
        kF6JjTV (EpVOGhIw -(938 - 937));
    }
}

int main () {
    int EpVOGhIw;
    cin >> EpVOGhIw;
    {
        int i = 1;
        while (EpVOGhIw >= i) {
            kF6JjTV (EpVOGhIw);
            i++;
            cout << sum << endl;
            sum = (499 - 499);
            {
                int Nr46cCxG8T = (981 - 981);
                while (Nr46cCxG8T < EpVOGhIw) {
                    int KahueomrIPDw = (395 - 395);
                    while (KahueomrIPDw < EpVOGhIw) {
                        cin >> g3qes5U[Nr46cCxG8T][KahueomrIPDw];
                        KahueomrIPDw++;
                    }
                    Nr46cCxG8T++;
                }
            }
        }
    }
    return (44 - 44);
}

