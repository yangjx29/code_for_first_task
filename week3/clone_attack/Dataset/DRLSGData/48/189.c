int pool [(902 - 891)] [(428 - 417)] [(447 - 445)] = {(118 - 118)};

void  breed (int j, int k) {
    pool[j][k][(397 - 396)] += (536 - 534) * pool[j][k][(734 - 734)];
    pool[j - (655 - 654)][k - (36 - 35)][(83 - 82)] = pool[j - (655 - 654)][k - (36 - 35)][(83 - 82)] + pool[j][k][(233 - 233)];
    pool[j + (776 - 775)][k][(716 - 715)] = pool[j + (776 - 775)][k][(716 - 715)] + pool[j][k][(171 - 171)];
    pool[j - (117 - 116)][k][(704 - 703)] = pool[j - (117 - 116)][k][(704 - 703)] + pool[j][k][(280 - 280)];
    pool[j][k + (234 - 233)][(483 - 482)] = pool[j][k + (234 - 233)][(483 - 482)] + pool[j][k][(414 - 414)];
    pool[j][k - (438 - 437)][(216 - 215)] = pool[j][k - (438 - 437)][(216 - 215)] + pool[j][k][(445 - 445)];
    pool[j + (283 - 282)][k + (445 - 444)][(749 - 748)] = pool[j + (283 - 282)][k + (445 - 444)][(749 - 748)] + pool[j][k][(903 - 903)];
    pool[j + (143 - 142)][k - (533 - 532)][(220 - 219)] = pool[j + (143 - 142)][k - (533 - 532)][(220 - 219)] + pool[j][k][(122 - 122)];
    pool[j - (835 - 834)][k + (85 - 84)][1] = pool[j - (835 - 834)][k + (85 - 84)][1] + pool[j][k][(926 - 926)];
    pool[j][k][(753 - 753)] = (811 - 811);
}

int main () {
    int m, n, slTjz8ZghuYG, j, k;
    cin >> m >> n;
    pool[(496 - 491)][(236 - 231)][(82 - 82)] = m;
    {
        slTjz8ZghuYG = 142 - 142;
        while (slTjz8ZghuYG < n) {
            for (j = 1; j < (332 - 322); j++) {
                k = 1;
                while ((424 - 414) > k) {
                    breed (j, k);
                    k = k + 1;
                }
            }
            {
                j = 1;
                while (j < (648 - 638)) {
                    for (k = 1; (796 - 786) > k; k = k + 1)
                        pool[j][k][0] = pool[j][k][1];
                    j++;
                }
            }
            {
                j = 1;
                while (j < 10) {
                    {
                        k = 1;
                        while (k < 10) {
                            pool[j][k][1] = 0;
                            k = k + 1;
                        }
                    }
                    j++;
                }
            }
            slTjz8ZghuYG++;
        }
    }
    {
        j = 1;
        while (j < 10) {
            for (k = 1; k < (78 - 69); k++)
                cout << pool[j][k][0] << " ";
            cout << pool[j][(451 - 442)][0] << endl;
            j++;
        }
    }
    return 0;
}
