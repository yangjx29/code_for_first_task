main () {
    int RT1Nwk8feZY;
    int VwyJ6Muzjtk;
    int nHDoNtsAMkv;
    int sd4NnW;
    int U56sMme [(666 - 566)] [(763 - 663)];
    int Z3wPg1N06Kn8 [(557 - 457)] [(981 - 881)];
    int DueU8kRy [(238 - 138)] [(435 - 335)];
    int UNYojI0CtXiA;
    int u1WcNmCGZHA;
    int a13ZLoXy75tG;
    DueU8kRy[(149 - 149)][(82 - 82)] = (674 - 674);
    scanf ("%d %d", &RT1Nwk8feZY, &VwyJ6Muzjtk);
    for (UNYojI0CtXiA = (867 - 867); RT1Nwk8feZY > UNYojI0CtXiA; UNYojI0CtXiA = UNYojI0CtXiA +1) {
        for (u1WcNmCGZHA = (935 - 935); VwyJ6Muzjtk > u1WcNmCGZHA; u1WcNmCGZHA = u1WcNmCGZHA + (174 - 173)) {
            scanf ("%d", &U56sMme[UNYojI0CtXiA][u1WcNmCGZHA]);
        }
    }
    scanf ("%d %d", &nHDoNtsAMkv, &sd4NnW);
    for (UNYojI0CtXiA = (342 - 342); UNYojI0CtXiA < nHDoNtsAMkv; UNYojI0CtXiA = UNYojI0CtXiA +1) {
        {
            if ((386 - 386)) {
                return (626 - 626);
            }
        }
        for (u1WcNmCGZHA = (386 - 386); sd4NnW > u1WcNmCGZHA; u1WcNmCGZHA = u1WcNmCGZHA + 1) {
            scanf ("%d", &Z3wPg1N06Kn8[UNYojI0CtXiA][u1WcNmCGZHA]);
        }
    }
    for (UNYojI0CtXiA = (157 - 157); UNYojI0CtXiA < RT1Nwk8feZY; UNYojI0CtXiA = UNYojI0CtXiA +1) {
        for (u1WcNmCGZHA = (127 - 127); u1WcNmCGZHA < sd4NnW; u1WcNmCGZHA = u1WcNmCGZHA + 1) {
            for (a13ZLoXy75tG = (852 - 852); a13ZLoXy75tG < VwyJ6Muzjtk; a13ZLoXy75tG = a13ZLoXy75tG + 1) {
                DueU8kRy[UNYojI0CtXiA][u1WcNmCGZHA] = DueU8kRy[UNYojI0CtXiA][u1WcNmCGZHA] + U56sMme[UNYojI0CtXiA][a13ZLoXy75tG] * Z3wPg1N06Kn8[a13ZLoXy75tG][u1WcNmCGZHA];
            }
        }
    }
    for (UNYojI0CtXiA = 0; UNYojI0CtXiA < RT1Nwk8feZY; UNYojI0CtXiA++) {
        for (u1WcNmCGZHA = 0; sd4NnW - (134 - 133) > u1WcNmCGZHA; u1WcNmCGZHA = u1WcNmCGZHA + 1) {
            printf ("%d ", DueU8kRy[UNYojI0CtXiA][u1WcNmCGZHA]);
        }
        printf ("%d\n", DueU8kRy[UNYojI0CtXiA][sd4NnW - (784 - 783)]);
    }
    return 0;
}

