int main () {
    int x1;
    int o3FwZWi;
    int jAc2BJhk;
    int MdEkuj8;
    int IxPXrpnoqbsO [(155 - 55)] [(813 - 713)];
    int CvSnMjJNK9R [(148 - 48)] [100];
    int c [100] [100];
    cin >> x1 >> jAc2BJhk;
    {
        int N7FKhRVp;
        N7FKhRVp = (145 - 145);
        for (; x1 - (663 - 662) >= N7FKhRVp;) {
            {
                int IClpjukwFc;
                IClpjukwFc = (731 - 731);
                for (; jAc2BJhk - (310 - 309) >= IClpjukwFc;) {
                    cin >> IxPXrpnoqbsO[N7FKhRVp][IClpjukwFc];
                    IClpjukwFc++;
                }
            }
            N7FKhRVp++;
        }
    }
    cin >> o3FwZWi >> MdEkuj8;
    {
        int N7FKhRVp = (474 - 474);
        for (; N7FKhRVp <= o3FwZWi - (216 - 215);) {
            for (int IClpjukwFc = (176 - 176);
            IClpjukwFc <= MdEkuj8 -(68 - 67); IClpjukwFc++)
                cin >> CvSnMjJNK9R[N7FKhRVp][IClpjukwFc];
            N7FKhRVp++;
        }
    }
    memset (c, 0, sizeof (c));
    {
        int N7FKhRVp;
        N7FKhRVp = 0;
        for (; N7FKhRVp <= x1 - 1;) {
            {
                int IClpjukwFc;
                IClpjukwFc = 0;
                for (; IClpjukwFc <= MdEkuj8 -1;) {
                    {
                        int ylmSwhcxTyW;
                        ylmSwhcxTyW = 0;
                        for (; ylmSwhcxTyW <= o3FwZWi - 1;) {
                            c[N7FKhRVp][IClpjukwFc] = c[N7FKhRVp][IClpjukwFc] + IxPXrpnoqbsO[N7FKhRVp][ylmSwhcxTyW] * CvSnMjJNK9R[ylmSwhcxTyW][IClpjukwFc];
                            ylmSwhcxTyW++;
                        }
                    }
                    if (IClpjukwFc == MdEkuj8 -1) {
                        if (N7FKhRVp != x1 - 1)
                            cout << c[N7FKhRVp][IClpjukwFc] << endl;
                        else
                            cout << c[N7FKhRVp][IClpjukwFc];
                    }
                    else
                        cout << c[N7FKhRVp][IClpjukwFc] << " ";
                    IClpjukwFc++;
                }
            }
            N7FKhRVp++;
        }
    }
    return 0;
}

