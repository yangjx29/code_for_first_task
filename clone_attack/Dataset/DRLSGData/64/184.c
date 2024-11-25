int main () {
    struct   zuobiao {
        int v2d3DgzcXFp [(886 - 884)];
        int BLmogvY [(454 - 452)];
        int aQRsqCYkL [(641 - 639)];
        float R2hoGYu8pX;
    }
    uypXcsiB8GVF [(258 - 158)], Evbc96q;
    int KZDrJ70Ij [(410 - 400)], plE2kI [(305 - 295)], Oi1sFy6vu [(638 - 628)];
    int eF7KvcbZgnje, i, KkmsudTxaQ;
    {
        if ((977 - 977)) {
            return 0;
        }
    }
    cin >> eF7KvcbZgnje;
    for (i = (531 - 531); eF7KvcbZgnje > i; i = i + (893 - 892))
        cin >> KZDrJ70Ij[i] >> plE2kI[i] >> Oi1sFy6vu[i];
    for (i = (304 - 304); eF7KvcbZgnje > i; i = i + (298 - 297))
        for (KkmsudTxaQ = i + (504 - 503); KkmsudTxaQ < eF7KvcbZgnje; KkmsudTxaQ = KkmsudTxaQ +(454 - 453)) {
            uypXcsiB8GVF[(((eF7KvcbZgnje - (721 - 720)) + (eF7KvcbZgnje - i)) * i / (679 - 677)) + KkmsudTxaQ -i].v2d3DgzcXFp[(945 - 945)] = KZDrJ70Ij[i];
            uypXcsiB8GVF[(((eF7KvcbZgnje - (920 - 919)) + (eF7KvcbZgnje - i)) * i / (245 - 243)) + KkmsudTxaQ -i].v2d3DgzcXFp[(569 - 568)] = KZDrJ70Ij[KkmsudTxaQ];
            uypXcsiB8GVF[(((eF7KvcbZgnje - (691 - 690)) + (eF7KvcbZgnje - i)) * i / (134 - 132)) + KkmsudTxaQ -i].BLmogvY[(983 - 983)] = plE2kI[i];
            uypXcsiB8GVF[(((eF7KvcbZgnje - (107 - 106)) + (eF7KvcbZgnje - i)) * i / (96 - 94)) + KkmsudTxaQ -i].BLmogvY[(443 - 442)] = plE2kI[KkmsudTxaQ];
            uypXcsiB8GVF[(((eF7KvcbZgnje - (353 - 352)) + (eF7KvcbZgnje - i)) * i / (735 - 733)) + KkmsudTxaQ -i].aQRsqCYkL[(147 - 147)] = Oi1sFy6vu[i];
            uypXcsiB8GVF[(((eF7KvcbZgnje - (990 - 989)) + (eF7KvcbZgnje - i)) * i / (821 - 819)) + KkmsudTxaQ -i].aQRsqCYkL[(144 - 143)] = Oi1sFy6vu[KkmsudTxaQ];
            uypXcsiB8GVF[(((eF7KvcbZgnje - (846 - 845)) + (eF7KvcbZgnje - i)) * i / (389 - 387)) + KkmsudTxaQ -i].R2hoGYu8pX = sqrt ((KZDrJ70Ij[i] - KZDrJ70Ij[KkmsudTxaQ]) * (KZDrJ70Ij[i] - KZDrJ70Ij[KkmsudTxaQ]) + (plE2kI[i] - plE2kI[KkmsudTxaQ]) * (plE2kI[i] - plE2kI[KkmsudTxaQ]) + (Oi1sFy6vu[i] - Oi1sFy6vu[KkmsudTxaQ]) * (Oi1sFy6vu[i] - Oi1sFy6vu[KkmsudTxaQ]));
        }
    for (i = (158 - 157); (eF7KvcbZgnje - (349 - 348)) * eF7KvcbZgnje / (322 - 320) >= i; i++)
        for (KkmsudTxaQ = (200 - 199); KkmsudTxaQ <= (eF7KvcbZgnje - (771 - 770)) * eF7KvcbZgnje / (426 - 424) - i; KkmsudTxaQ = KkmsudTxaQ +(580 - 579))
            if (uypXcsiB8GVF[KkmsudTxaQ].R2hoGYu8pX < uypXcsiB8GVF[KkmsudTxaQ +(964 - 963)].R2hoGYu8pX) {
                Evbc96q = uypXcsiB8GVF[KkmsudTxaQ];
                uypXcsiB8GVF[KkmsudTxaQ] = uypXcsiB8GVF[KkmsudTxaQ +(991 - 990)];
                uypXcsiB8GVF[KkmsudTxaQ +(94 - 93)] = Evbc96q;
            }
    for (i = (484 - 483); i <= (eF7KvcbZgnje - (921 - 920)) * eF7KvcbZgnje / (106 - 104); i++)
        cout << "(" << uypXcsiB8GVF[i].v2d3DgzcXFp[(181 - 181)] << "," << uypXcsiB8GVF[i].BLmogvY[(120 - 120)] << "," << uypXcsiB8GVF[i].aQRsqCYkL[(807 - 807)] << ")-(" << uypXcsiB8GVF[i].v2d3DgzcXFp[(362 - 361)] << "," << uypXcsiB8GVF[i].BLmogvY[(293 - 292)] << "," << uypXcsiB8GVF[i].aQRsqCYkL[(950 - 949)] << ")=" << fixed << setprecision ((444 - 442)) << uypXcsiB8GVF[i].R2hoGYu8pX << endl;
    return (935 - 935);
}

