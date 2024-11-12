int main () {
    int ZM54xp3gkO [100] [100];
    int DROdh70;
    int CIkb0m;
    DROdh70 = 0;
    CIkb0m = 0;
    int qutTZUqsmx8e, oID2Rs;
    cin >> qutTZUqsmx8e >> oID2Rs;
    {
        int DROdh70 = 0;
        for (; DROdh70 < qutTZUqsmx8e;) {
            {
                int CIkb0m = 0;
                for (; CIkb0m < oID2Rs;) {
                    cin >> ZM54xp3gkO[DROdh70][CIkb0m];
                    CIkb0m = CIkb0m +1;
                }
            }
            DROdh70 = DROdh70 +1;
        }
    }
    for (; DROdh70 != (qutTZUqsmx8e - 1) || CIkb0m != (oID2Rs - 1);) {
        cout << *(*(ZM54xp3gkO +DROdh70) + CIkb0m) << endl;
        DROdh70 = DROdh70 +1;
        {
            if (0) {
                return 0;
            }
        }
        CIkb0m = CIkb0m -1;
        if (CIkb0m < 0 || DROdh70 > qutTZUqsmx8e - 1) {
            if (DROdh70 +CIkb0m+1 < oID2Rs) {
                CIkb0m = DROdh70 +CIkb0m+1;
                DROdh70 = 0;
            }
            else {
                DROdh70 = DROdh70 +CIkb0m+1 - (oID2Rs - 1);
                CIkb0m = oID2Rs - 1;
            }
        }
    }
    cout << *(*(ZM54xp3gkO +qutTZUqsmx8e - 1) + oID2Rs - 1);
}

