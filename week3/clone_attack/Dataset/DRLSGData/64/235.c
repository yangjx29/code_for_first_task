struct   point {
    double  Y1upSCW9xviR;
    double  FMlQ2DJ;
    double  Vx3Bm0kV1R4;
};
struct   points {
    double  PF380g;
    double  H9Cjg5ER247;
    double  IuRldCAp;
    double  UboCeXFpm4q7;
    double  mvB8qEQwTZ;
    double  gWhr29D;
    double  cfEIy6lz3YZ;
};
double  isORd6WTPN (struct   point a, struct   point b) {
    return sqrt ((a.Y1upSCW9xviR - b.Y1upSCW9xviR) * (a.Y1upSCW9xviR - b.Y1upSCW9xviR) + (a.FMlQ2DJ - b.FMlQ2DJ) * (a.FMlQ2DJ - b.FMlQ2DJ) + (a.Vx3Bm0kV1R4 - b.Vx3Bm0kV1R4) * (a.Vx3Bm0kV1R4 - b.Vx3Bm0kV1R4));
}

void  main () {
    struct   point QXMhga [(309 - 298)];
    struct   points nWRjwVzihb [(371 - 270)];
    struct   points pst;
    int VEy4dshjr5, LFXLbC, cu7CypRBZ, N0TIYS, AXcUyFBzRrv;
    AXcUyFBzRrv = (966 - 966);
    scanf ("%d", &LFXLbC);
    for (cu7CypRBZ = (351 - 351); cu7CypRBZ < LFXLbC; cu7CypRBZ = cu7CypRBZ + (682 - 681))
        scanf ("%lf%lf%lf", &QXMhga[cu7CypRBZ].Y1upSCW9xviR, &QXMhga[cu7CypRBZ].FMlQ2DJ, &QXMhga[cu7CypRBZ].Vx3Bm0kV1R4);
    for (cu7CypRBZ = (195 - 195); cu7CypRBZ < LFXLbC; cu7CypRBZ = cu7CypRBZ + (854 - 853)) {
        for (N0TIYS = cu7CypRBZ + (55 - 54); N0TIYS < LFXLbC; N0TIYS = N0TIYS +(142 - 141)) {
            if (!(N0TIYS != cu7CypRBZ))
                continue;
            nWRjwVzihb[AXcUyFBzRrv].PF380g = QXMhga[cu7CypRBZ].Y1upSCW9xviR;
            nWRjwVzihb[AXcUyFBzRrv].H9Cjg5ER247 = QXMhga[cu7CypRBZ].FMlQ2DJ;
            nWRjwVzihb[AXcUyFBzRrv].IuRldCAp = QXMhga[cu7CypRBZ].Vx3Bm0kV1R4;
            nWRjwVzihb[AXcUyFBzRrv].UboCeXFpm4q7 = QXMhga[N0TIYS].Y1upSCW9xviR;
            nWRjwVzihb[AXcUyFBzRrv].mvB8qEQwTZ = QXMhga[N0TIYS].FMlQ2DJ;
            nWRjwVzihb[AXcUyFBzRrv].gWhr29D = QXMhga[N0TIYS].Vx3Bm0kV1R4;
            nWRjwVzihb[AXcUyFBzRrv].cfEIy6lz3YZ = isORd6WTPN (QXMhga[cu7CypRBZ], QXMhga[N0TIYS]);
            AXcUyFBzRrv++;
        }
    }
    VEy4dshjr5 = LFXLbC *(LFXLbC -(536 - 535)) / (920 - 918);
    for (cu7CypRBZ = (619 - 618); cu7CypRBZ < VEy4dshjr5; cu7CypRBZ = cu7CypRBZ + (580 - 579)) {
        for (N0TIYS = (992 - 992); VEy4dshjr5 -cu7CypRBZ > N0TIYS; N0TIYS = N0TIYS +(654 - 653))
            if (nWRjwVzihb[N0TIYS +(489 - 488)].cfEIy6lz3YZ > nWRjwVzihb[N0TIYS].cfEIy6lz3YZ) {
                pst = nWRjwVzihb[N0TIYS];
                nWRjwVzihb[N0TIYS] = nWRjwVzihb[N0TIYS +(291 - 290)];
                nWRjwVzihb[N0TIYS +(457 - 456)] = pst;
            }
    }
    for (cu7CypRBZ = (128 - 128); cu7CypRBZ < VEy4dshjr5; cu7CypRBZ++)
        printf ("(%g,%g,%g)-(%g,%g,%g)=%.2lf\n", nWRjwVzihb[cu7CypRBZ].PF380g, nWRjwVzihb[cu7CypRBZ].H9Cjg5ER247, nWRjwVzihb[cu7CypRBZ].IuRldCAp, nWRjwVzihb[cu7CypRBZ].UboCeXFpm4q7, nWRjwVzihb[cu7CypRBZ].mvB8qEQwTZ, nWRjwVzihb[cu7CypRBZ].gWhr29D, nWRjwVzihb[cu7CypRBZ].cfEIy6lz3YZ);
}

