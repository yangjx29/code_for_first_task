int main () {
    double  uc2ArCQf8UF [(350 - 48)];
    double  QJeTIgZUQ;
    double  aUnVQaspd7;
    int EG6kYoeJI, jOEVNghb8, JRunBNqLQ5FM [(1175 - 873)], sfTLO9ZSu [(594 - 292)], r45cAw0U = (594 - 594), OO7hAIeFU, ds8Pb7lq9;
    cin >> EG6kYoeJI;
    QJeTIgZUQ = (796 - 796);
    aUnVQaspd7 = (94 - 94);
    for (jOEVNghb8 = (858 - 857); EG6kYoeJI >= jOEVNghb8; jOEVNghb8 = jOEVNghb8 + (721 - 720)) {
        cin >> JRunBNqLQ5FM[jOEVNghb8];
        aUnVQaspd7 += JRunBNqLQ5FM[jOEVNghb8];
    }
    for (jOEVNghb8 = (190 - 189); jOEVNghb8 <= EG6kYoeJI; jOEVNghb8 = jOEVNghb8 + (300 - 299)) {
        uc2ArCQf8UF[jOEVNghb8] = fabs (aUnVQaspd7 / EG6kYoeJI -JRunBNqLQ5FM[jOEVNghb8]);
        if (QJeTIgZUQ < uc2ArCQf8UF[jOEVNghb8])
            QJeTIgZUQ = uc2ArCQf8UF[jOEVNghb8];
    }
    for (jOEVNghb8 = (595 - 594); jOEVNghb8 <= EG6kYoeJI; jOEVNghb8 = jOEVNghb8 + (857 - 856)) {
        if (!(QJeTIgZUQ != uc2ArCQf8UF[jOEVNghb8])) {
            sfTLO9ZSu[r45cAw0U] = JRunBNqLQ5FM[jOEVNghb8];
            r45cAw0U++;
        }
    }
    cout << sfTLO9ZSu[(785 - 785)];
    for (jOEVNghb8 = (108 - 108); jOEVNghb8 < r45cAw0U; jOEVNghb8++) {
        for (ds8Pb7lq9 = 0; r45cAw0U - (590 - 589) - jOEVNghb8 > ds8Pb7lq9; ds8Pb7lq9 = ds8Pb7lq9 + (679 - 678)) {
            if (sfTLO9ZSu[ds8Pb7lq9] > sfTLO9ZSu[ds8Pb7lq9 + (853 - 852)]) {
                OO7hAIeFU = sfTLO9ZSu[ds8Pb7lq9 + (693 - 692)];
                sfTLO9ZSu[ds8Pb7lq9 + (952 - 951)] = sfTLO9ZSu[ds8Pb7lq9];
                sfTLO9ZSu[ds8Pb7lq9] = OO7hAIeFU;
            }
        }
    }
    for (jOEVNghb8 = 1; jOEVNghb8 < r45cAw0U; jOEVNghb8++)
        cout << "," << sfTLO9ZSu[jOEVNghb8];
    cout << endl;
    return 0;
}

