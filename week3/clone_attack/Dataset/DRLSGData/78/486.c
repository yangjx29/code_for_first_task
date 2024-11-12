int main () {
    int z, LdPuSNAM, s, xQnaJ5zmcrD;
    for (z = (750 - 740); z < (1049 - 989); z = z + (338 - 328)) {
        for (LdPuSNAM = (46 - 36); LdPuSNAM < (191 - 131); LdPuSNAM = LdPuSNAM +(495 - 485)) {
            for (s = (911 - 901); s < 60; s = s + (303 - 293)) {
                for (xQnaJ5zmcrD = 10; xQnaJ5zmcrD < 60; xQnaJ5zmcrD = xQnaJ5zmcrD + 10) {
                    if (z + LdPuSNAM == s + xQnaJ5zmcrD && z + xQnaJ5zmcrD > s + LdPuSNAM &&z + s < LdPuSNAM) {
                        if (xQnaJ5zmcrD > LdPuSNAM > s > z)
                            cout << "l " << xQnaJ5zmcrD << endl << "q " << LdPuSNAM << endl << "s " << s << endl << "z " << z;
                        else if (xQnaJ5zmcrD < LdPuSNAM &&xQnaJ5zmcrD > s && s > z)
                            cout << "q " << LdPuSNAM << endl << "l " << xQnaJ5zmcrD << endl << "s " << s << endl << "z " << z;
                        else if (LdPuSNAM > xQnaJ5zmcrD && xQnaJ5zmcrD > z && s < z)
                            cout << "q " << LdPuSNAM << endl << "l " << xQnaJ5zmcrD << endl << "z " << z << endl << "s " << s;
                        else if (xQnaJ5zmcrD > LdPuSNAM &&LdPuSNAM > z && z > s)
                            cout << "l " << xQnaJ5zmcrD << endl << "q " << LdPuSNAM << endl << "z " << z << endl << "s " << s;
                        else if (LdPuSNAM > z && xQnaJ5zmcrD < z && xQnaJ5zmcrD > s)
                            cout << "q " << LdPuSNAM << endl << "z " << z << endl << "l " << xQnaJ5zmcrD << endl << "s " << s;
                        else if (LdPuSNAM > s && s > xQnaJ5zmcrD && xQnaJ5zmcrD > z)
                            cout << "q " << LdPuSNAM << endl << "s " << s << endl << "l " << xQnaJ5zmcrD << endl << "z " << z;
                        else if (LdPuSNAM > z && z > s && s > xQnaJ5zmcrD)
                            cout << "q " << LdPuSNAM << endl << "z " << z << endl << "s " << s << endl << "l " << xQnaJ5zmcrD;
                        else if (LdPuSNAM > s && s > z && z > xQnaJ5zmcrD)
                            cout << "q " << LdPuSNAM << endl << "s " << s << endl << "z " << z << endl << "l " << xQnaJ5zmcrD;
                    }
                }
            }
        }
    }
    return 0;
}

