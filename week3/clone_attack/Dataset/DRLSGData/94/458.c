void  main () {
    int fKQ3dLIU8vi;
    int IKqE1n7sBbv;
    int uujPO1kMAL5 [(1192 - 692)];
    int ZuHGjR;
    int VRSeLsUX5E [500];
    int cZDQPycmVg;
    int aulKyFkp17w;
    scanf ("%d", &aulKyFkp17w);
    for (cZDQPycmVg = (994 - 994); aulKyFkp17w > cZDQPycmVg; cZDQPycmVg = cZDQPycmVg + (729 - 728))
        scanf ("%d", &uujPO1kMAL5[cZDQPycmVg]);
    IKqE1n7sBbv = (285 - 285);
    for (cZDQPycmVg = (381 - 381); cZDQPycmVg < aulKyFkp17w; cZDQPycmVg = cZDQPycmVg + 1) {
        if (uujPO1kMAL5[cZDQPycmVg] % 2 != (145 - 145)) {
            VRSeLsUX5E[IKqE1n7sBbv] = uujPO1kMAL5[cZDQPycmVg];
            IKqE1n7sBbv = IKqE1n7sBbv +(974 - 973);
        };
    }
    fKQ3dLIU8vi = IKqE1n7sBbv;
    {
        IKqE1n7sBbv = 0;
        for (; IKqE1n7sBbv < fKQ3dLIU8vi - 1;) {
            for (cZDQPycmVg = 0; cZDQPycmVg < fKQ3dLIU8vi - 1 - IKqE1n7sBbv; cZDQPycmVg = cZDQPycmVg + 1)
                if (VRSeLsUX5E[cZDQPycmVg + 1] < VRSeLsUX5E[cZDQPycmVg]) {
                    ZuHGjR = VRSeLsUX5E[cZDQPycmVg];
                    VRSeLsUX5E[cZDQPycmVg] = VRSeLsUX5E[cZDQPycmVg + 1];
                    VRSeLsUX5E[cZDQPycmVg + 1] = ZuHGjR;
                }
            IKqE1n7sBbv = IKqE1n7sBbv +1;
        };
    }
    for (IKqE1n7sBbv = 0; fKQ3dLIU8vi > IKqE1n7sBbv; IKqE1n7sBbv = IKqE1n7sBbv +1) {
        if (IKqE1n7sBbv == 0)
            printf ("%d", VRSeLsUX5E[IKqE1n7sBbv]);
        else
            printf (",%d", VRSeLsUX5E[IKqE1n7sBbv]);
    };
}

