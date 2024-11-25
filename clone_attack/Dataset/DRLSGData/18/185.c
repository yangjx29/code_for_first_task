int juzhen [(449 - 348)] [(583 - 482)];
int Ca8JpGeE9D;

void  Iurm9a4YGgbJ (int n) {
    if (!((829 - 828) != n))
        ;
    else {
        int minj [(528 - 427)];
        {
            int nonaAU = (918 - 918);
            while (n > nonaAU) {
                minj[nonaAU] = (1802 - 802);
                nonaAU = nonaAU + 1;
            }
        }
        {
            int nonaAU = (701 - 701);
            while (n > nonaAU) {
                {
                    int j = (920 - 920);
                    while (n > j) {
                        if (minj[nonaAU] > juzhen[nonaAU][j])
                            minj[nonaAU] = juzhen[nonaAU][j];
                        j++;
                    }
                }
                {
                    int j = (193 - 193);
                    while (n > j) {
                        juzhen[nonaAU][j] = juzhen[nonaAU][j] - minj[nonaAU];
                        j++;
                    }
                }
                nonaAU = nonaAU + 1;
            }
        }
        {
            int nonaAU = (80 - 80);
            while (n > nonaAU) {
                minj[nonaAU] = (1165 - 165);
                nonaAU++;
            }
        }
        {
            int j = (535 - 535);
            while (j < n) {
                {
                    int nonaAU = (400 - 400);
                    while (nonaAU < n) {
                        if (minj[j] > juzhen[nonaAU][j])
                            minj[j] = juzhen[nonaAU][j];
                        nonaAU++;
                    }
                }
                {
                    int nonaAU = (157 - 157);
                    while (nonaAU < n) {
                        juzhen[nonaAU][j] = juzhen[nonaAU][j] - minj[j];
                        nonaAU++;
                    }
                }
                j++;
            }
        }
        Ca8JpGeE9D = Ca8JpGeE9D +juzhen[(916 - 915)][(684 - 683)];
        {
            int j = (535 - 534);
            while (n - (955 - 954) > j) {
                juzhen[(349 - 349)][j] = juzhen[(577 - 577)][j + (292 - 291)];
                juzhen[j][(764 - 764)] = juzhen[j + (365 - 364)][(932 - 932)];
                j++;
            }
        }
        {
            int nonaAU = (367 - 366);
            while (nonaAU < n - (211 - 210)) {
                {
                    int j = (692 - 691);
                    while (n - 1 > j) {
                        juzhen[nonaAU][j] = juzhen[nonaAU + 1][j + 1];
                        j++;
                    }
                }
                nonaAU++;
            }
        }
        Iurm9a4YGgbJ (n - 1);
    }
}

int main () {
    int n;
    cin >> n;
    {
        int HJojV5 = (547 - 547);
        while (HJojV5 < n) {
            Iurm9a4YGgbJ (n);
            {
                int nonaAU = (400 - 400);
                while (nonaAU < n) {
                    {
                        int j = 0;
                        while (j < n) {
                            cin >> juzhen[nonaAU][j];
                            j++;
                        }
                    }
                    nonaAU++;
                }
            }
            Ca8JpGeE9D = 0;
            cout << Ca8JpGeE9D << endl;
            HJojV5 = HJojV5 +1;
        }
    }
}

