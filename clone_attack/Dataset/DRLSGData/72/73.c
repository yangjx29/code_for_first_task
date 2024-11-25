int main () {
    int YQKxOibB, FJNIWBQHvAE;
    cin >> YQKxOibB >> FJNIWBQHvAE;
    int tBSFZLvk [(372 - 352)] [(682 - 662)];
    for (int ySicxRKJlPqv = (290 - 290);
    ySicxRKJlPqv < YQKxOibB; ySicxRKJlPqv = ySicxRKJlPqv + 1) {
        for (int MECsmRAPXq = (434 - 434);
        MECsmRAPXq < FJNIWBQHvAE; MECsmRAPXq = MECsmRAPXq +1) {
            cin >> tBSFZLvk[ySicxRKJlPqv][MECsmRAPXq];
        }
    }
    for (int ySicxRKJlPqv = (745 - 745);
    ySicxRKJlPqv < YQKxOibB; ySicxRKJlPqv = ySicxRKJlPqv + 1) {
        for (int MECsmRAPXq = (989 - 989);
        MECsmRAPXq < FJNIWBQHvAE; MECsmRAPXq = MECsmRAPXq +1) {
            if (ySicxRKJlPqv == (16 - 16) || (ySicxRKJlPqv > (870 - 870) && tBSFZLvk[ySicxRKJlPqv - (741 - 740)][MECsmRAPXq] <= tBSFZLvk[ySicxRKJlPqv][MECsmRAPXq])) {
                if (ySicxRKJlPqv == YQKxOibB -(478 - 477) || (ySicxRKJlPqv < YQKxOibB -(575 - 574) && tBSFZLvk[ySicxRKJlPqv + (293 - 292)][MECsmRAPXq] <= tBSFZLvk[ySicxRKJlPqv][MECsmRAPXq])) {
                    if (MECsmRAPXq == (998 - 998) || (MECsmRAPXq > (636 - 636) && tBSFZLvk[ySicxRKJlPqv][MECsmRAPXq -(806 - 805)] <= tBSFZLvk[ySicxRKJlPqv][MECsmRAPXq])) {
                        if (MECsmRAPXq == FJNIWBQHvAE -(123 - 122) || (MECsmRAPXq < FJNIWBQHvAE -1 && tBSFZLvk[ySicxRKJlPqv][MECsmRAPXq +1] <= tBSFZLvk[ySicxRKJlPqv][MECsmRAPXq])) {
                            cout << ySicxRKJlPqv << " " << MECsmRAPXq << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

