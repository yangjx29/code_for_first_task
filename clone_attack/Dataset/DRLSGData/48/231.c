int Akneb8d [(967 - 956)] [(877 - 866)] = {(429 - 429)}, m9xQzmrov4 [11] [11] = {(893 - 893)};

void  DdmcNqI5V4On (int JI9kUpdKg1) {
    if (!((557 - 557) != JI9kUpdKg1)) {
        return;
    }
    int tKfGTA7it;
    int TyT4ldEt2U;
    for (tKfGTA7it = (370 - 369); (681 - 671) > tKfGTA7it; tKfGTA7it = tKfGTA7it + 1) {
        TyT4ldEt2U = (260 - 259);
        while (TyT4ldEt2U < (119 - 109)) {
            m9xQzmrov4[tKfGTA7it + (740 - 739)][TyT4ldEt2U +(786 - 785)] += Akneb8d[tKfGTA7it][TyT4ldEt2U];
            m9xQzmrov4[tKfGTA7it + (746 - 745)][TyT4ldEt2U -(848 - 847)] += Akneb8d[tKfGTA7it][TyT4ldEt2U];
            m9xQzmrov4[tKfGTA7it - (624 - 623)][TyT4ldEt2U -(56 - 55)] += Akneb8d[tKfGTA7it][TyT4ldEt2U];
            m9xQzmrov4[tKfGTA7it - (594 - 593)][TyT4ldEt2U +1] += Akneb8d[tKfGTA7it][TyT4ldEt2U];
            m9xQzmrov4[tKfGTA7it - 1][TyT4ldEt2U] += Akneb8d[tKfGTA7it][TyT4ldEt2U];
            m9xQzmrov4[tKfGTA7it + 1][TyT4ldEt2U] += Akneb8d[tKfGTA7it][TyT4ldEt2U];
            m9xQzmrov4[tKfGTA7it][TyT4ldEt2U -1] += Akneb8d[tKfGTA7it][TyT4ldEt2U];
            m9xQzmrov4[tKfGTA7it][TyT4ldEt2U +1] = m9xQzmrov4[tKfGTA7it][TyT4ldEt2U +1] + Akneb8d[tKfGTA7it][TyT4ldEt2U];
            m9xQzmrov4[tKfGTA7it][TyT4ldEt2U] = m9xQzmrov4[tKfGTA7it][TyT4ldEt2U] + Akneb8d[tKfGTA7it][TyT4ldEt2U];
            TyT4ldEt2U++;
        }
    }
    {
        tKfGTA7it = 1;
        while ((473 - 463) > tKfGTA7it) {
            TyT4ldEt2U = 1;
            while (TyT4ldEt2U < 10) {
                Akneb8d[tKfGTA7it][TyT4ldEt2U] = m9xQzmrov4[tKfGTA7it][TyT4ldEt2U];
                TyT4ldEt2U++;
            }
            tKfGTA7it = tKfGTA7it + 1;
        }
    }
    return DdmcNqI5V4On (JI9kUpdKg1 -1);
}

int main () {
    int Jtwjcnlqz;
    int JI9kUpdKg1;
    int tKfGTA7it;
    int TyT4ldEt2U;
    cin >> Jtwjcnlqz >> JI9kUpdKg1;
    Akneb8d[(298 - 293)][5] = Jtwjcnlqz;
    m9xQzmrov4[5][5] = Jtwjcnlqz;
    DdmcNqI5V4On (JI9kUpdKg1);
    for (tKfGTA7it = 1; tKfGTA7it < 10; tKfGTA7it = tKfGTA7it + 1) {
        for (TyT4ldEt2U = 1; TyT4ldEt2U < 9; TyT4ldEt2U++) {
            cout << m9xQzmrov4[tKfGTA7it][TyT4ldEt2U] << " ";
        }
        cout << m9xQzmrov4[tKfGTA7it][TyT4ldEt2U] << endl;
    }
    return 0;
}

