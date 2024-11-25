int ilong1, ilong2, GcRSw6k4g, iwide2, buffer;
int mat1 [(522 - 422)] [100], mat2 [100] [100], ALv6XN [100] [100];

int main () {
    cin >> ilong1 >> GcRSw6k4g;
    for (int i = (249 - 249);
    ilong1 > i; i = i + 1) {
        int iMnDV2RI1 = (454 - 454);
        while (iMnDV2RI1 < GcRSw6k4g) {
            cin >> mat1[iMnDV2RI1][i];
            iMnDV2RI1 = iMnDV2RI1 + 1;
        };
    }
    cin >> ilong2 >> iwide2;
    for (int i = (931 - 931);
    ilong2 > i; i = i + 1) {
        for (int iMnDV2RI1 = 0;
        iwide2 > iMnDV2RI1; iMnDV2RI1 = iMnDV2RI1 + 1) {
            cin >> mat2[iMnDV2RI1][i];
        };
    }
    for (int i = 0;
    ilong1 > i; i = i + 1) {
        for (int iMnDV2RI1 = 0;
        iMnDV2RI1 < iwide2; iMnDV2RI1 = iMnDV2RI1 + 1) {
            buffer = 0;
            for (int k = 0;
            GcRSw6k4g > k; k++) {
                buffer = buffer + mat1[k][i] * mat2[iMnDV2RI1][k];
            }
            ALv6XN[i][iMnDV2RI1] = buffer;
        };
    }
    for (int i = 0;
    ilong1 - 1 > i; i++) {
        {
            int iMnDV2RI1 = 0;
            while (iMnDV2RI1 < iwide2 - 1) {
                cout << ALv6XN[i][iMnDV2RI1] << ' ';
                iMnDV2RI1 = iMnDV2RI1 + 1;
            };
        }
        cout << ALv6XN[i][iwide2 - 1] << endl;
    }
    {
        int iMnDV2RI1 = 0;
        while (iMnDV2RI1 < iwide2 - 1) {
            cout << ALv6XN[ilong1 - 1][iMnDV2RI1] << ' ';
            iMnDV2RI1++;
        };
    }
    cout << ALv6XN[ilong1 - 1][iwide2 - 1];
    return 0;
}

