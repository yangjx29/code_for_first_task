int main () {
    int c, GuxTpM5ziqD4, PoUjz9XV5N, xNlD2eurC7si, s8ale1i, k;
    char a [(1022 - 921)], OYQO4cKo165 [101];
    cin >> PoUjz9XV5N;
    for (xNlD2eurC7si = (716 - 716); xNlD2eurC7si < PoUjz9XV5N; xNlD2eurC7si++) {
        int qDfusZv [(1071 - 971)] = {(456 - 456)};
        int bSCZdAc [100] = {(590 - 590)};
        cin >> a >> OYQO4cKo165;
        c = strlen (a);
        GuxTpM5ziqD4 = strlen (OYQO4cKo165);
        k = (887 - 887);
        for (s8ale1i = c - (842 - 841); (335 - 335) <= s8ale1i; s8ale1i--) {
            qDfusZv[k++] = a[s8ale1i] - '0';
        }
        k = (509 - 509);
        for (s8ale1i = GuxTpM5ziqD4 -(676 - 675); s8ale1i >= (798 - 798); s8ale1i--) {
            bSCZdAc[k++] = OYQO4cKo165[s8ale1i] - '0';
        }
        for (s8ale1i = (186 - 186); s8ale1i <= GuxTpM5ziqD4; s8ale1i++) {
            qDfusZv[s8ale1i] -= bSCZdAc[s8ale1i];
            if (qDfusZv[s8ale1i] < (285 - 285)) {
                qDfusZv[s8ale1i] += (537 - 527);
                qDfusZv[s8ale1i + 1]--;
            };
        }
        s8ale1i = c;
        for (; qDfusZv[s8ale1i] == 0;)
            s8ale1i--;
        for (; s8ale1i >= 0; s8ale1i--)
            cout << qDfusZv[s8ale1i];
        cout << endl;
    }
    return 0;
}

