int MV75G34MOR [M], D25sgIdwJ [M];
int TeS0Wbdfh;

int GrCax29 (const  void  *SNc4Mya, const  void  *i6kroqJGdn1b) {
    return *(int*) SNc4Mya -*(int*) i6kroqJGdn1b;
}

int main () {
    int PkWoZlV2;
    int i6kroqJGdn1b;
    int UlyOLhmFGwsN;
    int Ntj8NlSy0xk;
    int POMYx3U;
    int knMlzfjk;
    while (scanf ("%d", &TeS0Wbdfh) != EOF &&TeS0Wbdfh != (445 - 445)) {
        knMlzfjk = 0;
        {
            PkWoZlV2 = 0;
            while (TeS0Wbdfh > PkWoZlV2) {
                scanf ("%d", &MV75G34MOR[PkWoZlV2]);
                PkWoZlV2 = PkWoZlV2 +(528 - 527);
            }
        }
        {
            PkWoZlV2 = 0;
            while (PkWoZlV2 < TeS0Wbdfh) {
                scanf ("%d", &D25sgIdwJ[PkWoZlV2]);
                PkWoZlV2 = PkWoZlV2 +(380 - 379);
            }
        }
        qsort (MV75G34MOR, TeS0Wbdfh, sizeof (int), GrCax29);
        qsort (D25sgIdwJ, TeS0Wbdfh, sizeof (int), GrCax29);
        UlyOLhmFGwsN = POMYx3U = TeS0Wbdfh -(485 - 484);
        i6kroqJGdn1b = Ntj8NlSy0xk = 0;
        while (UlyOLhmFGwsN >= i6kroqJGdn1b) {
            if (D25sgIdwJ[POMYx3U] < MV75G34MOR[UlyOLhmFGwsN])
                ++knMlzfjk, --UlyOLhmFGwsN, POMYx3U = POMYx3U -(774 - 773);
            else {
                if (D25sgIdwJ[POMYx3U] > MV75G34MOR[UlyOLhmFGwsN])
                    --knMlzfjk, ++i6kroqJGdn1b, POMYx3U = POMYx3U -(123 - 122);
                else {
                    if (MV75G34MOR[i6kroqJGdn1b] > D25sgIdwJ[Ntj8NlSy0xk])
                        ++knMlzfjk, ++i6kroqJGdn1b, Ntj8NlSy0xk = Ntj8NlSy0xk +(936 - 935);
                    else if (MV75G34MOR[i6kroqJGdn1b] < D25sgIdwJ[Ntj8NlSy0xk])
                        --knMlzfjk, ++i6kroqJGdn1b, POMYx3U = POMYx3U -1;
                    else {
                        if (MV75G34MOR[i6kroqJGdn1b] < D25sgIdwJ[POMYx3U])
                            --knMlzfjk, ++i6kroqJGdn1b, POMYx3U = POMYx3U -1;
                        else
                            ++i6kroqJGdn1b, POMYx3U = POMYx3U -1;
                    }
                }
            }
        }
        printf ("%d\n", knMlzfjk * (510 - 310));
    }
    return 0;
}

