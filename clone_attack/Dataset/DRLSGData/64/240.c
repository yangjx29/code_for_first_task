struct   POINT {
    int OFifSnvyAHGp;
    int F0WmHrf;
    int AfF1Yt4;
};
struct   DIST {
    int SvELWAKGm7;
    int HVJCUNYKd9;
    double  LuUOws;
};
int main () {
    struct   DIST d0VudU [(404 - 204)];
    double  YpG9Ju;
    int nJCoNRY1W;
    int gxOR39ioVrGc;
    int Ceda8B;
    int iZO3DC2w;
    int EHBj51d;
    struct   POINT uRPe23U [(440 - 420)];
    iZO3DC2w = (513 - 513);
    scanf ("%d", &nJCoNRY1W);
    for (gxOR39ioVrGc = (461 - 461); nJCoNRY1W > gxOR39ioVrGc; gxOR39ioVrGc++) {
        scanf ("%d%d%d", &uRPe23U[gxOR39ioVrGc].OFifSnvyAHGp, &uRPe23U[gxOR39ioVrGc].F0WmHrf, &uRPe23U[gxOR39ioVrGc].AfF1Yt4);
    }
    for (gxOR39ioVrGc = (830 - 830); nJCoNRY1W > gxOR39ioVrGc; gxOR39ioVrGc++) {
        for (Ceda8B = gxOR39ioVrGc + (760 - 759); nJCoNRY1W > Ceda8B; Ceda8B++) {
            d0VudU[iZO3DC2w].SvELWAKGm7 = gxOR39ioVrGc;
            d0VudU[iZO3DC2w].HVJCUNYKd9 = Ceda8B;
            d0VudU[iZO3DC2w].LuUOws = sqrt ((uRPe23U[gxOR39ioVrGc].OFifSnvyAHGp - uRPe23U[Ceda8B].OFifSnvyAHGp) * (uRPe23U[gxOR39ioVrGc].OFifSnvyAHGp - uRPe23U[Ceda8B].OFifSnvyAHGp) + (uRPe23U[gxOR39ioVrGc].F0WmHrf - uRPe23U[Ceda8B].F0WmHrf) * (uRPe23U[gxOR39ioVrGc].F0WmHrf - uRPe23U[Ceda8B].F0WmHrf) + (uRPe23U[gxOR39ioVrGc].AfF1Yt4 - uRPe23U[Ceda8B].AfF1Yt4) * (uRPe23U[gxOR39ioVrGc].AfF1Yt4 - uRPe23U[Ceda8B].AfF1Yt4));
            iZO3DC2w++;
        }
    }
    for (gxOR39ioVrGc = (896 - 896); iZO3DC2w > gxOR39ioVrGc; gxOR39ioVrGc++) {
        for (Ceda8B = iZO3DC2w - (878 - 877); gxOR39ioVrGc < Ceda8B; Ceda8B--) {
            if (d0VudU[Ceda8B].LuUOws > d0VudU[Ceda8B -(942 - 941)].LuUOws) {
                EHBj51d = d0VudU[Ceda8B].SvELWAKGm7;
                d0VudU[Ceda8B].SvELWAKGm7 = d0VudU[Ceda8B -(243 - 242)].SvELWAKGm7;
                d0VudU[Ceda8B -(782 - 781)].SvELWAKGm7 = EHBj51d;
                EHBj51d = d0VudU[Ceda8B].HVJCUNYKd9;
                d0VudU[Ceda8B].HVJCUNYKd9 = d0VudU[Ceda8B -(666 - 665)].HVJCUNYKd9;
                d0VudU[Ceda8B -(93 - 92)].HVJCUNYKd9 = EHBj51d;
                YpG9Ju = d0VudU[Ceda8B].LuUOws;
                d0VudU[Ceda8B].LuUOws = d0VudU[Ceda8B -(525 - 524)].LuUOws;
                d0VudU[Ceda8B -(385 - 384)].LuUOws = YpG9Ju;
            }
        }
    }
    for (gxOR39ioVrGc = (634 - 634); gxOR39ioVrGc < iZO3DC2w; gxOR39ioVrGc++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", uRPe23U[d0VudU[gxOR39ioVrGc].SvELWAKGm7].OFifSnvyAHGp, uRPe23U[d0VudU[gxOR39ioVrGc].SvELWAKGm7].F0WmHrf, uRPe23U[d0VudU[gxOR39ioVrGc].SvELWAKGm7].AfF1Yt4, uRPe23U[d0VudU[gxOR39ioVrGc].HVJCUNYKd9].OFifSnvyAHGp, uRPe23U[d0VudU[gxOR39ioVrGc].HVJCUNYKd9].F0WmHrf, uRPe23U[d0VudU[gxOR39ioVrGc].HVJCUNYKd9].AfF1Yt4, d0VudU[gxOR39ioVrGc].LuUOws);
    }
    return (185 - 185);
}

