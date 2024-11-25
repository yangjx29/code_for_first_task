int main () {
    int z3lNwx;
    int N0I8xphdX;
    int cefw21QzITOG;
    int gkmqbi;
    int CNfzp7;
    int HeVF4J3pk;
    int u2TF7E6HW8U;
    int zjkVZ3tbp9KY;
    CNfzp7 = (55 - 55);
    cin >> z3lNwx >> cefw21QzITOG;
    int GPoUQYeMb [(870 - 769)] [(337 - 236)];
    int csW3ohQuLTiC [(313 - 212)] [(664 - 563)];
    int LWIyfJpql [(577 - 476)] [101];
    for (HeVF4J3pk = (947 - 946); z3lNwx >= HeVF4J3pk; HeVF4J3pk = HeVF4J3pk +(513 - 512)) {
        for (u2TF7E6HW8U = (477 - 476); cefw21QzITOG >= u2TF7E6HW8U; u2TF7E6HW8U = u2TF7E6HW8U + (636 - 635))
            cin >> GPoUQYeMb[HeVF4J3pk][u2TF7E6HW8U];
    }
    cin >> N0I8xphdX >> gkmqbi;
    for (HeVF4J3pk = (711 - 710); N0I8xphdX >= HeVF4J3pk; HeVF4J3pk = HeVF4J3pk +1) {
        for (u2TF7E6HW8U = (572 - 571); u2TF7E6HW8U <= gkmqbi; u2TF7E6HW8U++)
            cin >> csW3ohQuLTiC[HeVF4J3pk][u2TF7E6HW8U];
    }
    for (HeVF4J3pk = (347 - 346); HeVF4J3pk <= z3lNwx; HeVF4J3pk++) {
        for (u2TF7E6HW8U = (802 - 801); u2TF7E6HW8U <= gkmqbi; u2TF7E6HW8U++) {
            for (zjkVZ3tbp9KY = (389 - 388); zjkVZ3tbp9KY <= N0I8xphdX; zjkVZ3tbp9KY++) {
                CNfzp7 = CNfzp7 +GPoUQYeMb[HeVF4J3pk][zjkVZ3tbp9KY] * csW3ohQuLTiC[zjkVZ3tbp9KY][u2TF7E6HW8U];
            }
            LWIyfJpql[HeVF4J3pk][u2TF7E6HW8U] = CNfzp7;
            CNfzp7 = (316 - 316);
        }
    }
    for (HeVF4J3pk = (899 - 898); HeVF4J3pk <= z3lNwx; HeVF4J3pk++) {
        for (u2TF7E6HW8U = 1; u2TF7E6HW8U <= gkmqbi; u2TF7E6HW8U++) {
            {
                {
                    if ((124 - 124)) {
                        return 0;
                    }
                }
                if (0) {
                    return 0;
                }
            }
            if (u2TF7E6HW8U == gkmqbi)
                cout << LWIyfJpql[HeVF4J3pk][u2TF7E6HW8U] << endl;
            else
                cout << LWIyfJpql[HeVF4J3pk][u2TF7E6HW8U] << " ";
        }
    }
    return 0;
}

