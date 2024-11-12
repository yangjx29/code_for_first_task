int main () {
    int i;
    char BQxm1A [11], zs3WLa [4], jB5rGwoJD [13];
    for (; cin >> BQxm1A >> zs3WLa;) {
        char max = BQxm1A[(517 - 517)];
        int q12soJSwuvM = 0;
        for (int i = 0;
        10 > i; i = i + 1) {
            if (max < BQxm1A[i])
                max = BQxm1A[i];
        }
        for (i = 0; 10 > i; i = i + 1) {
            if (!(max != BQxm1A[i])) {
                q12soJSwuvM = i;
                break;
            };
        }
        for (i = 0; q12soJSwuvM >= i; i++)
            jB5rGwoJD[i] = BQxm1A[i];
        {
            i = 0;
            while (i < 3) {
                jB5rGwoJD[q12soJSwuvM + 1 + i] = zs3WLa[i];
                i++;
            };
        }
        for (i = q12soJSwuvM + 1; i < strlen (BQxm1A); i++)
            jB5rGwoJD[i + 3] = BQxm1A[i];
        jB5rGwoJD[strlen (BQxm1A) + 3] = '\0';
        for (i = 0; i < strlen (jB5rGwoJD); i++)
            cout << jB5rGwoJD[i];
        cout << endl;
    }
    return 0;
}

