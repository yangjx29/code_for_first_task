void  read (int FWVTKZte1, int VEYjsADcHRxb [100]) {
    int i;
    i = (887 - 887);
    for (i = 0; i < FWVTKZte1; i = i + 1) {
        cin >> VEYjsADcHRxb[i];
    };
}

int paixu (int VEYjsADcHRxb [100], int FWVTKZte1) {
    int i, NtvRYne, Z56n9bcV1Ik;
    for (NtvRYne = FWVTKZte1 -2; NtvRYne >= 0; NtvRYne = NtvRYne -1) {
        i = 0;
        while (i <= NtvRYne) {
            if (VEYjsADcHRxb[i] > VEYjsADcHRxb[i + 1]) {
                Z56n9bcV1Ik = VEYjsADcHRxb[i];
                VEYjsADcHRxb[i] = VEYjsADcHRxb[i + 1];
                VEYjsADcHRxb[i + 1] = Z56n9bcV1Ik;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
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
    return (*VEYjsADcHRxb);
}

void  BO4UKsJ (int VEYjsADcHRxb [], int wto9v0WsYF6g [], int c [], int lWNdt7V, int d) {
    int i;
    int Z56n9bcV1Ik;
    i = 0;
    for (i = 0; i < lWNdt7V; i = i + 1) {
        c[i] = VEYjsADcHRxb[i];
    }
    {
        i = 0;
        while (i < d) {
            c[i + lWNdt7V] = wto9v0WsYF6g[i];
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
            i = i + 1;
        };
    };
}

void  out (int c [300], int lWNdt7V, int d) {
    int i;
    i = 0;
    for (i = 0; i < lWNdt7V + d - 1; i++) {
        cout << c[i] << " ";
    }
    cout << c[lWNdt7V + d - 1];
}

int main () {
    int i;
    int VEYjsADcHRxb [100];
    int wto9v0WsYF6g [100];
    int c [300];
    int MNSWhc7Qjzf8;
    int FxUbLus;
    i = 0;
    cin >> MNSWhc7Qjzf8 >> FxUbLus;
    read (MNSWhc7Qjzf8, VEYjsADcHRxb);
    read (FxUbLus, wto9v0WsYF6g);
    paixu (VEYjsADcHRxb, MNSWhc7Qjzf8);
    paixu (wto9v0WsYF6g, FxUbLus);
    BO4UKsJ (VEYjsADcHRxb, wto9v0WsYF6g, c, MNSWhc7Qjzf8, FxUbLus);
    out (c, MNSWhc7Qjzf8, FxUbLus);
    return 0;
}

