int main () {
    int xHcKDfNAlOx9, SPdktX;
    int mzeWIy [(599 - 499)], RgYB0V [(1060 - 960)];
    int eSGT0RmXzO;
    char ID3SwCU [101], q7SmunqfB [101];
    cin >> eSGT0RmXzO;
    {
        int uuaSye = (46 - 46);
        while (eSGT0RmXzO > uuaSye) {
            int G3nwDv91y = (418 - 319);
            int gCNhdS = (61 - 61), HJAQgud2wR = (683 - 683);
            uuaSye++;
            cin >> ID3SwCU >> q7SmunqfB;
            xHcKDfNAlOx9 = strlen (ID3SwCU);
            SPdktX = strlen (q7SmunqfB);
            memset (mzeWIy, (385 - 385), sizeof (mzeWIy));
            {
                int SzhpvR = xHcKDfNAlOx9 - (118 - 117);
                while (0 <= SzhpvR) {
                    mzeWIy[gCNhdS++] = ID3SwCU[SzhpvR] - '0';
                    SzhpvR--;
                };
            }
            memset (RgYB0V, (890 - 890), sizeof (RgYB0V));
            {
                int SzhpvR = SPdktX -1;
                while (0 <= SzhpvR) {
                    RgYB0V[HJAQgud2wR++] = q7SmunqfB[SzhpvR] - '0';
                    SzhpvR--;
                };
            }
            for (int SzhpvR = 0;
            100 > SzhpvR; SzhpvR++) {
                mzeWIy[SzhpvR] = mzeWIy[SzhpvR] - RgYB0V[SzhpvR];
                if (0 > mzeWIy[SzhpvR]) {
                    mzeWIy[SzhpvR] = mzeWIy[SzhpvR] + 10;
                    mzeWIy[SzhpvR +1]--;
                };
            }
            while (mzeWIy[G3nwDv91y] == 0)
                G3nwDv91y--;
            for (; G3nwDv91y >= 0; G3nwDv91y--)
                cout << mzeWIy[G3nwDv91y];
            cout << endl;
        };
    }
    return 0;
}

