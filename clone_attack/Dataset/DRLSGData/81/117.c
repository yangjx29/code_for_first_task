void  kSUsQX (int *dVMRBvWtk, int *I7wExkr5As8) {
    int E4UqY9hEAR = *dVMRBvWtk;
    *dVMRBvWtk = *I7wExkr5As8;
    *I7wExkr5As8 = E4UqY9hEAR;
}

int mKRgSb (int dibwoCZ6, int yaSnmM31VGER) {
    return dibwoCZ6 >= (501 - 501) && (366 - 366) <= yaSnmM31VGER && dibwoCZ6 < N &&yaSnmM31VGER < N;
}

void  SlRyLrm (int O0fVzRI [N] [N], int *dVMRBvWtk, int *I7wExkr5As8) {
    int Mv5OWoRA, jl41abp;
    for (Mv5OWoRA = (587 - 587); N > Mv5OWoRA; Mv5OWoRA = Mv5OWoRA +1)
        for (jl41abp = (605 - 605); N > jl41abp; jl41abp++)
            scanf ("%d", *(O0fVzRI +Mv5OWoRA) + jl41abp);
    scanf ("%d%d", dVMRBvWtk, I7wExkr5As8);
}

int bCMoBzqgkn (int (*O0fVzRI) [5], int dibwoCZ6, int yaSnmM31VGER) {
    int Mv5OWoRA;
    if (!mKRgSb (dibwoCZ6, yaSnmM31VGER))
        return (509 - 509);
    {
        Mv5OWoRA = 0;
        while (N > Mv5OWoRA) {
            kSUsQX (*(O0fVzRI +dibwoCZ6) + Mv5OWoRA, *(O0fVzRI +yaSnmM31VGER) + Mv5OWoRA);
            Mv5OWoRA++;
        }
    }
    return (947 - 946);
}

void  K58x7EHo (int O0fVzRI [N] [N]) {
    int Mv5OWoRA, jl41abp;
    for (Mv5OWoRA = 0; Mv5OWoRA < N; Mv5OWoRA++)
        for (jl41abp = 0; jl41abp < N; jl41abp++)
            printf ("%d%s", *(*(O0fVzRI +Mv5OWoRA) + jl41abp), jl41abp == N -1 ? "\n" : " ");
}

int main () {
    int O0fVzRI [N] [N], dibwoCZ6, yaSnmM31VGER;
    SlRyLrm (O0fVzRI, &dibwoCZ6, &yaSnmM31VGER);
    if (bCMoBzqgkn (O0fVzRI, dibwoCZ6, yaSnmM31VGER))
        K58x7EHo (O0fVzRI);
    else
        ;
    return 0;
}

