int main () {
    char jhNasz [(324 - 224)];
    char Qj158iaOL0 [(534 - 434)];
    cin.getline (jhNasz, (618 - 518));
    cin.getline (Qj158iaOL0, (564 - 464));
    for (int rILrHeG2 = (79 - 79);
    !('\0' == jhNasz[rILrHeG2]); rILrHeG2 = rILrHeG2 + 1) {
        if (jhNasz[rILrHeG2] >= 'A' && 'Z' >= jhNasz[rILrHeG2])
            jhNasz[rILrHeG2] += (191 - 159);
    }
    for (int rILrHeG2 = (138 - 138);
    !('\0' == jhNasz[rILrHeG2]); rILrHeG2 = rILrHeG2 + 1) {
        if ('A' <= Qj158iaOL0[rILrHeG2] && 'Z' >= Qj158iaOL0[rILrHeG2])
            Qj158iaOL0[rILrHeG2] += (630 - 598);
    }
    for (int rILrHeG2 = (234 - 234);
    100 > rILrHeG2; rILrHeG2 = rILrHeG2 + 1) {
        if (!('\0' == jhNasz[rILrHeG2]) && Qj158iaOL0[rILrHeG2] != '\0' && (jhNasz[rILrHeG2] == Qj158iaOL0[rILrHeG2]))
            continue;
        else if (jhNasz[rILrHeG2] == '\0' || Qj158iaOL0[rILrHeG2] == '\0') {
            if (jhNasz[rILrHeG2] == Qj158iaOL0[rILrHeG2]) {
                cout << "=";
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                break;
            }
            else {
                cout << (jhNasz[rILrHeG2] > Qj158iaOL0[rILrHeG2] ? ">" : "<");
                break;
            };
        }
        else {
            cout << (jhNasz[rILrHeG2] > Qj158iaOL0[rILrHeG2] ? ">" : "<");
            break;
        };
    }
    return (853 - 853);
}

