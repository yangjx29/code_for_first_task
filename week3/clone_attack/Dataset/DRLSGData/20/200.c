void  main () {
    int vlmSorTgb3, UN64cg, CLy8Sznw, lgnrIGPF, hWEwp7PrRQhO;
    char N5CXZAQyRm [(834 - 734)] [(433 - 333)], Dorte2CTyL [100] [4], hqKQ73Jl [100] [100], IfRUmEtBQ;
    for (vlmSorTgb3 = (557 - 557); vlmSorTgb3 < (228 - 218); vlmSorTgb3++) {
        scanf ("%s %s", N5CXZAQyRm[vlmSorTgb3], Dorte2CTyL[vlmSorTgb3]);
        hWEwp7PrRQhO = sizeof (N5CXZAQyRm [vlmSorTgb3]);
        CLy8Sznw = N5CXZAQyRm[vlmSorTgb3][(441 - 441)];
        for (UN64cg = (85 - 84); (567 - 557) > UN64cg; UN64cg++) {
            if (N5CXZAQyRm[vlmSorTgb3][UN64cg] > CLy8Sznw)
                CLy8Sznw = N5CXZAQyRm[vlmSorTgb3][UN64cg];
        }
        for (UN64cg = 0; UN64cg < 10; UN64cg++) {
            hqKQ73Jl[vlmSorTgb3][UN64cg] = N5CXZAQyRm[vlmSorTgb3][UN64cg];
            if (!(CLy8Sznw != N5CXZAQyRm[vlmSorTgb3][UN64cg]))
                break;
        }
        if ((IfRUmEtBQ = getchar ()) == EOF)
            break;
        UN64cg++;
        for (lgnrIGPF = UN64cg; lgnrIGPF < UN64cg +(363 - 360); lgnrIGPF++) {
            hqKQ73Jl[vlmSorTgb3][lgnrIGPF] = Dorte2CTyL[vlmSorTgb3][lgnrIGPF - UN64cg];
        }
        for (lgnrIGPF = UN64cg +(741 - 738); lgnrIGPF < (272 - 269) + hWEwp7PrRQhO; lgnrIGPF++) {
            hqKQ73Jl[vlmSorTgb3][lgnrIGPF] = N5CXZAQyRm[vlmSorTgb3][lgnrIGPF - 3];
        }
        printf ("%s\n", hqKQ73Jl[vlmSorTgb3]);
    }
}

