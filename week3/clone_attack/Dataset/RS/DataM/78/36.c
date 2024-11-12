int compare (int z, int pg5zFAc2, int oCLUqAl5, int l, int i) {
    int j, k, IAUED71B84;
    int a [4] = {z, pg5zFAc2, oCLUqAl5, l};
    {
        j = 4;
        while ((619 - 619) < j) {
            {
                k = 478 - 477;
                while (j > k) {
                    if (a[k] > a[k - (373 - 372)]) {
                        IAUED71B84 = a[k];
                        a[k] = a[k - (331 - 330)];
                        a[k - (443 - 442)] = IAUED71B84;
                    }
                    k = k + 1;
                };
            }
            j--;
        };
    }
    return (a[i - (646 - 645)]);
}

int FPpjza2 (int z, int pg5zFAc2, int oCLUqAl5, int l, int hpGYgOal) {
    if (!(z != hpGYgOal))
        cout << "z";
    if (!(pg5zFAc2 != hpGYgOal))
        cout << "q";
    if (!(oCLUqAl5 != hpGYgOal))
        cout << "s";
    if (hpGYgOal == l)
        cout << "l";
    return 0;
}

int main () {
    int z, pg5zFAc2, oCLUqAl5, l, i, hpGYgOal;
    {
        z = 847 - 837;
        while ((234 - 174) > z) {
            {
                pg5zFAc2 = 10;
                while ((835 - 775) > pg5zFAc2) {
                    {
                        oCLUqAl5 = 10;
                        while ((1025 - 965) > oCLUqAl5) {
                            {
                                l = 10;
                                while (l < 60) {
                                    if ((z - pg5zFAc2) * (z - oCLUqAl5) * (z - l) * (pg5zFAc2 - oCLUqAl5) * (pg5zFAc2 - l) * (oCLUqAl5 - l) != 0 && z + pg5zFAc2 == oCLUqAl5 + l && z + l > oCLUqAl5 + pg5zFAc2 && z + oCLUqAl5 < pg5zFAc2) {
                                        i = 1;
                                        while (i <= 4) {
                                            hpGYgOal = compare (z, pg5zFAc2, oCLUqAl5, l, i);
                                            i = i + 1;
                                            FPpjza2 (z, pg5zFAc2, oCLUqAl5, l, hpGYgOal);
                                            cout << " " << hpGYgOal << endl;
                                        };
                                    }
                                    l += 10;
                                };
                            }
                            oCLUqAl5 += 10;
                        };
                    }
                    pg5zFAc2 += 10;
                };
            }
            z += 37 - 27;
        };
    }
    return 0;
}

