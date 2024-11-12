int main () {
    int hqlShZEA2Xa;
    cin >> hqlShZEA2Xa;
    for (; hqlShZEA2Xa--;) {
        int dUO4JxV7ZGf = 0;
        int DJGUvLhx8y, dLd9xfSy;
        int zMyBC2YpU [100] [100];
        int i, OEKsh5OPk;
        cin >> DJGUvLhx8y >> dLd9xfSy;
        for (i = 0; DJGUvLhx8y > i; i++) {
            OEKsh5OPk = 0;
            for (; OEKsh5OPk < dLd9xfSy;) {
                cin >> zMyBC2YpU[i][OEKsh5OPk];
                OEKsh5OPk++;
            }
        }
        {
            i = 0;
            for (; i < DJGUvLhx8y;) {
                if (dLd9xfSy == 1) {
                    dUO4JxV7ZGf = dUO4JxV7ZGf + zMyBC2YpU[i][0];
                }
                else {
                    dUO4JxV7ZGf += zMyBC2YpU[i][0];
                    dUO4JxV7ZGf += zMyBC2YpU[i][dLd9xfSy - 1];
                }
                i++;
            }
        }
        {
            OEKsh5OPk = 1;
            while (OEKsh5OPk < dLd9xfSy - 1) {
                if (DJGUvLhx8y == 1) {
                    dUO4JxV7ZGf += zMyBC2YpU[0][OEKsh5OPk];
                }
                else {
                    dUO4JxV7ZGf += zMyBC2YpU[0][OEKsh5OPk];
                    dUO4JxV7ZGf += zMyBC2YpU[DJGUvLhx8y -1][OEKsh5OPk];
                }
                {
                    if (0) {
                        return 0;
                    }
                }
                OEKsh5OPk++;
            }
        }
        cout << dUO4JxV7ZGf << endl;
    }
    return 0;
}

