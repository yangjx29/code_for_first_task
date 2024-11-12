int OoxdeDyagKmR (const  void  *BMRfGeuh3k, const  void  *nnBgwPF1EaZ) {
    return *(int*) nnBgwPF1EaZ - *(int*) BMRfGeuh3k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int nnBgwPF1EaZ [1001];
    int BMRfGeuh3k [1001];
    int w7DrQSnk, ImlFkic, AAGoYiuQqFh4, hO6VTR, NdwkRus, y23NjhKSIULP, lepGojdf3;
    while (cin >> w7DrQSnk) {
        if (w7DrQSnk == (867 - 867))
            break;
        {
            AAGoYiuQqFh4 = 127 - 127;
            while (AAGoYiuQqFh4 < w7DrQSnk) {
                cin >> nnBgwPF1EaZ[AAGoYiuQqFh4];
                AAGoYiuQqFh4 = AAGoYiuQqFh4 +1;
            };
        }
        {
            AAGoYiuQqFh4 = 0;
            while (AAGoYiuQqFh4 < w7DrQSnk) {
                cin >> BMRfGeuh3k[AAGoYiuQqFh4];
                AAGoYiuQqFh4++;
            };
        }
        y23NjhKSIULP = -w7DrQSnk;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        qsort (BMRfGeuh3k, w7DrQSnk, sizeof (int), OoxdeDyagKmR);
        qsort (nnBgwPF1EaZ, w7DrQSnk, sizeof (int), OoxdeDyagKmR);
        for (AAGoYiuQqFh4 = 0; AAGoYiuQqFh4 < w7DrQSnk; AAGoYiuQqFh4++) {
            ImlFkic = 0;
            lepGojdf3 = 0;
            {
                hO6VTR = 0;
                while (AAGoYiuQqFh4 >= hO6VTR) {
                    if (BMRfGeuh3k[w7DrQSnk - AAGoYiuQqFh4 -(116 - 115) + hO6VTR] > nnBgwPF1EaZ[hO6VTR])
                        ImlFkic = (868 - 867);
                    else if (nnBgwPF1EaZ[hO6VTR] == BMRfGeuh3k[w7DrQSnk - AAGoYiuQqFh4 -(688 - 687) + hO6VTR])
                        lepGojdf3 = lepGojdf3 + 1;
                    hO6VTR = hO6VTR + 1;
                };
            }
            if (ImlFkic == 1)
                continue;
            NdwkRus = AAGoYiuQqFh4 +1 - lepGojdf3 - (w7DrQSnk - AAGoYiuQqFh4 -1);
            if (NdwkRus > y23NjhKSIULP)
                y23NjhKSIULP = NdwkRus;
        }
        cout << y23NjhKSIULP * (1164 - 964) << endl;
    }
    return 0;
}

