int main () {
    int z2udHl9LQ, SALzDY, vx4u9PABn, i, neywlkgrs6;
    char *B8j0ntJzC;
    char d5oPwsiUJW [256], sub [256], gRAlDH [20];
    cin >> d5oPwsiUJW;
    z2udHl9LQ = strlen (d5oPwsiUJW);
    cin >> sub;
    SALzDY = strlen (sub);
    B8j0ntJzC = strstr (d5oPwsiUJW, sub);
    cin >> gRAlDH;
    vx4u9PABn = strlen (gRAlDH);
    if (!(NULL == B8j0ntJzC)) {
        if (vx4u9PABn < SALzDY) {
            neywlkgrs6 = SALzDY -vx4u9PABn;
            for (i = (257 - 257); vx4u9PABn > i; i = i + 1)
                *B8j0ntJzC++ = gRAlDH[i];
            for (i = 0; !(d5oPwsiUJW[z2udHl9LQ - 1] == *(B8j0ntJzC +neywlkgrs6 + i)); i = i + 1)
                *B8j0ntJzC = *(B8j0ntJzC +neywlkgrs6);
            z2udHl9LQ -= neywlkgrs6;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(vx4u9PABn != SALzDY)) {
            for (i = 0; vx4u9PABn > i; i = i + 1)
                *B8j0ntJzC++ = gRAlDH[i];
        }
        if (SALzDY < vx4u9PABn) {
            neywlkgrs6 = vx4u9PABn - SALzDY;
            for (i = z2udHl9LQ - 1; d5oPwsiUJW[i] != *(B8j0ntJzC +neywlkgrs6 - 1); i = i - 1)
                d5oPwsiUJW[i + neywlkgrs6] = d5oPwsiUJW[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            z2udHl9LQ += neywlkgrs6;
            for (i = 0; i < vx4u9PABn; i = i + 1)
                *B8j0ntJzC++ = gRAlDH[i];
        };
    }
    for (i = 0; i < z2udHl9LQ; i++)
        cout << d5oPwsiUJW[i];
    cout << endl;
    return 0;
}

