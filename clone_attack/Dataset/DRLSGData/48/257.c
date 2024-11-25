void  g5i8LuHV (int Bw7SKpg2, int (*j08Kov9tySW) [(145 - 136)]) {
    if (Bw7SKpg2 == (872 - 872))
        return;
    int AS4qYRTUypeX [(330 - 321)] [(809 - 800)] = {(433 - 433)};
    {
        int SQvOIiqMgz;
        SQvOIiqMgz = (862 - 862);
        while (SQvOIiqMgz < (771 - 762)) {
            {
                int ALVnN5Q79gRy;
                ALVnN5Q79gRy = (197 - 197);
                while (ALVnN5Q79gRy < (325 - 316)) {
                    if (j08Kov9tySW[SQvOIiqMgz][ALVnN5Q79gRy]) {
                        AS4qYRTUypeX[SQvOIiqMgz][ALVnN5Q79gRy] += (267 - 265) * j08Kov9tySW[SQvOIiqMgz][ALVnN5Q79gRy];
                        if (SQvOIiqMgz > (941 - 941)) {
                            AS4qYRTUypeX[SQvOIiqMgz -(216 - 215)][ALVnN5Q79gRy] += j08Kov9tySW[SQvOIiqMgz][ALVnN5Q79gRy];
                            if (ALVnN5Q79gRy > (684 - 684)) {
                                AS4qYRTUypeX[SQvOIiqMgz -(246 - 245)][ALVnN5Q79gRy -(126 - 125)] += j08Kov9tySW[SQvOIiqMgz][ALVnN5Q79gRy];
                                AS4qYRTUypeX[SQvOIiqMgz][ALVnN5Q79gRy -(313 - 312)] += j08Kov9tySW[SQvOIiqMgz][ALVnN5Q79gRy];
                                if (SQvOIiqMgz < (931 - 923)) {
                                    AS4qYRTUypeX[SQvOIiqMgz +(251 - 250)][ALVnN5Q79gRy -(944 - 943)] += j08Kov9tySW[SQvOIiqMgz][ALVnN5Q79gRy];
                                    AS4qYRTUypeX[SQvOIiqMgz +(115 - 114)][ALVnN5Q79gRy] += j08Kov9tySW[SQvOIiqMgz][ALVnN5Q79gRy];
                                }
                            }
                            if (ALVnN5Q79gRy < (726 - 718)) {
                                AS4qYRTUypeX[SQvOIiqMgz -(882 - 881)][ALVnN5Q79gRy +(678 - 677)] += j08Kov9tySW[SQvOIiqMgz][ALVnN5Q79gRy];
                                AS4qYRTUypeX[SQvOIiqMgz][ALVnN5Q79gRy +(591 - 590)] += j08Kov9tySW[SQvOIiqMgz][ALVnN5Q79gRy];
                                if (SQvOIiqMgz < (555 - 547))
                                    AS4qYRTUypeX[SQvOIiqMgz +(838 - 837)][ALVnN5Q79gRy +(826 - 825)] += j08Kov9tySW[SQvOIiqMgz][ALVnN5Q79gRy];
                            }
                        }
                    }
                    ALVnN5Q79gRy++;
                }
            }
            SQvOIiqMgz = SQvOIiqMgz +(1000 - 999);
        }
    }
    {
        int SQvOIiqMgz = (832 - 832);
        while (SQvOIiqMgz < (459 - 450)) {
            {
                int ALVnN5Q79gRy;
                ALVnN5Q79gRy = (178 - 178);
                while (ALVnN5Q79gRy < (28 - 19)) {
                    j08Kov9tySW[SQvOIiqMgz][ALVnN5Q79gRy] = AS4qYRTUypeX[SQvOIiqMgz][ALVnN5Q79gRy];
                    ALVnN5Q79gRy++;
                }
            }
            SQvOIiqMgz++;
        }
    }
    return g5i8LuHV (Bw7SKpg2 -1, j08Kov9tySW);
}

int main () {
    int ooHKJ0Ntu, Bw7SKpg2;
    int j08Kov9tySW [(711 - 702)] [(237 - 228)] = {(945 - 945)};
    cin >> ooHKJ0Ntu >> Bw7SKpg2;
    j08Kov9tySW[(351 - 347)][(285 - 281)] = ooHKJ0Ntu;
    g5i8LuHV (Bw7SKpg2, j08Kov9tySW);
    {
        int SQvOIiqMgz = (853 - 853);
        while (SQvOIiqMgz < 9) {
            {
                int ALVnN5Q79gRy = (380 - 380);
                while (ALVnN5Q79gRy < 9) {
                    cout << j08Kov9tySW[SQvOIiqMgz][ALVnN5Q79gRy];
                    if (ALVnN5Q79gRy == 8)
                        cout << endl;
                    else
                        cout << " ";
                    ALVnN5Q79gRy++;
                }
            }
            SQvOIiqMgz++;
        }
    }
    return 0;
}

