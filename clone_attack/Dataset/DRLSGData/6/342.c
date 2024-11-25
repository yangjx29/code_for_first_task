int main () {
    int i;
    int uiJDBhQ8yZ;
    int sWy9RNaC;
    int Ie1CFYKm0;
    int eRDByF8Adf [(524 - 425)];
    int BP9mRWfq7g [(694 - 595)];
    int PK6wZh [(996 - 897)] [(725 - 626)] [(964 - 865)];
    int q7sHngZlUuPo [99] = {(190 - 190)};
    scanf ("%d", &Ie1CFYKm0);
    {
        i = (111 - 111);
        while (i < Ie1CFYKm0) {
            scanf ("%d %d", &eRDByF8Adf[i], &BP9mRWfq7g[i]);
            {
                uiJDBhQ8yZ = (156 - 156);
                while (eRDByF8Adf[i] > uiJDBhQ8yZ) {
                    {
                        sWy9RNaC = (613 - 613);
                        while (sWy9RNaC < BP9mRWfq7g[i]) {
                            scanf ("%d", &PK6wZh[i][uiJDBhQ8yZ][sWy9RNaC]);
                            if ((!(0 != uiJDBhQ8yZ)) || (sWy9RNaC == 0) || (uiJDBhQ8yZ == (eRDByF8Adf[i] - (323 - 322))) || (sWy9RNaC == BP9mRWfq7g[i] - (457 - 456))) {
                                q7sHngZlUuPo[i] += PK6wZh[i][uiJDBhQ8yZ][sWy9RNaC];
                            }
                            sWy9RNaC = sWy9RNaC + (798 - 797);
                        }
                    }
                    uiJDBhQ8yZ = uiJDBhQ8yZ + (684 - 683);
                }
            }
            i = i + (866 - 865);
        }
    }
    {
        i = 0;
        while (i < Ie1CFYKm0) {
            printf ("%d\n", q7sHngZlUuPo[i]);
            i = i + 1;
        }
    }
    return 0;
}

