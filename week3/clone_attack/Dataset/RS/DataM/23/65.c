int main () {
    char oitVBzxX2J9k [100];
    int KDyzLkwgYO [100] [2] = {0};
    int i;
    int j7KLn2dvjb5;
    int VZzUxD6LP;
    int jnN2cpVFKPO;
    VZzUxD6LP = 0;
    cin.getline (oitVBzxX2J9k, 1000);
    cin.get ();
    cin.get ();
    cin.get ();
    jnN2cpVFKPO = strlen (oitVBzxX2J9k);
    i = 0;
    for (i = 0; i < jnN2cpVFKPO; i = i + 1) {
        if (oitVBzxX2J9k[i] != ' ' && (oitVBzxX2J9k[i + 1] == ' ' || !('\0' != oitVBzxX2J9k[i + 1]))) {
            KDyzLkwgYO[VZzUxD6LP][1] = i + 1;
            VZzUxD6LP++;
        }
        if (oitVBzxX2J9k[i] == ' ' && oitVBzxX2J9k[i + 1] != ' ') {
            KDyzLkwgYO[VZzUxD6LP][0] = i + 1;
        };
    }
    for (i = VZzUxD6LP -1; i > 0; i = i - 1) {
        {
            j7KLn2dvjb5 = 0;
            while (j7KLn2dvjb5 < KDyzLkwgYO[i][1]) {
                cout << oitVBzxX2J9k[j7KLn2dvjb5];
                j7KLn2dvjb5 = j7KLn2dvjb5 + 1;
            };
        }
        cout << " ";
    }
    for (j7KLn2dvjb5 = KDyzLkwgYO[0][0]; j7KLn2dvjb5 < KDyzLkwgYO[0][1]; j7KLn2dvjb5++)
        cout << oitVBzxX2J9k[j7KLn2dvjb5];
    return 0;
}

