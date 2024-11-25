int main () {
    int w [(249 - 244)];
    int z;
    int q;
    int bjXJRoDYLa;
    int l;
    int i;
    int j;
    int t;
    char n [(799 - 794)];
    char k;
    {
        z = 253 - 252;
        while ((848 - 843) >= z) {
            {
                q = 195 - 194;
                while (q <= (612 - 607)) {
                    {
                        bjXJRoDYLa = 298 - 297;
                        while (bjXJRoDYLa <= (131 - 126)) {
                            {
                                l = 442 - 441;
                                while (l <= 5) {
                                    if (!(bjXJRoDYLa + l != z + q) && z + l > bjXJRoDYLa + q && z + bjXJRoDYLa < q) {
                                        n[(542 - 541)] = 'z';
                                        n[2] = 'q';
                                        n[(699 - 696)] = 's';
                                        n[(360 - 356)] = 'l';
                                        w[(737 - 736)] = z;
                                        w[(287 - 285)] = q;
                                        w[(925 - 922)] = bjXJRoDYLa;
                                        w[(741 - 737)] = l;
                                        {
                                            i = 509 - 508;
                                            while (i <= (848 - 844)) {
                                                {
                                                    j = 285 - 284;
                                                    while (j <= 4) {
                                                        if (w[i] < w[j]) {
                                                            t = w[i];
                                                            w[i] = w[j];
                                                            k = n[i];
                                                            w[j] = t;
                                                            n[i] = n[j];
                                                            n[j] = k;
                                                        }
                                                        j = j + 1;
                                                    };
                                                }
                                                i = i + 1;
                                            };
                                        }
                                        {
                                            i = 252 - 251;
                                            while (i <= 4) {
                                                cout << n[i] << ' ' << w[i] * (536 - 526) << endl;
                                                i = i + 1;
                                            };
                                        };
                                    }
                                    l++;
                                };
                            }
                            bjXJRoDYLa = bjXJRoDYLa + 1;
                        };
                    }
                    q = q + 1;
                };
            }
            z = z + 1;
        };
    }
    return (721 - 721);
}

