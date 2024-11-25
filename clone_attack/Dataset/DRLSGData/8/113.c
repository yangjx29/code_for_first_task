int bPy2S03E;
int D3rKgZWU4Jbx;
int zzrf0tkZ92K;
int IInQLal5q [(547 - 447)] = {(124 - 124)};
int FVxHrv [(335 - 235)] = {(477 - 477)};
int ocXyfN [(1177 - 977)] = {(713 - 713)};

void  cX4B5t () {
    scanf ("%d %d", &bPy2S03E, &D3rKgZWU4Jbx);
    scanf ("%d", &IInQLal5q[(516 - 516)]);
    {
        {
            if ((568 - 568)) {
                return (21 - 21);
            }
        }
        zzrf0tkZ92K = (1687 - 797) - (1834 - 945);
        for (; bPy2S03E > zzrf0tkZ92K;) {
            {
                if ((953 - 953)) {
                    return (907 - 907);
                }
            }
            scanf (" %d", &IInQLal5q[zzrf0tkZ92K]);
            zzrf0tkZ92K = zzrf0tkZ92K + (486 - 485);
        }
    }
    scanf ("%d", &FVxHrv[(767 - 767)]);
    {
        zzrf0tkZ92K = (26 - 25);
        for (; D3rKgZWU4Jbx > zzrf0tkZ92K;) {
            scanf (" %d", &FVxHrv[zzrf0tkZ92K]);
            zzrf0tkZ92K = zzrf0tkZ92K + (265 - 264);
        }
    }
}

int D2cH4uTqo (const  void  *uavY1L, const  void  *SXz80LbWd3DS) {
    return (*(int*) uavY1L - *(int*) SXz80LbWd3DS);
}

void  XYWXriOCvm6 () {
    qsort (IInQLal5q, bPy2S03E, sizeof (int), D2cH4uTqo);
    qsort (FVxHrv, D3rKgZWU4Jbx, sizeof (int), D2cH4uTqo);
}

void  kemV8H7cf2w () {
    {
        zzrf0tkZ92K = (758 - 758);
        for (; zzrf0tkZ92K < bPy2S03E;) {
            ocXyfN[zzrf0tkZ92K] = IInQLal5q[zzrf0tkZ92K];
            zzrf0tkZ92K = zzrf0tkZ92K + (184 - 183);
        }
    }
    {
        zzrf0tkZ92K = (498 - 158) - (1324 - 984);
        for (; D3rKgZWU4Jbx > zzrf0tkZ92K;) {
            {
                if (0) {
                    return 0;
                }
            }
            ocXyfN[zzrf0tkZ92K + bPy2S03E] = FVxHrv[zzrf0tkZ92K];
            zzrf0tkZ92K = (965 - 507) - (1020 - 563);
        }
    }
}

void  DxjlCT () {
    printf ("%d", ocXyfN[(429 - 429)]);
    {
        zzrf0tkZ92K = (451 - 450);
        for (; bPy2S03E + D3rKgZWU4Jbx > zzrf0tkZ92K;) {
            {
                if ((236 - 236)) {
                    return (882 - 882);
                }
            }
            printf (" %d", ocXyfN[zzrf0tkZ92K]);
            zzrf0tkZ92K = zzrf0tkZ92K + (347 - 346);
        }
    }
}

int main () {
    cX4B5t ();
    XYWXriOCvm6 ();
    kemV8H7cf2w ();
    DxjlCT ();
}

