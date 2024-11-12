int main () {
    int vFpagI0Sih [300], zjJ2bhKw, ATkUpCOY = (959 - 959), sOUjViHs3Lm, XNMwzB, JRTOoedh, n5Rrpag1S, HGW1L0FawiSr, ZdGK1b, cHiKD4l, MPuXqaR9I = (623 - 622), oOXCwM0Rs8TP, VAktv4pzis, klC7nSm1rkYK, teETc2M89kIZ, YXlL8sn4f = (952 - 952);
    for (;;) {
        scanf ("%d %d", &teETc2M89kIZ, &oOXCwM0Rs8TP);
        if (oOXCwM0Rs8TP == 0 && teETc2M89kIZ == 0)
            break;
        for (ZdGK1b = 0; ZdGK1b <= teETc2M89kIZ - 1; ZdGK1b = ZdGK1b +1) {
            vFpagI0Sih[ZdGK1b] = ZdGK1b +1;
        }
        {
            ZdGK1b = teETc2M89kIZ;
            while (ZdGK1b <= 299) {
                vFpagI0Sih[ZdGK1b] = 0;
                ZdGK1b = ZdGK1b +1;
            };
        }
        ATkUpCOY = (272 - 272);
        MPuXqaR9I = 1;
        for (;;) {
            if ((MPuXqaR9I +oOXCwM0Rs8TP) % teETc2M89kIZ == 1 || (MPuXqaR9I +oOXCwM0Rs8TP) % teETc2M89kIZ == 0) {
                MPuXqaR9I = (MPuXqaR9I +oOXCwM0Rs8TP) % teETc2M89kIZ + teETc2M89kIZ - 1;
            }
            else {
                MPuXqaR9I = (MPuXqaR9I +oOXCwM0Rs8TP) % teETc2M89kIZ - 1;
            }
            if (MPuXqaR9I == 0)
                break;
            {
                cHiKD4l = MPuXqaR9I -1;
                while (cHiKD4l <= teETc2M89kIZ - 1) {
                    vFpagI0Sih[cHiKD4l] = vFpagI0Sih[cHiKD4l + 1];
                    cHiKD4l = cHiKD4l + 1;
                };
            }
            teETc2M89kIZ = teETc2M89kIZ - 1;
        }
        printf ("%d\n", vFpagI0Sih[0]);
        YXlL8sn4f = 0;
    }
    return 0;
}

