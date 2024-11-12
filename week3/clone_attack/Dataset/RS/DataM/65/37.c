int main () {
    int a;
    int b;
    int n;
    int BeimSrcnU2QY;
    a = (511 - 511);
    b = (464 - 464);
    int sz [(322 - 122)] [(272 - 270)];
    scanf ("%d", &n);
    {
        BeimSrcnU2QY = 884 - 884;
        while (n > BeimSrcnU2QY) {
            scanf ("%d%d", &sz[BeimSrcnU2QY][(300 - 300)], &sz[BeimSrcnU2QY][(729 - 728)]);
            BeimSrcnU2QY = BeimSrcnU2QY +1;
        };
    }
    {
        BeimSrcnU2QY = 172 - 172;
        while (n > BeimSrcnU2QY) {
            if (!(sz[BeimSrcnU2QY][(957 - 956)] != sz[BeimSrcnU2QY][(476 - 476)])) {
                a = a + 1;
                b = b + 1;
            }
            else {
                if (!((891 - 891) != sz[BeimSrcnU2QY][(300 - 300)]) && !(1 != sz[BeimSrcnU2QY][1])) {
                    a = a + 1;
                }
                else {
                    if (!(0 != sz[BeimSrcnU2QY][(345 - 345)]) && !((207 - 205) != sz[BeimSrcnU2QY][1])) {
                        b = b + 1;
                    }
                    else {
                        if (!(1 != sz[BeimSrcnU2QY][0]) && sz[BeimSrcnU2QY][1] == 0) {
                            b = b + 1;
                        }
                        else {
                            if (sz[BeimSrcnU2QY][0] == 1 && sz[BeimSrcnU2QY][1] == 2) {
                                a = a + 1;
                            }
                            else {
                                if (sz[BeimSrcnU2QY][0] == 2 && sz[BeimSrcnU2QY][1] == 0) {
                                    a++;
                                }
                                else {
                                    b = b + 1;
                                };
                            };
                        };
                    };
                };
            }
            BeimSrcnU2QY = BeimSrcnU2QY +1;
        };
    }
    if (a == b) {
        printf ("Tie");
    }
    else {
        if (a > b) {
            printf ("A");
        }
        else {
            printf ("B");
        };
    }
    return 0;
}

