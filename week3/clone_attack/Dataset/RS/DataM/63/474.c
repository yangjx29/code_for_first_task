int main () {
    int YKE7Dbo [100] [100];
    int Fz1OnSQDp [(281 - 181)] [100];
    int ctYAPT5;
    int v06MkR1TIiz4;
    int x2;
    int zP7fuaJgVkOA;
    int xA4ias8c95 [100] [100];
    cin >> ctYAPT5 >> v06MkR1TIiz4;
    {
        int VcmPDLl5NnzZ;
        VcmPDLl5NnzZ = (940 - 940);
        while (ctYAPT5 - (289 - 288) >= VcmPDLl5NnzZ) {
            {
                int g4a0LAo386U = (163 - 163);
                while (v06MkR1TIiz4 - 1 >= g4a0LAo386U) {
                    cin >> Fz1OnSQDp[VcmPDLl5NnzZ][g4a0LAo386U];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    g4a0LAo386U = g4a0LAo386U + 1;
                };
            }
            VcmPDLl5NnzZ++;
        };
    }
    cin >> x2 >> zP7fuaJgVkOA;
    for (int VcmPDLl5NnzZ = (847 - 847);
    VcmPDLl5NnzZ <= x2 - 1; VcmPDLl5NnzZ++) {
        int g4a0LAo386U = (585 - 585);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (zP7fuaJgVkOA - 1 >= g4a0LAo386U) {
            cin >> YKE7Dbo[VcmPDLl5NnzZ][g4a0LAo386U];
            g4a0LAo386U++;
        };
    }
    for (int VcmPDLl5NnzZ = 0;
    VcmPDLl5NnzZ <= ctYAPT5 - 1; VcmPDLl5NnzZ++) {
        int M4OK5cu = 0;
        for (int g4a0LAo386U = 0;
        g4a0LAo386U <= zP7fuaJgVkOA - 1; g4a0LAo386U++) {
            if (M4OK5cu >= 1) {
                cout << " ";
            }
            M4OK5cu++;
            xA4ias8c95[VcmPDLl5NnzZ][g4a0LAo386U] = 0;
            for (int uVg6jKa = 0;
            uVg6jKa <= v06MkR1TIiz4 - 1; uVg6jKa++) {
                xA4ias8c95[VcmPDLl5NnzZ][g4a0LAo386U] += (Fz1OnSQDp[VcmPDLl5NnzZ][uVg6jKa] * YKE7Dbo[uVg6jKa][g4a0LAo386U]);
            }
            cout << xA4ias8c95[VcmPDLl5NnzZ][g4a0LAo386U];
        }
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
        cout << endl;
    };
}

