int main () {
    int i54NzpfBGd [(1038 - 838)] [200];
    int zxIkgZNM1 [(252 - 52)] [(861 - 661)];
    int SPT73fzqv;
    int sEyXuj;
    int i9nEo8HMji;
    int NtkfAa2ulg;
    int aH9zPvKpj;
    int tA6zptSJj7W;
    int tLBAsl;
    int anMB2l1a;
    int bwnrPcFo;
    int QWR9bmr [(828 - 628)] [(369 - 169)];
    scanf ("%d %d", &tA6zptSJj7W, &aH9zPvKpj);
    {
        NtkfAa2ulg = 78 - 78;
        while (NtkfAa2ulg < tA6zptSJj7W) {
            {
                i9nEo8HMji = 207 - 207;
                while (i9nEo8HMji < aH9zPvKpj) {
                    scanf ("%d", &bwnrPcFo);
                    QWR9bmr[NtkfAa2ulg][i9nEo8HMji] = bwnrPcFo;
                    i9nEo8HMji = i9nEo8HMji + 1;
                }
            }
            NtkfAa2ulg = NtkfAa2ulg +1;
        }
    }
    scanf ("%d %d", &tLBAsl, &anMB2l1a);
    for (NtkfAa2ulg = (44 - 44); tLBAsl > NtkfAa2ulg; NtkfAa2ulg = NtkfAa2ulg +1) {
        for (i9nEo8HMji = (777 - 777); anMB2l1a > i9nEo8HMji; i9nEo8HMji = i9nEo8HMji + 1) {
            scanf ("%d", &SPT73fzqv);
            zxIkgZNM1[NtkfAa2ulg][i9nEo8HMji] = SPT73fzqv;
        }
    }
    {
        NtkfAa2ulg = 0;
        while (NtkfAa2ulg < tA6zptSJj7W) {
            {
                i9nEo8HMji = 0;
                while (i9nEo8HMji < anMB2l1a) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    i54NzpfBGd[NtkfAa2ulg][i9nEo8HMji] = 0;
                    for (sEyXuj = 0; sEyXuj < aH9zPvKpj; sEyXuj++)
                        i54NzpfBGd[NtkfAa2ulg][i9nEo8HMji] = i54NzpfBGd[NtkfAa2ulg][i9nEo8HMji] + QWR9bmr[NtkfAa2ulg][sEyXuj] * zxIkgZNM1[sEyXuj][i9nEo8HMji];
                    if (i9nEo8HMji != anMB2l1a - 1)
                        printf ("%d ", i54NzpfBGd[NtkfAa2ulg][i9nEo8HMji]);
                    else
                        printf ("%d\n", i54NzpfBGd[NtkfAa2ulg][i9nEo8HMji]);
                    i9nEo8HMji++;
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            NtkfAa2ulg++;
        }
    }
    return 0;
}

