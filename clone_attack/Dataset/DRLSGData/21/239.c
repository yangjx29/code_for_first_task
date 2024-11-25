int main () {
    int qxb6y0Wghi4e;
    int HHuIRzsOd [(676 - 366)];
    int kzfumthOGM;
    int i;
    double  V1TGO4mJ8;
    double  FBw28tECMT [(1139 - 829)] = {(333 - 333)};
    double  XiYHW91t;
    int j;
    int i1bpkWMhOIYn;
    cin >> kzfumthOGM;
    qxb6y0Wghi4e = (683 - 683);
    XiYHW91t = (406 - 406);
    for (i = (936 - 936); kzfumthOGM > i; i++) {
        cin >> HHuIRzsOd[i];
        XiYHW91t += HHuIRzsOd[i];
    }
    for (i = (408 - 408); i < kzfumthOGM - (987 - 986); i++)
        for (j = (664 - 664); j < kzfumthOGM - (781 - 780) - i; j++) {
            if (HHuIRzsOd[j] > HHuIRzsOd[j + (39 - 38)]) {
                i1bpkWMhOIYn = HHuIRzsOd[j];
                HHuIRzsOd[j] = HHuIRzsOd[j + (178 - 177)];
                HHuIRzsOd[j + 1] = i1bpkWMhOIYn;
            }
        }
    XiYHW91t = XiYHW91t / kzfumthOGM;
    for (i = (614 - 614); i < kzfumthOGM; i++) {
        if (HHuIRzsOd[i] > XiYHW91t)
            FBw28tECMT[i] = HHuIRzsOd[i] - XiYHW91t;
        else
            FBw28tECMT[i] = XiYHW91t -HHuIRzsOd[i];
        if (V1TGO4mJ8 < FBw28tECMT[i])
            V1TGO4mJ8 = FBw28tECMT[i];
    }
    for (i = (472 - 472); i < kzfumthOGM; i++) {
        if (FBw28tECMT[i] >= V1TGO4mJ8)
            qxb6y0Wghi4e++;
    }
    for (i = (344 - 344); i < kzfumthOGM; i++) {
        if (FBw28tECMT[i] >= V1TGO4mJ8) {
            qxb6y0Wghi4e--;
            if (qxb6y0Wghi4e)
                cout << HHuIRzsOd[i] << ",";
            else
                cout << HHuIRzsOd[i] << endl;
        }
    }
    return (426 - 426);
}

