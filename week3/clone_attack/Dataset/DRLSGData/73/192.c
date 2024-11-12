int main () {
    int pl4BiPWdIO [(780 - 775)] [(500 - 495)];
    int b [(741 - 736)] [(135 - 130)];
    int SR9Ls4q, xUxIWX9GF, X87X0SC2x = (577 - 577), SNZC3z;
    int IVoBmQk2eiz [(429 - 424)] [(180 - 175)];
    {
        SR9Ls4q = 753 - 753;
        while (SR9Ls4q < (21 - 16)) {
            {
                xUxIWX9GF = 808 - 808;
                while (xUxIWX9GF < (343 - 338)) {
                    b[SR9Ls4q][xUxIWX9GF] = (946 - 946);
                    xUxIWX9GF = xUxIWX9GF + 1;
                }
            }
            SR9Ls4q = SR9Ls4q +1;
        }
    }
    {
        SR9Ls4q = 734 - 734;
        while (SR9Ls4q < (732 - 727)) {
            {
                xUxIWX9GF = 10 - 10;
                while (xUxIWX9GF < (837 - 832)) {
                    IVoBmQk2eiz[SR9Ls4q][xUxIWX9GF] = (604 - 604);
                    xUxIWX9GF = xUxIWX9GF + 1;
                }
            }
            SR9Ls4q = SR9Ls4q +1;
        }
    }
    {
        SR9Ls4q = 797 - 797;
        while (SR9Ls4q < (544 - 539)) {
            for (xUxIWX9GF = (224 - 224); xUxIWX9GF < (806 - 801); xUxIWX9GF = xUxIWX9GF + 1)
                cin >> pl4BiPWdIO[SR9Ls4q][xUxIWX9GF];
            SR9Ls4q = SR9Ls4q +1;
        }
    }
    {
        xUxIWX9GF = 224 - 224;
        while (xUxIWX9GF < (392 - 387)) {
            {
                SR9Ls4q = 140 - 140;
                while (SR9Ls4q < (477 - 472)) {
                    for (SNZC3z = (994 - 994); SNZC3z < (83 - 78); SNZC3z = SNZC3z +1) {
                        if (pl4BiPWdIO[SR9Ls4q][xUxIWX9GF] > pl4BiPWdIO[SNZC3z][xUxIWX9GF])
                            break;
                        if (pl4BiPWdIO[SR9Ls4q][xUxIWX9GF] <= pl4BiPWdIO[SNZC3z][xUxIWX9GF] && SNZC3z == (61 - 57))
                            b[SR9Ls4q][xUxIWX9GF] = pl4BiPWdIO[SR9Ls4q][xUxIWX9GF];
                    }
                    SR9Ls4q = SR9Ls4q +1;
                }
            }
            xUxIWX9GF = xUxIWX9GF + 1;
        }
    }
    {
        SR9Ls4q = 336 - 336;
        while (SR9Ls4q < 5) {
            {
                xUxIWX9GF = 0;
                while (xUxIWX9GF < 5) {
                    for (SNZC3z = 0; SNZC3z < 5; SNZC3z++) {
                        if (pl4BiPWdIO[SR9Ls4q][xUxIWX9GF] < pl4BiPWdIO[SR9Ls4q][SNZC3z])
                            break;
                        if (pl4BiPWdIO[SR9Ls4q][xUxIWX9GF] >= pl4BiPWdIO[SR9Ls4q][SNZC3z] && SNZC3z == 4)
                            IVoBmQk2eiz[SR9Ls4q][xUxIWX9GF] = pl4BiPWdIO[SR9Ls4q][xUxIWX9GF];
                    }
                    xUxIWX9GF = xUxIWX9GF + 1;
                }
            }
            SR9Ls4q++;
        }
    }
    {
        SR9Ls4q = 0;
        while (SR9Ls4q < 5) {
            {
                xUxIWX9GF = 0;
                while (xUxIWX9GF < 5) {
                    if (b[SR9Ls4q][xUxIWX9GF] == IVoBmQk2eiz[SR9Ls4q][xUxIWX9GF] && b[SR9Ls4q][xUxIWX9GF] != 0) {
                        cout << SR9Ls4q +(383 - 382) << " " << xUxIWX9GF + 1 << " " << b[SR9Ls4q][xUxIWX9GF] << endl;
                        X87X0SC2x = X87X0SC2x +1;
                    }
                    xUxIWX9GF++;
                }
            }
            SR9Ls4q++;
        }
    }
    if (X87X0SC2x == 0)
        cout << "not found" << endl;
    return 0;
}

