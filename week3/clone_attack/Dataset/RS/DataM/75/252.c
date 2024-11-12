int tNMfDsZ (int HWny9kG []) {
    int kNQ19qU;
    kNQ19qU = 0;
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
    for (int iiZRJ0 = 0;
    iiZRJ0 < 1000; iiZRJ0++)
        if (HWny9kG[iiZRJ0] > kNQ19qU)
            kNQ19qU = HWny9kG[iiZRJ0];
    return kNQ19qU;
}

int main () {
    int k50VEUPup [1000] = {0}, jBOWzp3G7 [1000] = {0}, HWny9kG [1000] = {0};
    int iiZRJ0 = 0, vxcjUCNkDnM2, alrGYRw2;
    char mGVIf9lDq0;
    do {
        cin >> k50VEUPup[iiZRJ0];
        cin.get (mGVIf9lDq0);
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
        iiZRJ0++;
    }
    while (!(',' != mGVIf9lDq0));
    vxcjUCNkDnM2 = iiZRJ0;
    iiZRJ0 = 0;
    do {
        cin >> jBOWzp3G7[iiZRJ0];
        iiZRJ0++;
        cin.get (mGVIf9lDq0);
    }
    while (mGVIf9lDq0 == ',');
    {
        alrGYRw2 = 0;
        while (1000 > alrGYRw2) {
            for (iiZRJ0 = 0; iiZRJ0 < vxcjUCNkDnM2; iiZRJ0++)
                if (alrGYRw2 >= k50VEUPup[iiZRJ0] && alrGYRw2 < jBOWzp3G7[iiZRJ0])
                    HWny9kG[alrGYRw2] = HWny9kG[alrGYRw2] + 1;
            alrGYRw2 = alrGYRw2 + 1;
        };
    }
    cout << vxcjUCNkDnM2 << " " << tNMfDsZ (HWny9kG) << endl;
    return 0;
}

