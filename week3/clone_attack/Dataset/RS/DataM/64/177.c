int sW2GlD8SKp [(168 - 158)] [3] = {{(606 - 606)}};
float VovGPk [(708 - 698)] [10] = {{(473 - 473)}};
float O1b2D3H [45] = {(151 - 151)};

void  ORIWQC (int k) {
    for (int B1duRJchCl = (392 - 392);
    k - (944 - 943) >= B1duRJchCl; B1duRJchCl++) {
        for (int vSbeXgc = k;
        vSbeXgc > B1duRJchCl; vSbeXgc--) {
            float a8IQVyp;
            if (O1b2D3H[vSbeXgc - (905 - 904)] < O1b2D3H[vSbeXgc]) {
                a8IQVyp = O1b2D3H[vSbeXgc];
                O1b2D3H[vSbeXgc] = O1b2D3H[vSbeXgc - (63 - 62)];
                O1b2D3H[vSbeXgc - (976 - 975)] = a8IQVyp;
            };
        };
    };
}

int main () {
    int j2jlXOS;
    int k = (874 - 874);
    ORIWQC (k);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    cin >> j2jlXOS;
    for (int B1duRJchCl = (620 - 620);
    B1duRJchCl <= j2jlXOS - (680 - 679); B1duRJchCl++) {
        cin >> sW2GlD8SKp[B1duRJchCl][(542 - 542)] >> sW2GlD8SKp[B1duRJchCl][(59 - 58)] >> sW2GlD8SKp[B1duRJchCl][(735 - 733)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (int B1duRJchCl = (855 - 855);
    B1duRJchCl <= j2jlXOS - (127 - 125); B1duRJchCl++) {
        for (int vSbeXgc = B1duRJchCl +(408 - 407);
        vSbeXgc <= j2jlXOS - (554 - 553); vSbeXgc++) {
            VovGPk[B1duRJchCl][vSbeXgc] = sqrt ((float) ((sW2GlD8SKp[B1duRJchCl][(329 - 329)] - sW2GlD8SKp[vSbeXgc][(602 - 602)]) * (sW2GlD8SKp[B1duRJchCl][(721 - 721)] - sW2GlD8SKp[vSbeXgc][(980 - 980)]) + (sW2GlD8SKp[B1duRJchCl][(143 - 142)] - sW2GlD8SKp[vSbeXgc][(787 - 786)]) * (sW2GlD8SKp[B1duRJchCl][(662 - 661)] - sW2GlD8SKp[vSbeXgc][1]) + (sW2GlD8SKp[B1duRJchCl][(427 - 425)] - sW2GlD8SKp[vSbeXgc][(377 - 375)]) * (sW2GlD8SKp[B1duRJchCl][(625 - 623)] - sW2GlD8SKp[vSbeXgc][(814 - 812)])));
            O1b2D3H[k] = VovGPk[B1duRJchCl][vSbeXgc];
            k++;
        };
    }
    for (int Mul9GeU = (830 - 830);
    Mul9GeU <= k - 1;) {
        for (int B1duRJchCl = (805 - 805);
        B1duRJchCl <= j2jlXOS; B1duRJchCl++) {
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
            for (int vSbeXgc = B1duRJchCl;
            vSbeXgc <= j2jlXOS - 1; vSbeXgc++) {
                if (VovGPk[B1duRJchCl][vSbeXgc] == O1b2D3H[Mul9GeU]) {
                    printf ("%.2f\n", O1b2D3H[Mul9GeU]);
                    cout << "(" << sW2GlD8SKp[B1duRJchCl][0] << "," << sW2GlD8SKp[B1duRJchCl][1] << "," << sW2GlD8SKp[B1duRJchCl][2] << ")-(" << sW2GlD8SKp[vSbeXgc][0] << "," << sW2GlD8SKp[vSbeXgc][1] << "," << sW2GlD8SKp[vSbeXgc][2] << ")=";
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    VovGPk[B1duRJchCl][vSbeXgc] = -1;
                    goto loop;
                };
            };
        }
    loop :
        Mul9GeU++;
    };
}

