int main () {
    int NQPNbterJ, z2kMYhDS, zdXMpx, JNL5MR, C4roHFM5, ItuS3i, V157dPVU [100] = {0}, yL7ZUPA [100] [100];
    int *RMhymBgFXr9j = NULL;
    cin >> zdXMpx;
    for (NQPNbterJ = 0; zdXMpx > NQPNbterJ; NQPNbterJ = NQPNbterJ +1) {
        cin >> C4roHFM5 >> ItuS3i;
        for (JNL5MR = 0; C4roHFM5 > JNL5MR; JNL5MR = JNL5MR +1)
            for (z2kMYhDS = 0; ItuS3i > z2kMYhDS; z2kMYhDS = z2kMYhDS + 1)
                cin >> yL7ZUPA[JNL5MR][z2kMYhDS];
        for (JNL5MR = 0; C4roHFM5 > JNL5MR; JNL5MR = JNL5MR +1) {
            RMhymBgFXr9j = yL7ZUPA[JNL5MR];
            V157dPVU[NQPNbterJ] = V157dPVU[NQPNbterJ] + *RMhymBgFXr9j;
            RMhymBgFXr9j = yL7ZUPA[JNL5MR] + ItuS3i -1;
            V157dPVU[NQPNbterJ] = V157dPVU[NQPNbterJ] + *RMhymBgFXr9j;
        }
        for (z2kMYhDS = 1; ItuS3i -1 > z2kMYhDS; z2kMYhDS = z2kMYhDS + 1) {
            RMhymBgFXr9j = yL7ZUPA[0] + z2kMYhDS;
            V157dPVU[NQPNbterJ] = V157dPVU[NQPNbterJ] + *RMhymBgFXr9j;
            RMhymBgFXr9j = yL7ZUPA[C4roHFM5 -1] + z2kMYhDS;
            V157dPVU[NQPNbterJ] += *RMhymBgFXr9j;
        }
    }
    for (NQPNbterJ = 0; zdXMpx > NQPNbterJ; NQPNbterJ = NQPNbterJ +1)
        cout << V157dPVU[NQPNbterJ] << endl;
    return 0;
}

