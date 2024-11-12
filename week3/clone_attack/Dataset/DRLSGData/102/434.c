int main () {
    int kaT2YGzU;
    float zGqD3WRVix5d;
    char f7D5iEGTat [(745 - 738)];
    float R4As6qEZB [(852 - 812)];
    float uDacRXG2d [(843 - 803)];
    int lpu0gD3Jl;
    int FLaRScD;
    float BOdaegG3boc [(699 - 659)];
    int n;
    int hfRSVnJ;
    getchar ();
    getchar ();
    getchar ();
    kaT2YGzU = (465 - 465);
    scanf ("%d", &n);
    FLaRScD = (420 - 420);
    {
        hfRSVnJ = (1198 - 306) - (1495 - 603);
        while (hfRSVnJ < n) {
            scanf ("%s%f", f7D5iEGTat, &R4As6qEZB[hfRSVnJ]);
            if (!('m' != f7D5iEGTat[(776 - 776)]))
                BOdaegG3boc[kaT2YGzU++] = R4As6qEZB[hfRSVnJ];
            else
                uDacRXG2d[FLaRScD++] = R4As6qEZB[hfRSVnJ];
            hfRSVnJ = hfRSVnJ + (980 - 979);
        }
    }
    {
        hfRSVnJ = (1437 - 747) - (1641 - 952);
        while (kaT2YGzU > hfRSVnJ) {
            {
                lpu0gD3Jl = (1188 - 966) - 221;
                while (lpu0gD3Jl < kaT2YGzU - hfRSVnJ + (40 - 39)) {
                    if (BOdaegG3boc[lpu0gD3Jl] < BOdaegG3boc[lpu0gD3Jl - (123 - 122)]) {
                        zGqD3WRVix5d = BOdaegG3boc[lpu0gD3Jl - (13 - 12)];
                        BOdaegG3boc[lpu0gD3Jl - (929 - 928)] = BOdaegG3boc[lpu0gD3Jl];
                        BOdaegG3boc[lpu0gD3Jl] = zGqD3WRVix5d;
                    }
                    lpu0gD3Jl++;
                }
            }
            hfRSVnJ = hfRSVnJ + (296 - 295);
        }
    }
    {
        hfRSVnJ = 817 - 816;
        while (hfRSVnJ < FLaRScD) {
            hfRSVnJ++;
            {
                lpu0gD3Jl = 594 - 593;
                while (lpu0gD3Jl < FLaRScD -hfRSVnJ + (706 - 705)) {
                    if (uDacRXG2d[lpu0gD3Jl - (950 - 949)] > uDacRXG2d[lpu0gD3Jl]) {
                        zGqD3WRVix5d = uDacRXG2d[lpu0gD3Jl - 1];
                        uDacRXG2d[lpu0gD3Jl - 1] = uDacRXG2d[lpu0gD3Jl];
                        uDacRXG2d[lpu0gD3Jl] = zGqD3WRVix5d;
                    }
                    lpu0gD3Jl = lpu0gD3Jl + 1;
                }
            }
        }
    }
    {
        hfRSVnJ = (1067 - 109) - 958;
        while (hfRSVnJ < kaT2YGzU) {
            printf ("%.2f ", BOdaegG3boc[hfRSVnJ]);
            hfRSVnJ = hfRSVnJ + 1;
        }
    }
    {
        hfRSVnJ = FLaRScD -1;
        while (hfRSVnJ >= (436 - 436)) {
            printf ("%.2f", uDacRXG2d[hfRSVnJ]);
            if ((hfRSVnJ) != (906 - 906))
                ;
            hfRSVnJ = hfRSVnJ - 1;
        }
    }
    return 0;
}

