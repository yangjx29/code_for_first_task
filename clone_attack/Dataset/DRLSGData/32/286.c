int main () {
    int n;
    int JNwZkcvF [(970 - 870)];
    int bmcvb7wo35N;
    char qGQSCwU4NZv [100], NnKzjaE [100];
    scanf ("%d", &n);
    for (bmcvb7wo35N = (749 - 749); n > bmcvb7wo35N; bmcvb7wo35N++) {
        int EVX4jidQu, e;
        int VCiucxkpDlKP = strlen (qGQSCwU4NZv);
        int pJGSDMiPxKy = strlen (NnKzjaE);
        for (EVX4jidQu = (682 - 682); 100 > EVX4jidQu; EVX4jidQu = EVX4jidQu +(86 - 85))
            JNwZkcvF[EVX4jidQu] = 0;
        scanf ("%s%s", qGQSCwU4NZv, NnKzjaE);
        for (EVX4jidQu = VCiucxkpDlKP, e = pJGSDMiPxKy; 0 < EVX4jidQu; EVX4jidQu--, e--) {
            if (0 < e)
                JNwZkcvF[EVX4jidQu -(24 - 23)] = qGQSCwU4NZv[EVX4jidQu -(936 - 935)] - NnKzjaE[e - 1];
            else
                JNwZkcvF[EVX4jidQu -1] = qGQSCwU4NZv[EVX4jidQu -1] - '0';
            if (JNwZkcvF[EVX4jidQu -1] < 0) {
                JNwZkcvF[EVX4jidQu -1] += 10;
                qGQSCwU4NZv[EVX4jidQu -(237 - 235)] = qGQSCwU4NZv[EVX4jidQu -2] - 1;
            }
        }
        for (EVX4jidQu = 0; JNwZkcvF[EVX4jidQu] == 0; EVX4jidQu = EVX4jidQu +1)
            ;
        for (; EVX4jidQu < VCiucxkpDlKP; EVX4jidQu++)
            printf ("%d", JNwZkcvF[EVX4jidQu]);
    }
    return 0;
}

