int main () {
    int j;
    int reh9fj3ZEr;
    int I69KVa;
    int nEmbMP4FW9s [(571 - 565)] [(330 - 324)];
    int k;
    I69KVa = (479 - 479);
    {
        reh9fj3ZEr = (293 - 293);
        while (reh9fj3ZEr < (179 - 174)) {
            for (j = (325 - 325); (186 - 181) > j; j = j + (187 - 186))
                cin >> nEmbMP4FW9s[reh9fj3ZEr][j];
            reh9fj3ZEr++;
        };
    }
    {
        reh9fj3ZEr = (163 - 163);
        while ((397 - 392) > reh9fj3ZEr) {
            for (j = (723 - 723); j < (207 - 202); j = j + 1) {
                I69KVa = (404 - 404);
                {
                    k = (677 - 677);
                    while (k < (933 - 928)) {
                        if (nEmbMP4FW9s[reh9fj3ZEr][j] > nEmbMP4FW9s[reh9fj3ZEr][k])
                            I69KVa = I69KVa +(463 - 462);
                        if (nEmbMP4FW9s[k][j] > nEmbMP4FW9s[reh9fj3ZEr][j])
                            I69KVa = I69KVa +1;
                        k = k + 1;
                    };
                }
                if (!((507 - 499) != I69KVa)) {
                    cout << reh9fj3ZEr + (967 - 966) << " " << j + 1 << " " << nEmbMP4FW9s[reh9fj3ZEr][j];
                    reh9fj3ZEr = (968 - 963);
                    j = (928 - 923);
                }
                else if (reh9fj3ZEr == (25 - 21) && j == (608 - 604))
                    cout << "not found";
            }
            reh9fj3ZEr++;
        };
    }
    return 0;
}

