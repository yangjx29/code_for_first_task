struct   student {
    char RgAjnqm9O [30];
    int wivatHzBIN6Q;
    int XEs5zxP70Ot;
    char YyB80n [1];
    char VwBzjvl [1];
    int nDMs5KSbLV;
    int rNI4TOPEU502;
}
BbExNG98n [100];

main () {
    int p5uvUZALxoB, Mcw2DlfK4yXm, ffJb0c = 0, TvZG4PSQ3B, ZJmw4Hen = 0;
    scanf ("%d", &p5uvUZALxoB);
    for (Mcw2DlfK4yXm = 0; Mcw2DlfK4yXm < p5uvUZALxoB; Mcw2DlfK4yXm++) {
        scanf ("%s%d%d%s%s%d", BbExNG98n[Mcw2DlfK4yXm].RgAjnqm9O, &BbExNG98n[Mcw2DlfK4yXm].wivatHzBIN6Q, &BbExNG98n[Mcw2DlfK4yXm].XEs5zxP70Ot, BbExNG98n[Mcw2DlfK4yXm].YyB80n, BbExNG98n[Mcw2DlfK4yXm].VwBzjvl, &BbExNG98n[Mcw2DlfK4yXm].nDMs5KSbLV);
    }
    for (Mcw2DlfK4yXm = 0; Mcw2DlfK4yXm < p5uvUZALxoB; Mcw2DlfK4yXm++) {
        BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502 = 0;
    }
    for (Mcw2DlfK4yXm = 0; p5uvUZALxoB > Mcw2DlfK4yXm; Mcw2DlfK4yXm++) {
        if (BbExNG98n[Mcw2DlfK4yXm].wivatHzBIN6Q > 80 && BbExNG98n[Mcw2DlfK4yXm].nDMs5KSbLV > 0)
            BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502 = BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502 + 8000;
        if (85 < BbExNG98n[Mcw2DlfK4yXm].wivatHzBIN6Q && BbExNG98n[Mcw2DlfK4yXm].XEs5zxP70Ot > 80)
            BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502 = BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502 + 4000;
        if (BbExNG98n[Mcw2DlfK4yXm].wivatHzBIN6Q > 90)
            BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502 = BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502 + 2000;
        if (85 < BbExNG98n[Mcw2DlfK4yXm].wivatHzBIN6Q && BbExNG98n[Mcw2DlfK4yXm].VwBzjvl[0] == 'Y')
            BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502 = BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502 + 1000;
        if (BbExNG98n[Mcw2DlfK4yXm].XEs5zxP70Ot > 80 && BbExNG98n[Mcw2DlfK4yXm].YyB80n[0] == 'Y')
            BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502 = BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502 + 850;
    }
    for (Mcw2DlfK4yXm = 0; Mcw2DlfK4yXm < p5uvUZALxoB; Mcw2DlfK4yXm++) {
        if (BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502 > ffJb0c) {
            ffJb0c = BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502;
            TvZG4PSQ3B = Mcw2DlfK4yXm;
        }
        ZJmw4Hen = ZJmw4Hen +BbExNG98n[Mcw2DlfK4yXm].rNI4TOPEU502;
    }
    printf ("%s\n", BbExNG98n[TvZG4PSQ3B].RgAjnqm9O);
    printf ("%d\n", ffJb0c);
    printf ("%d\n", ZJmw4Hen);
}

