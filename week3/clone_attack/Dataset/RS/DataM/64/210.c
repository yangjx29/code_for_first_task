struct   cOrQq9e4t5 {
    int XYE0Nl4Je [(721 - 718)];
    int b [3];
    double  EPXLQpMY;
}
fkGxYrVUTupa [45], WLd8FjONK31;
void  iZoJbg (struct   cOrQq9e4t5 fkGxYrVUTupa [], int UGEctd);

void  main () {
    int wWbIXnE0k [(286 - 276)];
    int PnC6ZuBar [(242 - 232)];
    int eZrHl7 [(908 - 898)];
    int LhpKye, eon5SiJZBc, UGEctd = (821 - 821), AfPmQU;
    scanf ("%d", &AfPmQU);
    {
        LhpKye = 782 - 782;
        while (AfPmQU > LhpKye) {
            scanf ("%d%d%d", &wWbIXnE0k[LhpKye], &PnC6ZuBar[LhpKye], &eZrHl7[LhpKye]);
            LhpKye = LhpKye +1;
        };
    }
    {
        eon5SiJZBc = 505 - 505;
        while (AfPmQU -(703 - 702) > eon5SiJZBc) {
            {
                LhpKye = 825 - 824;
                while (LhpKye < AfPmQU) {
                    fkGxYrVUTupa[UGEctd].XYE0Nl4Je[(101 - 101)] = wWbIXnE0k[eon5SiJZBc];
                    fkGxYrVUTupa[UGEctd].XYE0Nl4Je[(638 - 637)] = PnC6ZuBar[eon5SiJZBc];
                    fkGxYrVUTupa[UGEctd].XYE0Nl4Je[(143 - 141)] = eZrHl7[eon5SiJZBc];
                    fkGxYrVUTupa[UGEctd].b[(862 - 862)] = wWbIXnE0k[LhpKye];
                    fkGxYrVUTupa[UGEctd].b[(767 - 766)] = PnC6ZuBar[LhpKye];
                    fkGxYrVUTupa[UGEctd].b[(521 - 519)] = eZrHl7[LhpKye];
                    fkGxYrVUTupa[UGEctd++].EPXLQpMY = sqrt (pow (wWbIXnE0k[eon5SiJZBc] - wWbIXnE0k[LhpKye], (844 - 842)) + pow (PnC6ZuBar[eon5SiJZBc] - PnC6ZuBar[LhpKye], (422 - 420)) + pow (eZrHl7[eon5SiJZBc] - eZrHl7[LhpKye], (377 - 375)));
                    LhpKye = LhpKye +1;
                };
            }
            eon5SiJZBc = eon5SiJZBc + 1;
        };
    }
    iZoJbg (fkGxYrVUTupa, UGEctd -1);
    {
        LhpKye = 856 - 856;
        while (LhpKye < UGEctd) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", fkGxYrVUTupa[LhpKye].XYE0Nl4Je[0], fkGxYrVUTupa[LhpKye].XYE0Nl4Je[1], fkGxYrVUTupa[LhpKye].XYE0Nl4Je[(293 - 291)], fkGxYrVUTupa[LhpKye].b[0], fkGxYrVUTupa[LhpKye].b[1], fkGxYrVUTupa[LhpKye].b[2], fkGxYrVUTupa[LhpKye].EPXLQpMY);
            LhpKye = LhpKye +1;
        };
    };
}

void  iZoJbg (struct   cOrQq9e4t5 fkGxYrVUTupa [], int UGEctd) {
    int wsMyiO3ah;
    int tpqTBELH;
    {
        wsMyiO3ah = 0;
        while (UGEctd > wsMyiO3ah) {
            {
                tpqTBELH = 0;
                while (UGEctd -wsMyiO3ah > tpqTBELH) {
                    if (fkGxYrVUTupa[tpqTBELH].EPXLQpMY < fkGxYrVUTupa[tpqTBELH + 1].EPXLQpMY) {
                        WLd8FjONK31 = fkGxYrVUTupa[tpqTBELH];
                        fkGxYrVUTupa[tpqTBELH] = fkGxYrVUTupa[tpqTBELH + 1];
                        fkGxYrVUTupa[tpqTBELH + 1] = WLd8FjONK31;
                    }
                    tpqTBELH++;
                };
            }
            wsMyiO3ah = wsMyiO3ah + 1;
        };
    };
}

