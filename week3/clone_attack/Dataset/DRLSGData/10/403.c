main () {
    int V70wzbV6C [(181 - 156)];
    int uNrKbv3 [(880 - 855)];
    int H6SB8oyRDb;
    int XEI7vcTNM;
    int k8OUuYWn [(340 - 315)];
    int ZxEUhGA59;
    int KJIOyFSz;
    int CLs1b0wyFtVj;
    scanf ("%d", &XEI7vcTNM);
    for (H6SB8oyRDb = (776 - 776); H6SB8oyRDb < XEI7vcTNM; H6SB8oyRDb = H6SB8oyRDb +1) {
        V70wzbV6C[H6SB8oyRDb] = (43 - 43);
        uNrKbv3[H6SB8oyRDb] = (477 - 477);
    }
    for (H6SB8oyRDb = (466 - 466); H6SB8oyRDb < XEI7vcTNM; H6SB8oyRDb = H6SB8oyRDb +1) {
        scanf ("%d", &V70wzbV6C[H6SB8oyRDb]);
    }
    for (H6SB8oyRDb = XEI7vcTNM -(565 - 564); H6SB8oyRDb >= (770 - 770); H6SB8oyRDb = H6SB8oyRDb -1) {
        for (KJIOyFSz = H6SB8oyRDb; KJIOyFSz < XEI7vcTNM; KJIOyFSz = KJIOyFSz +1) {
            if (V70wzbV6C[H6SB8oyRDb] >= V70wzbV6C[KJIOyFSz]) {
                k8OUuYWn[KJIOyFSz -H6SB8oyRDb] = uNrKbv3[KJIOyFSz] + (113 - 112);
            }
            else {
                k8OUuYWn[KJIOyFSz -H6SB8oyRDb] = (240 - 239);
            }
        }
        for (KJIOyFSz = (816 - 816); KJIOyFSz < XEI7vcTNM -H6SB8oyRDb; KJIOyFSz++) {
            if (k8OUuYWn[KJIOyFSz] >= uNrKbv3[H6SB8oyRDb])
                uNrKbv3[H6SB8oyRDb] = k8OUuYWn[KJIOyFSz];
        }
    }
    ZxEUhGA59 = (122 - 122);
    for (H6SB8oyRDb = 0; H6SB8oyRDb < XEI7vcTNM; H6SB8oyRDb++) {
        if (uNrKbv3[H6SB8oyRDb] >= ZxEUhGA59)
            ZxEUhGA59 = uNrKbv3[H6SB8oyRDb];
    }
    printf ("%d", ZxEUhGA59);
}

