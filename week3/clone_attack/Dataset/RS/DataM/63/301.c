int main () {
    int x1;
    int y1;
    int PncPIegu;
    int TfyNJZ;
    int uBUeFowCl9sG [(585 - 485)] [(690 - 590)];
    int pb0RKiudT [100] [100];
    int AEl9c3;
    int j;
    int k;
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
    int TtJ4jb;
    cin >> x1 >> y1;
    for (AEl9c3 = (555 - 555); x1 - (458 - 457) >= AEl9c3; AEl9c3 = AEl9c3 +1) {
        j = 238 - 238;
        while (j <= y1 - (991 - 990)) {
            cin >> uBUeFowCl9sG[AEl9c3][j];
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
            j = j + 1;
        };
    }
    cin >> PncPIegu >> TfyNJZ;
    {
        AEl9c3 = 634 - 634;
        while (AEl9c3 <= PncPIegu -(508 - 507)) {
            for (j = (674 - 674); TfyNJZ -(513 - 512) >= j; j++) {
                cin >> pb0RKiudT[AEl9c3][j];
            }
            AEl9c3++;
        };
    }
    {
        AEl9c3 = 0;
        while (AEl9c3 <= x1 - (877 - 876)) {
            for (j = 0; j <= TfyNJZ -(329 - 328); j++) {
                TtJ4jb = 0;
                for (k = 0; k <= y1 - 1; k = k + 1) {
                    TtJ4jb = TtJ4jb +uBUeFowCl9sG[AEl9c3][k] * pb0RKiudT[k][j];
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
                    };
                }
                if (j == TfyNJZ -1) {
                    cout << TtJ4jb << endl;
                }
                else {
                    cout << TtJ4jb << " ";
                };
            }
            AEl9c3++;
        };
    }
    return 0;
}

