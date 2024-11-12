int main () {
    int rlrMn15tSG, l8STf9JeF;
    int GEMNilCBpoe = 0;
    int TJy5sXV [(1578 - 578)];
    scanf ("%d %d", &rlrMn15tSG, &l8STf9JeF);
    {
        int dqgkflsn7 = 0;
        while (dqgkflsn7 < rlrMn15tSG) {
            scanf ("%d", &TJy5sXV[dqgkflsn7]);
            dqgkflsn7++;
        };
    }
    for (int LK7EJPSMogVC = 0;
    LK7EJPSMogVC < rlrMn15tSG - 1; LK7EJPSMogVC = LK7EJPSMogVC +1) {
        for (int yTbLok5u6sB9 = LK7EJPSMogVC +1;
        yTbLok5u6sB9 < rlrMn15tSG; yTbLok5u6sB9 = yTbLok5u6sB9 + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (TJy5sXV[LK7EJPSMogVC] + TJy5sXV[yTbLok5u6sB9] == l8STf9JeF) {
                GEMNilCBpoe = GEMNilCBpoe +1;
            };
        };
    }
    if (GEMNilCBpoe == 0)
        printf ("no");
    if (GEMNilCBpoe != 0)
        ;
    return 0;
}

