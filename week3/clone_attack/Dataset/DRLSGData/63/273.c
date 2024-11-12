int Fms3HdAg [1000] [1000] = {0};

int main (int yXdr7yO9B2, char *muxkgUtvW []) {
    int Ua6nUv [200] [200];
    int ni4sp629BkE;
    int hyR4CMxNugvU;
    int dSX7gLU;
    int EYN9ng [200] [200];
    int y4PYM6iha;
    int IBNqcLgw;
    int hEwLrz;
    int h24o3adWCuK;
    scanf ("%d %d", &y4PYM6iha, &IBNqcLgw);
    {
        ni4sp629BkE = 0;
        while (ni4sp629BkE < y4PYM6iha) {
            {
                hyR4CMxNugvU = 0;
                while (hyR4CMxNugvU < IBNqcLgw) {
                    scanf ("%d", &Ua6nUv[ni4sp629BkE][hyR4CMxNugvU]);
                    hyR4CMxNugvU = hyR4CMxNugvU + 1;
                }
            }
            ni4sp629BkE = ni4sp629BkE + 1;
        }
    }
    scanf ("%d %d", &hEwLrz, &h24o3adWCuK);
    {
        ni4sp629BkE = 0;
        while (ni4sp629BkE < hEwLrz) {
            {
                hyR4CMxNugvU = 0;
                while (hyR4CMxNugvU < h24o3adWCuK) {
                    scanf ("%d", &EYN9ng[ni4sp629BkE][hyR4CMxNugvU]);
                    hyR4CMxNugvU = hyR4CMxNugvU + 1;
                }
            }
            ni4sp629BkE++;
        }
    }
    {
        ni4sp629BkE = 0;
        while (ni4sp629BkE < y4PYM6iha) {
            {
                hyR4CMxNugvU = 0;
                while (hyR4CMxNugvU < h24o3adWCuK) {
                    {
                        dSX7gLU = 0;
                        while (dSX7gLU < hEwLrz) {
                            Fms3HdAg[ni4sp629BkE][hyR4CMxNugvU] = Fms3HdAg[ni4sp629BkE][hyR4CMxNugvU] + Ua6nUv[ni4sp629BkE][dSX7gLU] * EYN9ng[dSX7gLU][hyR4CMxNugvU];
                            dSX7gLU = dSX7gLU + 1;
                        }
                    }
                    hyR4CMxNugvU++;
                }
            }
            ni4sp629BkE++;
        }
    }
    {
        ni4sp629BkE = 0;
        while (ni4sp629BkE < y4PYM6iha) {
            {
                hyR4CMxNugvU = 0;
                while (hyR4CMxNugvU < h24o3adWCuK - 1) {
                    printf ("%d ", Fms3HdAg[ni4sp629BkE][hyR4CMxNugvU]);
                    hyR4CMxNugvU++;
                }
            }
            printf ("%d\n", Fms3HdAg[ni4sp629BkE][h24o3adWCuK - 1]);
            ni4sp629BkE++;
        }
    }
    return 0;
}

