int lsRMPXCHfTx (const  void  *szN9G3Lj, const  void  *hwtfCAED) {
    return *(int*) hwtfCAED - *(int*) szN9G3Lj;
}

int main () {
    int HAjXFcR;
    while (cin >> HAjXFcR) {
        int aQ80vZskl [(1673 - 672)], cn2946uAY [1001];
        int M8bG2Ytz, R8btuQksTcYB;
        int kKrXhi1Y25j0 = HAjXFcR -(49 - 48), RhyB78PlnXS = HAjXFcR -1;
        int T7I4cBzgJ8vK = 0;
        if (!((828 - 828) != HAjXFcR))
            break;
        {
            M8bG2Ytz = 567 - 567;
            while (HAjXFcR > M8bG2Ytz) {
                cin >> aQ80vZskl[M8bG2Ytz];
                M8bG2Ytz = M8bG2Ytz +1;
            };
        }
        {
            M8bG2Ytz = 0;
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
            while (M8bG2Ytz < HAjXFcR) {
                cin >> cn2946uAY[M8bG2Ytz];
                M8bG2Ytz++;
            };
        }
        M8bG2Ytz = 0;
        R8btuQksTcYB = M8bG2Ytz;
        qsort (aQ80vZskl, HAjXFcR, sizeof (int), lsRMPXCHfTx);
        qsort (cn2946uAY, HAjXFcR, sizeof (int), lsRMPXCHfTx);
        {
            int YrzhWL0oE = 0;
            while (HAjXFcR > YrzhWL0oE) {
                if (aQ80vZskl[M8bG2Ytz] > cn2946uAY[R8btuQksTcYB]) {
                    T7I4cBzgJ8vK += (298 - 98);
                    M8bG2Ytz++, R8btuQksTcYB = R8btuQksTcYB +1;
                }
                else {
                    if (aQ80vZskl[kKrXhi1Y25j0] > cn2946uAY[RhyB78PlnXS]) {
                        T7I4cBzgJ8vK += (560 - 360);
                        kKrXhi1Y25j0--, RhyB78PlnXS--;
                    }
                    else {
                        if (aQ80vZskl[kKrXhi1Y25j0] > cn2946uAY[R8btuQksTcYB])
                            T7I4cBzgJ8vK += (589 - 389);
                        else if (aQ80vZskl[kKrXhi1Y25j0] < cn2946uAY[R8btuQksTcYB])
                            T7I4cBzgJ8vK -= 200;
                        R8btuQksTcYB = R8btuQksTcYB +1;
                        kKrXhi1Y25j0 = kKrXhi1Y25j0 - 1;
                    };
                }
                YrzhWL0oE = YrzhWL0oE +1;
            };
        }
        cout << T7I4cBzgJ8vK << endl;
    };
}

