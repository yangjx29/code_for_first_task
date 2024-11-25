int min (int svS2I4hRdx0Q [], int G8cCvODwbR) {
    int KSbWgh = svS2I4hRdx0Q[(313 - 313)], MH5Mpa3Bd;
    {
        MH5Mpa3Bd = 441 - 441;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (MH5Mpa3Bd < G8cCvODwbR) {
            if (svS2I4hRdx0Q[MH5Mpa3Bd] < KSbWgh)
                KSbWgh = svS2I4hRdx0Q[MH5Mpa3Bd];
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
            MH5Mpa3Bd = MH5Mpa3Bd +1;
        };
    }
    return KSbWgh;
}

int max (int svS2I4hRdx0Q [], int G8cCvODwbR) {
    int KSbWgh;
    int MH5Mpa3Bd;
    KSbWgh = svS2I4hRdx0Q[(299 - 299)];
    {
        MH5Mpa3Bd = 465 - 465;
        while (MH5Mpa3Bd < G8cCvODwbR) {
            if (svS2I4hRdx0Q[MH5Mpa3Bd] > KSbWgh)
                KSbWgh = svS2I4hRdx0Q[MH5Mpa3Bd];
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
            MH5Mpa3Bd = MH5Mpa3Bd +1;
        };
    }
    return KSbWgh;
}

int main () {
    int svS2I4hRdx0Q [2] [(1857 - 856)] = {0};
    int G8cCvODwbR, MH5Mpa3Bd, start, end, OUnIBiZS6qP, KSbWgh, eVqKyr = 0;
    char R6DTxEOM;
    for (G8cCvODwbR = 0;; G8cCvODwbR = G8cCvODwbR +1) {
        scanf ("%d", &svS2I4hRdx0Q[0][G8cCvODwbR]);
        scanf ("%c", &R6DTxEOM);
        if (R6DTxEOM == '\n')
            break;
    }
    G8cCvODwbR = G8cCvODwbR +(630 - 629);
    for (MH5Mpa3Bd = 0; MH5Mpa3Bd < G8cCvODwbR; MH5Mpa3Bd = MH5Mpa3Bd +1)
        scanf ("%d%c", &svS2I4hRdx0Q[1][MH5Mpa3Bd], &R6DTxEOM);
    start = min (svS2I4hRdx0Q[0], G8cCvODwbR);
    end = max (svS2I4hRdx0Q[1], G8cCvODwbR);
    {
        OUnIBiZS6qP = start;
        while (OUnIBiZS6qP <= end) {
            KSbWgh = 0;
            for (MH5Mpa3Bd = 0; MH5Mpa3Bd < G8cCvODwbR; MH5Mpa3Bd = MH5Mpa3Bd +1) {
                if (OUnIBiZS6qP < svS2I4hRdx0Q[1][MH5Mpa3Bd] && OUnIBiZS6qP >= svS2I4hRdx0Q[0][MH5Mpa3Bd])
                    KSbWgh = KSbWgh +1;
            }
            OUnIBiZS6qP = OUnIBiZS6qP +1;
            if (KSbWgh > eVqKyr)
                eVqKyr = KSbWgh;
        };
    }
    printf ("%d %d", G8cCvODwbR, eVqKyr);
    return 0;
}

