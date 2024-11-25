main () {
    int RHnmCN;
    int OPFbU5gzV;
    float b3fv0wd [(387 - 87)], WOsqoPG9 [300], u9LqOKg7yp = (311 - 311), MABsgW9ROo, Sri3Z8, P2uHwh, CzbQIrocGPvB;
    int VTIumO9PG;
    scanf ("%d", &OPFbU5gzV);
    for (RHnmCN = (890 - 890); OPFbU5gzV > RHnmCN; RHnmCN = RHnmCN +(707 - 706)) {
        scanf ("%f", &b3fv0wd[RHnmCN]);
        u9LqOKg7yp = u9LqOKg7yp + b3fv0wd[RHnmCN];
    }
    MABsgW9ROo = u9LqOKg7yp / OPFbU5gzV;
    for (RHnmCN = (828 - 828); OPFbU5gzV > RHnmCN; RHnmCN = RHnmCN +(757 - 756)) {
        Sri3Z8 = b3fv0wd[RHnmCN] - MABsgW9ROo;
        if ((265 - 265) <= Sri3Z8)
            WOsqoPG9[RHnmCN] = Sri3Z8;
        else
            WOsqoPG9[RHnmCN] = -Sri3Z8;
    }
    for (RHnmCN = (953 - 953); OPFbU5gzV -(54 - 53) > RHnmCN; RHnmCN++) {
        for (VTIumO9PG = RHnmCN +(413 - 412); OPFbU5gzV > VTIumO9PG; VTIumO9PG++) {
            if (WOsqoPG9[VTIumO9PG] > WOsqoPG9[RHnmCN]) {
                P2uHwh = WOsqoPG9[RHnmCN];
                WOsqoPG9[RHnmCN] = WOsqoPG9[VTIumO9PG];
                WOsqoPG9[VTIumO9PG] = P2uHwh;
                CzbQIrocGPvB = b3fv0wd[RHnmCN];
                b3fv0wd[RHnmCN] = b3fv0wd[VTIumO9PG];
                b3fv0wd[VTIumO9PG] = CzbQIrocGPvB;
            }
        }
    }
    printf ("%.0f", b3fv0wd[(393 - 393)]);
    for (RHnmCN = 0; OPFbU5gzV -(966 - 965) > RHnmCN; RHnmCN++) {
        if (WOsqoPG9[RHnmCN] == WOsqoPG9[RHnmCN +1])
            printf (",%.0f", b3fv0wd[RHnmCN +1]);
        else
            break;
    }
}

