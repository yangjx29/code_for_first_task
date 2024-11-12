int main () {
    int m0WQpuzS5, Nnmd28ubGjh, oTqxHfWY8e4u, QwnZBMseo;
    int jJE6vN3dTV49 [1000] [1000];
    int v48q7PkZx [1000] [1000];
    int cHQG7ok [1000] [1000] = {0};
    scanf ("%d %d", &m0WQpuzS5, &Nnmd28ubGjh);
    for (int AFca9I = 0;
    m0WQpuzS5 > AFca9I; AFca9I = AFca9I +1) {
        for (int Bk9CKrAgO4 = 0;
        Bk9CKrAgO4 < Nnmd28ubGjh; Bk9CKrAgO4++) {
            scanf ("%d", &jJE6vN3dTV49[AFca9I][Bk9CKrAgO4]);
        }
    }
    scanf ("%d %d", &oTqxHfWY8e4u, &QwnZBMseo);
    for (int XIKF3opAW = 0;
    XIKF3opAW < oTqxHfWY8e4u; XIKF3opAW++) {
        for (int OBusd6DQ = 0;
        OBusd6DQ < QwnZBMseo; OBusd6DQ = OBusd6DQ +1) {
            scanf ("%d", &v48q7PkZx[XIKF3opAW][OBusd6DQ]);
        }
    }
    for (int SCDZpj4 = 0;
    m0WQpuzS5 > SCDZpj4; SCDZpj4 = SCDZpj4 +1) {
        for (int IjNPCpOTyZM = 0;
        QwnZBMseo > IjNPCpOTyZM; IjNPCpOTyZM = IjNPCpOTyZM +1) {
            for (int tB730Zips26 = 0;
            tB730Zips26 < Nnmd28ubGjh; tB730Zips26 = tB730Zips26 + 1) {
                cHQG7ok[SCDZpj4][IjNPCpOTyZM] = cHQG7ok[SCDZpj4][IjNPCpOTyZM] + jJE6vN3dTV49[SCDZpj4][tB730Zips26] * v48q7PkZx[tB730Zips26][IjNPCpOTyZM];
            }
        }
    }
    for (int fVMZsC = 0;
    fVMZsC < m0WQpuzS5; fVMZsC = fVMZsC + 1) {
        for (int TCRP3F = 0;
        QwnZBMseo -1 > TCRP3F; TCRP3F = TCRP3F +1) {
            printf ("%d ", cHQG7ok[fVMZsC][TCRP3F]);
        }
        printf ("%d\n", cHQG7ok[fVMZsC][QwnZBMseo -1]);
    }
}

