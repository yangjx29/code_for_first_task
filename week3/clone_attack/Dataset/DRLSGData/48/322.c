int PvMxeUlm [(27 - 16)] [(525 - 514)];
int Jq8Dcue4I [11] [11];

void  T5nbFm6q2J7 (int FM4seC, int RyBHjzR6h) {
    int VKsX1n;
    VKsX1n = PvMxeUlm[FM4seC][RyBHjzR6h];
    for (int FHpCsPejWhX = -(616 - 615);
    FHpCsPejWhX <= (538 - 537); FHpCsPejWhX = FHpCsPejWhX +(54 - 53)) {
        int mNdueJTFV9Q = -(316 - 315);
        while (mNdueJTFV9Q <= (185 - 184)) {
            if (FHpCsPejWhX == (262 - 262) && mNdueJTFV9Q == (883 - 883))
                Jq8Dcue4I[FM4seC +FHpCsPejWhX][RyBHjzR6h +mNdueJTFV9Q] = Jq8Dcue4I[FM4seC +FHpCsPejWhX][RyBHjzR6h +mNdueJTFV9Q] + VKsX1n *(185 - 183);
            else
                Jq8Dcue4I[FM4seC +FHpCsPejWhX][RyBHjzR6h +mNdueJTFV9Q] = Jq8Dcue4I[FM4seC +FHpCsPejWhX][RyBHjzR6h +mNdueJTFV9Q] + VKsX1n;
            mNdueJTFV9Q = mNdueJTFV9Q + (949 - 948);
        }
    }
    return;
}

int main () {
    int tjBx4uSQerwT;
    int zu4g57K3zF9h;
    cin >> tjBx4uSQerwT >> zu4g57K3zF9h;
    memset (PvMxeUlm, (718 - 718), sizeof (PvMxeUlm));
    PvMxeUlm[(117 - 112)][(27 - 22)] = tjBx4uSQerwT;
    for (int WA6uwcaJg2Bx = (717 - 717);
    WA6uwcaJg2Bx < zu4g57K3zF9h; WA6uwcaJg2Bx = WA6uwcaJg2Bx +(761 - 760)) {
        memset (Jq8Dcue4I, (143 - 143), sizeof (Jq8Dcue4I));
        {
            int FHpCsPejWhX = (376 - 375);
            while (FHpCsPejWhX <= (209 - 200)) {
                {
                    if ((532 - 532)) {
                        return 0;
                    }
                }
                {
                    int mNdueJTFV9Q = (27 - 26);
                    while (mNdueJTFV9Q <= (463 - 454)) {
                        if (PvMxeUlm[FHpCsPejWhX][mNdueJTFV9Q] > 0)
                            T5nbFm6q2J7 (FHpCsPejWhX, mNdueJTFV9Q);
                        mNdueJTFV9Q = mNdueJTFV9Q + (935 - 934);
                    }
                }
                FHpCsPejWhX++;
            }
        }
        {
            int FHpCsPejWhX = 1;
            while (FHpCsPejWhX <= (275 - 266)) {
                {
                    int mNdueJTFV9Q = 1;
                    while (mNdueJTFV9Q <= (304 - 295)) {
                        PvMxeUlm[FHpCsPejWhX][mNdueJTFV9Q] = Jq8Dcue4I[FHpCsPejWhX][mNdueJTFV9Q];
                        mNdueJTFV9Q = mNdueJTFV9Q + 1;
                    }
                }
                FHpCsPejWhX++;
            }
        }
    }
    {
        int FHpCsPejWhX = 1;
        while (FHpCsPejWhX <= 9) {
            {
                int mNdueJTFV9Q = 1;
                while (mNdueJTFV9Q <= (218 - 210)) {
                    cout << PvMxeUlm[FHpCsPejWhX][mNdueJTFV9Q] << " ";
                    mNdueJTFV9Q = mNdueJTFV9Q + 1;
                }
            }
            cout << PvMxeUlm[FHpCsPejWhX][9] << endl;
            FHpCsPejWhX++;
        }
    }
    return 0;
}

