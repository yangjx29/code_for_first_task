struct   score {
    int N7WYmHAtcUMd;
    int UFblck;
    int rktF8gAe;
}
iWj4y7sb [100000];

int Z3eYwU0z (int Yr6B8Y4t, int toU5yPH) {
    return (Yr6B8Y4t > toU5yPH) ? Yr6B8Y4t : toU5yPH;
}

int vc6wE0 (int Yr6B8Y4t, int toU5yPH) {
    return (toU5yPH > Yr6B8Y4t) ? Yr6B8Y4t : toU5yPH;
}

int main () {
    int Sg6nFOso = 0, wdVhFNLRTAl = 0, Y6Q8N5FKvyR7 = 0;
    int XGpev8DOEM = 0, HeLz3nZV = 0, SrUanZ = 0;
    int CQNl9P, taT8gKJo;
    int Z3eYwU0z (int Yr6B8Y4t, int toU5yPH);
    int total [100000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    scanf ("%d", &CQNl9P);
    for (taT8gKJo = 0; taT8gKJo < CQNl9P; taT8gKJo++) {
        scanf ("%d", &iWj4y7sb[taT8gKJo].N7WYmHAtcUMd);
        scanf ("%d", &iWj4y7sb[taT8gKJo].UFblck);
        scanf ("%d", &iWj4y7sb[taT8gKJo].rktF8gAe);
        total[taT8gKJo] = iWj4y7sb[taT8gKJo].UFblck + iWj4y7sb[taT8gKJo].rktF8gAe;
        if (total[taT8gKJo] >= XGpev8DOEM) {
            if (!(XGpev8DOEM != total[taT8gKJo])) {
                Y6Q8N5FKvyR7 = wdVhFNLRTAl;
                SrUanZ = HeLz3nZV;
                HeLz3nZV = XGpev8DOEM;
                XGpev8DOEM = total[taT8gKJo];
                wdVhFNLRTAl = Z3eYwU0z (Sg6nFOso, taT8gKJo + 1);
                Sg6nFOso = vc6wE0 (Sg6nFOso, taT8gKJo + 1);
            }
            else {
                Y6Q8N5FKvyR7 = wdVhFNLRTAl;
                wdVhFNLRTAl = Sg6nFOso;
                SrUanZ = HeLz3nZV;
                HeLz3nZV = XGpev8DOEM;
                XGpev8DOEM = total[taT8gKJo];
                Sg6nFOso = taT8gKJo + 1;
            };
        }
        else if (total[taT8gKJo] < XGpev8DOEM &&total[taT8gKJo] >= HeLz3nZV) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            if (total[taT8gKJo] == HeLz3nZV) {
                SrUanZ = HeLz3nZV;
                HeLz3nZV = total[taT8gKJo];
                Y6Q8N5FKvyR7 = Z3eYwU0z (wdVhFNLRTAl, taT8gKJo + 1);
                wdVhFNLRTAl = vc6wE0 (wdVhFNLRTAl, taT8gKJo + 1);
            }
            else {
                Y6Q8N5FKvyR7 = wdVhFNLRTAl;
                SrUanZ = HeLz3nZV;
                HeLz3nZV = total[taT8gKJo];
                wdVhFNLRTAl = taT8gKJo + 1;
            };
        }
        else if (total[taT8gKJo] < HeLz3nZV &&total[taT8gKJo] >= SrUanZ) {
            if (total[taT8gKJo] == SrUanZ) {
                SrUanZ = total[taT8gKJo];
                Y6Q8N5FKvyR7 = vc6wE0 (taT8gKJo + 1, Y6Q8N5FKvyR7);
            }
            else {
                SrUanZ = total[taT8gKJo];
                Y6Q8N5FKvyR7 = taT8gKJo + 1;
            };
        };
    }
    printf ("%d %d\n", Sg6nFOso, XGpev8DOEM);
    printf ("%d %d\n", wdVhFNLRTAl, HeLz3nZV);
    printf ("%d %d", Y6Q8N5FKvyR7, SrUanZ);
    return 0;
}

