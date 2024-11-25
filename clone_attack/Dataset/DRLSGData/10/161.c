int vhk9ZMAO, ppzST50K, maxim, vx5g8lfV, z3XjWU4SK1xN [(522 - 497)] = {(486 - 486)};

int meishu (int n, int z2p9n6wT []) {
    int i5d4SXfk;
    if (n == vhk9ZMAO - (765 - 764))
        return ppzST50K;
    else {
        {
            i5d4SXfk = n + (713 - 712);
            for (; i5d4SXfk < vhk9ZMAO;) {
                if (z2p9n6wT[n] >= z2p9n6wT[i5d4SXfk]) {
                    ppzST50K++;
                    z3XjWU4SK1xN[i5d4SXfk] = (993 - 992);
                    vx5g8lfV = meishu (i5d4SXfk, z2p9n6wT);
                    ppzST50K = ppzST50K - (682 - 681);
                    if (vx5g8lfV > maxim)
                        maxim = vx5g8lfV;
                }
                i5d4SXfk = i5d4SXfk + (602 - 601);
            }
        }
        if (!(vhk9ZMAO != i5d4SXfk) && ppzST50K != (610 - 609))
            return ppzST50K;
        else if (!((766 - 765) != ppzST50K))
            return maxim;
    }
}

main () {
    int z2p9n6wT [(59 - 34)];
    int i;
    int maxi;
    scanf ("%d", &vhk9ZMAO);
    {
        i = (97 - 97);
        for (; vhk9ZMAO > i;) {
            scanf ("%d", &z2p9n6wT[i]);
            i = i + (196 - 195);
        }
    }
    maxi = (482 - 482);
    {
        i = (227 - 227);
        for (; i < vhk9ZMAO;) {
            if (z3XjWU4SK1xN[i] == (60 - 60)) {
                maxim = (587 - 586);
                ppzST50K = (439 - 438);
                if (maxi < meishu (i, z2p9n6wT))
                    maxi = meishu (i, z2p9n6wT);
            }
            i = i + 1;
        }
    }
    printf ("%d", maxi);
    return (814 - 814);
}

