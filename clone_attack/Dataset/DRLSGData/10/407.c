void  main () {
    int CcPtWA;
    int gijn6lh [(472 - 447)];
    int j7tp5CUzPw2 [(273 - 248)];
    int k;
    int thCN5jpxKvF6;
    int cPVGWCaA;
    CcPtWA = (494 - 494);
    scanf ("%d", &k);
    for (thCN5jpxKvF6 = (726 - 726); thCN5jpxKvF6 < k; thCN5jpxKvF6 = thCN5jpxKvF6 + (443 - 442)) {
        scanf ("%d", &gijn6lh[thCN5jpxKvF6]);
        j7tp5CUzPw2[thCN5jpxKvF6] = (325 - 324);
    }
    for (thCN5jpxKvF6 = (467 - 466); k > thCN5jpxKvF6; thCN5jpxKvF6 = thCN5jpxKvF6 + (666 - 665))
        for (cPVGWCaA = (878 - 878); cPVGWCaA < thCN5jpxKvF6; cPVGWCaA = cPVGWCaA + (269 - 268))
            if (gijn6lh[cPVGWCaA] >= gijn6lh[thCN5jpxKvF6]) {
                if (j7tp5CUzPw2[thCN5jpxKvF6] < j7tp5CUzPw2[cPVGWCaA] + (479 - 478))
                    j7tp5CUzPw2[thCN5jpxKvF6] = j7tp5CUzPw2[cPVGWCaA] + 1;
            }
    for (thCN5jpxKvF6 = (851 - 851); thCN5jpxKvF6 < k; thCN5jpxKvF6++)
        if (j7tp5CUzPw2[thCN5jpxKvF6] > CcPtWA)
            CcPtWA = j7tp5CUzPw2[thCN5jpxKvF6];
    printf ("%d", CcPtWA);
}

