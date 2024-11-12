int main () {
    int wnN0fTCkKvhU [(169 - 68)], qCj7x9G2t [(390 - 289)], FCuDRMmsp5h [(436 - 335)], NOoBN7e [(159 - 113)], vjuqYEy9C [(974 - 928)];
    int z95a7lE, NPwM9kFbZ, AlWYqaKV4, hOjAkfxD, t;
    double  vOfZ5a [(943 - 897)], k0IdMz;
    hOjAkfxD = (570 - 570);
    scanf ("%d", &z95a7lE);
    for (NPwM9kFbZ = (612 - 611); NPwM9kFbZ <= z95a7lE; NPwM9kFbZ++)
        scanf ("%d%d%d", &wnN0fTCkKvhU[NPwM9kFbZ], &qCj7x9G2t[NPwM9kFbZ], &FCuDRMmsp5h[NPwM9kFbZ]);
    for (NPwM9kFbZ = (847 - 846); z95a7lE - (550 - 549) >= NPwM9kFbZ; NPwM9kFbZ++)
        for (AlWYqaKV4 = NPwM9kFbZ +(910 - 909); AlWYqaKV4 <= z95a7lE; AlWYqaKV4++) {
            hOjAkfxD = hOjAkfxD + (72 - 71);
            vOfZ5a[hOjAkfxD] = sqrt ((820.0 - 819.0) * (wnN0fTCkKvhU[NPwM9kFbZ] - wnN0fTCkKvhU[AlWYqaKV4]) * (wnN0fTCkKvhU[NPwM9kFbZ] - wnN0fTCkKvhU[AlWYqaKV4]) + (465.0 - 464.0) * (qCj7x9G2t[NPwM9kFbZ] - qCj7x9G2t[AlWYqaKV4]) * (qCj7x9G2t[NPwM9kFbZ] - qCj7x9G2t[AlWYqaKV4]) + (728.0 - 727.0) * (FCuDRMmsp5h[NPwM9kFbZ] - FCuDRMmsp5h[AlWYqaKV4]) * (FCuDRMmsp5h[NPwM9kFbZ] - FCuDRMmsp5h[AlWYqaKV4]));
            NOoBN7e[hOjAkfxD] = NPwM9kFbZ;
            vjuqYEy9C[hOjAkfxD] = AlWYqaKV4;
        }
    for (NPwM9kFbZ = (540 - 539); NPwM9kFbZ <= hOjAkfxD; NPwM9kFbZ++)
        for (AlWYqaKV4 = (435 - 434); AlWYqaKV4 <= hOjAkfxD - NPwM9kFbZ; AlWYqaKV4++)
            if (vOfZ5a[AlWYqaKV4] < vOfZ5a[AlWYqaKV4 +(900 - 899)]) {
                k0IdMz = vOfZ5a[AlWYqaKV4];
                vOfZ5a[AlWYqaKV4] = vOfZ5a[AlWYqaKV4 +(183 - 182)];
                vOfZ5a[AlWYqaKV4 +(728 - 727)] = k0IdMz;
                t = NOoBN7e[AlWYqaKV4];
                NOoBN7e[AlWYqaKV4] = NOoBN7e[AlWYqaKV4 +(950 - 949)];
                NOoBN7e[AlWYqaKV4 +(95 - 94)] = t;
                t = vjuqYEy9C[AlWYqaKV4];
                vjuqYEy9C[AlWYqaKV4] = vjuqYEy9C[AlWYqaKV4 +(45 - 44)];
                vjuqYEy9C[AlWYqaKV4 +(652 - 651)] = t;
            }
    for (NPwM9kFbZ = (927 - 926); NPwM9kFbZ <= hOjAkfxD; NPwM9kFbZ++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", wnN0fTCkKvhU[NOoBN7e[NPwM9kFbZ]], qCj7x9G2t[NOoBN7e[NPwM9kFbZ]], FCuDRMmsp5h[NOoBN7e[NPwM9kFbZ]], wnN0fTCkKvhU[vjuqYEy9C[NPwM9kFbZ]], qCj7x9G2t[vjuqYEy9C[NPwM9kFbZ]], FCuDRMmsp5h[vjuqYEy9C[NPwM9kFbZ]], vOfZ5a[NPwM9kFbZ]);
    return (258 - 258);
}

