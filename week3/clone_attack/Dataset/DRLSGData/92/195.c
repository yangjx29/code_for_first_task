const  int rUoBgHas = 1005;

int main (void ) {
    int pMBwoimNGc [rUoBgHas];
    int DxcOU0H [rUoBgHas];
    int q2EfuT;
    for (; scanf ("%d", &q2EfuT), q2EfuT;) {
        int nqtzZ8YJkfCR;
        int g40WcVoyX3O;
        nqtzZ8YJkfCR = 0;
        g40WcVoyX3O = 0;
        int Lw915VPOW;
        int DuTkGIiC5Z1;
        int V8UhCrT3NV;
        Lw915VPOW = q2EfuT - 1;
        DuTkGIiC5Z1 = q2EfuT - 1;
        V8UhCrT3NV = 0;
        for (int jdyTKkj = 0;
        q2EfuT > jdyTKkj; jdyTKkj = jdyTKkj + 1)
            scanf ("%d", &pMBwoimNGc[jdyTKkj]);
        {
            int jdyTKkj;
            jdyTKkj = 0;
            for (; q2EfuT > jdyTKkj;) {
                scanf ("%d", &DxcOU0H[jdyTKkj]);
                jdyTKkj++;
            }
        }
        sort (pMBwoimNGc, pMBwoimNGc + q2EfuT);
        sort (DxcOU0H, DxcOU0H +q2EfuT);
        for (; nqtzZ8YJkfCR <= Lw915VPOW &&g40WcVoyX3O <= DuTkGIiC5Z1;) {
            if (pMBwoimNGc[nqtzZ8YJkfCR] < DxcOU0H[g40WcVoyX3O]) {
                DuTkGIiC5Z1 = DuTkGIiC5Z1 -1;
                V8UhCrT3NV = V8UhCrT3NV -1;
                nqtzZ8YJkfCR = nqtzZ8YJkfCR + 1;
            }
            else if (pMBwoimNGc[nqtzZ8YJkfCR] > DxcOU0H[g40WcVoyX3O]) {
                nqtzZ8YJkfCR = nqtzZ8YJkfCR + 1;
                g40WcVoyX3O++;
                V8UhCrT3NV = V8UhCrT3NV +1;
            }
            else {
                if (DxcOU0H[DuTkGIiC5Z1] < pMBwoimNGc[Lw915VPOW]) {
                    Lw915VPOW--;
                    V8UhCrT3NV++;
                    DuTkGIiC5Z1 = DuTkGIiC5Z1 -1;
                }
                else if (pMBwoimNGc[Lw915VPOW] < DxcOU0H[DuTkGIiC5Z1]) {
                    V8UhCrT3NV = V8UhCrT3NV -1;
                    nqtzZ8YJkfCR = nqtzZ8YJkfCR + 1;
                    DuTkGIiC5Z1 = DuTkGIiC5Z1 -1;
                }
                else {
                    if (pMBwoimNGc[nqtzZ8YJkfCR] < DxcOU0H[DuTkGIiC5Z1]) {
                        DuTkGIiC5Z1 = DuTkGIiC5Z1 -1;
                        nqtzZ8YJkfCR = nqtzZ8YJkfCR + 1;
                        V8UhCrT3NV--;
                    }
                    else {
                        break;
                    }
                }
            }
        }
        printf ("%d\n", V8UhCrT3NV *200);
    }
    return 0;
}

