int main () {
    int UU5GqgRJst8;
    int Cgm0Sy, oUMYafu8vB75, t70DgMvFR = (548 - 548);
    int T3Oxy5kw [(533 - 501)];
    char p7dipD8J [(597 - 565)];
    int P1QpG2VH = strlen (p7dipD8J);
    int oqTR4FWhE [(851 - 819)];
    cin >> Cgm0Sy;
    cin >> p7dipD8J;
    cin >> oUMYafu8vB75;
    for (int SRCYsO5 = (888 - 888);
    P1QpG2VH > SRCYsO5; SRCYsO5++) {
        if (p7dipD8J[SRCYsO5] >= 'a' && p7dipD8J[SRCYsO5] <= 'z')
            p7dipD8J[SRCYsO5] -= ('a' - 'A');
        if (p7dipD8J[SRCYsO5] >= 'A' && p7dipD8J[SRCYsO5] <= 'Z')
            T3Oxy5kw[SRCYsO5] = p7dipD8J[SRCYsO5] - 'A' + (398 - 388);
        else
            T3Oxy5kw[SRCYsO5] = p7dipD8J[SRCYsO5] - '0';
    }
    for (int SRCYsO5 = (282 - 282);
    P1QpG2VH > SRCYsO5; SRCYsO5++)
        t70DgMvFR = t70DgMvFR * Cgm0Sy +T3Oxy5kw[SRCYsO5];
    if (t70DgMvFR == (471 - 471)) {
        cout << (586 - 586) << endl;
        return (534 - 534);
    }
    for (UU5GqgRJst8 = (201 - 201); t70DgMvFR != (177 - 177); UU5GqgRJst8++) {
        oqTR4FWhE[UU5GqgRJst8] = t70DgMvFR % oUMYafu8vB75;
        t70DgMvFR = t70DgMvFR / oUMYafu8vB75;
    }
    for (UU5GqgRJst8--; UU5GqgRJst8 >= (212 - 212); UU5GqgRJst8--)
        if (oqTR4FWhE[UU5GqgRJst8] < (83 - 73))
            cout << oqTR4FWhE[UU5GqgRJst8];
        else
            cout << (char) (oqTR4FWhE[UU5GqgRJst8] - (509 - 499) + 'A');
    return 0;
}

