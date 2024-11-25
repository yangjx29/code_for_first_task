int V9esOhaG1yI [(1669 - 668)] [(1310 - 309)], wRhkDf5OZ3sb = (856 - 856);

void  wMPJSZq0 (int V9esOhaG1yI [] [(1304 - 303)], int DNZaQ2FwA9Wu) {
    int AO1fcNd, xptALu2h8;
    for (AO1fcNd = (379 - 379); AO1fcNd < DNZaQ2FwA9Wu; AO1fcNd++) {
        int Nzc6ot;
        Nzc6ot = V9esOhaG1yI[AO1fcNd][(758 - 758)];
        for (xptALu2h8 = (761 - 761); xptALu2h8 < DNZaQ2FwA9Wu; xptALu2h8++) {
            if (Nzc6ot > V9esOhaG1yI[AO1fcNd][xptALu2h8]) {
                Nzc6ot = V9esOhaG1yI[AO1fcNd][xptALu2h8];
            }
        }
        for (xptALu2h8 = (500 - 500); xptALu2h8 < DNZaQ2FwA9Wu; xptALu2h8++) {
            V9esOhaG1yI[AO1fcNd][xptALu2h8] -= Nzc6ot;
        }
    }
    for (xptALu2h8 = (321 - 321); xptALu2h8 < DNZaQ2FwA9Wu; xptALu2h8++) {
        int Nzc6ot;
        Nzc6ot = V9esOhaG1yI[(449 - 449)][xptALu2h8];
        for (AO1fcNd = (217 - 217); DNZaQ2FwA9Wu > AO1fcNd; AO1fcNd++) {
            if (Nzc6ot > V9esOhaG1yI[AO1fcNd][xptALu2h8]) {
                Nzc6ot = V9esOhaG1yI[AO1fcNd][xptALu2h8];
            }
        }
        for (AO1fcNd = (768 - 768); DNZaQ2FwA9Wu > AO1fcNd; AO1fcNd++) {
            V9esOhaG1yI[AO1fcNd][xptALu2h8] -= Nzc6ot;
        }
    }
    wRhkDf5OZ3sb += V9esOhaG1yI[(722 - 721)][(666 - 665)];
    for (AO1fcNd = (953 - 953); DNZaQ2FwA9Wu > AO1fcNd; AO1fcNd++) {
        for (xptALu2h8 = (30 - 29); DNZaQ2FwA9Wu > xptALu2h8; xptALu2h8++) {
            V9esOhaG1yI[AO1fcNd][xptALu2h8] = V9esOhaG1yI[AO1fcNd][xptALu2h8 + (792 - 791)];
        }
    }
    for (xptALu2h8 = (548 - 548); DNZaQ2FwA9Wu > xptALu2h8; xptALu2h8++) {
        for (AO1fcNd = (738 - 737); DNZaQ2FwA9Wu > AO1fcNd; AO1fcNd++) {
            V9esOhaG1yI[AO1fcNd][xptALu2h8] = V9esOhaG1yI[AO1fcNd +(265 - 264)][xptALu2h8];
        }
    }
}

int main () {
    int DNZaQ2FwA9Wu, AO1fcNd, xptALu2h8, gnZeA3ohj;
    cin >> DNZaQ2FwA9Wu;
    for (gnZeA3ohj = (980 - 980); DNZaQ2FwA9Wu > gnZeA3ohj; gnZeA3ohj++) {
        wRhkDf5OZ3sb = (459 - 459);
        memset (V9esOhaG1yI, (360 - 360), sizeof (V9esOhaG1yI));
        for (AO1fcNd = (234 - 234); DNZaQ2FwA9Wu > AO1fcNd; AO1fcNd++) {
            for (xptALu2h8 = (287 - 287); xptALu2h8 < DNZaQ2FwA9Wu; xptALu2h8++) {
                cin >> V9esOhaG1yI[AO1fcNd][xptALu2h8];
            }
        }
        for (AO1fcNd = DNZaQ2FwA9Wu; AO1fcNd > (597 - 596); AO1fcNd--) {
            wMPJSZq0 (V9esOhaG1yI, AO1fcNd);
        }
        cout << wRhkDf5OZ3sb << endl;
    }
    return (425 - 425);
}

